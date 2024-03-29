//
//  MobileTracking.h
//  MobileTracking
//
//  Created by Wenqi on 14-3-11.
//  Copyright (c) 2014年 Admaster. All rights reserved.
//

//#define MMA_SDK_VERSION @"1.3.0"

#import <Foundation/Foundation.h>

@interface MobileTracking : NSObject

+ (MobileTracking *)sharedInstance;

// 配置远程XML配置文件地址
- (void)configFromUrl:(NSString *)url;

// 是否开启调试日志
- (void)enableLog:(BOOL)enableLog;

// 点击
- (void)click:(NSString *)url;

// 曝光
- (void)view:(NSString *)url;

// 清空待发送任务队列和发送失败任务队列
- (BOOL)clearAll;

// 清空发送失败任务队列
- (BOOL)clearErrorList;

// 进入后台调用
- (void)didEnterBackground;

// 进入前台调用
- (void)didEnterForeground;

// 结束时调用
- (void)willTerminate;


@end
