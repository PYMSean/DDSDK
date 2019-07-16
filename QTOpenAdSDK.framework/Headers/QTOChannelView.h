//
//  QTOChannelView.h
//  QTOpenAdSDK
//
//  Created by 庞伊明 on 2019/6/18.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import "QTOBaseView.h"
#import <UIKit/UIKit.h>

@interface QTOChannelView : QTOBaseView
- (instancetype)initWithFrame:(CGRect)frame;


/**
 每当channelView 移除当前屏幕的时候(没有被销毁的情况下)，调用该方法；
 */
- (void)willDisappear;


/**
 当channelView再次出现在当前屏幕的时候，调用
 */
- (void)willAppear;

@end

