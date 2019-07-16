//
//  QTOpenAdSDK.h
//  QTOpenAdSDK
//
//  Created by 庞伊明 on 2019/6/18.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QTOChannelView.h"
#import "QTOPlayer.h"
#import "QTORefreshConfiguration.h"
#import "QTOIndicatorView.h"
#import "QTOReachability.h"
#import "QTOIndicatorView.h"
#import "QTOErrorView.h"

@interface QTOpenAdSDK : NSObject

@property (nonatomic,strong) NSString * clientId;

/**
 网络状态
 */
@property (nonatomic,assign)NetWorkStatus netWorkStatus;
@property (nonatomic,assign)BOOL isBackgound;
@property (nonatomic,assign)id<QTONetWorkDelegate>delegate;


/**
 返回QTOpenAdSDK实例

 @return QTOpenAdSDK实例对象
 */
+ (QTOpenAdSDK*)shareQTOpenAdSDK;


/**
 应用启动后立刻注册clientId到SDK

 @param clientId clientId
 */
+ (void)registerClientID:(NSString*)clientId;


@end

