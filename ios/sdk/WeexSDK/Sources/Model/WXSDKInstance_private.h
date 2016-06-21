/**
 * Created by Weex.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the Apache Licence 2.0.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>
#import "WXSDKInstance.h"
#import "WXComponentManager.h"

@interface WXSDKInstance ()

//performance
@property (nonatomic, strong) NSDate *renderStartDate;
@property (nonatomic, assign) NSTimeInterval networkTime;
@property (nonatomic, assign) NSTimeInterval communicateTime;
extern NSTimeInterval JSLibInitTime;
@property (nonatomic, assign) NSTimeInterval screenRenderTime;
@property (nonatomic, assign) NSUInteger JSTemplateSize;

@property (nonatomic, strong) NSMutableDictionary *moduleInstances;
@property (nonatomic, strong) NSMutableDictionary *naviBarStyles;
@property (nonatomic, strong) NSMutableDictionary *styleConfigs;
@property (nonatomic, strong) NSMutableDictionary *attrConfigs;

@property (nonatomic, readonly, strong) WXComponentManager *componentManager;

@end
