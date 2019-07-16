//
//  QTOIndicatorView.h
//  QTOpenAdSDK
//
//  Created by 庞伊明 on 2019/7/3.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import <QTOpenAdSDK/QTOpenAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface QTOIndicatorView : QTOBaseView
@property (nonatomic,strong)UIActivityIndicatorView * indicatorView;

+ (QTOIndicatorView*)qt_shareIndicator;
- (void)setCustomIndicatorView:(UIView*)indicator;
- (void)show;
- (void)dismiss;
- (void)reset;
@end

NS_ASSUME_NONNULL_END
