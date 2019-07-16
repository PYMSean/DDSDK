//
//  QTOErrorView.h
//  QTOpenAdSDK
//
//  Created by 庞伊明 on 2019/7/12.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import <QTOpenAdSDK/QTOpenAdSDK.h>

NS_ASSUME_NONNULL_BEGIN


@protocol QTOErrorViewDelegate <NSObject>


/**
 重新加载数据
 */
- (void)reloadData;

@end

@interface QTOErrorView : QTOBaseView

@property (nonatomic,assign)id<QTOErrorViewDelegate>delegate;

+ (instancetype)qt_shareErrorView;
- (void)setCustomErrorView:(UIView*)view;
- (void)setFrame:(CGRect)frame;
- (void)reset;
@end

NS_ASSUME_NONNULL_END
