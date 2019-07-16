//
//  QTORefreshConfiguration.h
//  QTOpenAdSDK
//
//  Created by 庞伊明 on 2019/6/24.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "MJRefresh.h"

@interface QTORefreshConfiguration : NSObject
/**
 隐藏刷新时间
 */
@property(nonatomic,assign)BOOL hideUpdatedTimeLabel;

/**
 隐藏刷新状态
 */
@property(nonatomic,assign)BOOL hideStateLabel;

/**
 正常状态下的文字
 */
@property(nonatomic,copy)NSString * normalTitle;

/**
 下拉状态下的文字
 */
@property(nonatomic,copy)NSString * pullTitle;

/**
 刷新中的文字
 */
@property(nonatomic,copy)NSString * refreshTitle;

/**
 没有更多的文字
 */
@property(nonatomic,copy)NSString * noMoreDataTitle;

/**
 刷新时间颜色
 */
@property(nonatomic,strong)UIColor * timeLabelColor;

/**
 状态颜色
 */
@property(nonatomic,strong)UIColor * stateLableColor;

/**
 刷新时间字体
 */
@property(nonatomic,strong)UIFont * timeLableFont;

/**
 状态字体
 */
@property(nonatomic,strong)UIFont * stateLableFont;

/**
 设置正常状态下的图片
 */
@property(nonatomic,strong)NSArray<UIImage*> * normalImgs;

/**
 设置下拉过程中的图片
 */
@property(nonatomic,strong)NSArray<UIImage*> * pullingImgs;

/**
 设置刷新过程中的图片
 */
@property(nonatomic,strong)NSArray<UIImage*> * refreshingImgs;
@end


#pragma mark- QTORefreshHeaderStyle
@interface QTORefreshHeaderStyle : QTORefreshConfiguration

/**
 获取header实例

 @return header
 */
+ (QTORefreshHeaderStyle*)qt_shareRefreshHeader;

- (void)reset;
@end

#pragma mark- QTORefreshFooterStyle
@interface QTORefreshFooterStyle : QTORefreshConfiguration

/**
 获取footer实例

 @return footer
 */
+ (QTORefreshFooterStyle*)qt_shareRefreshFooter;
- (void)reset;

@end

