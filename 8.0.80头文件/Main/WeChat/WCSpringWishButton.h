@interface WCSpringWishButton : MMUIButton
{
    BOOL _isSpringWished; // +0x8
    UIImageView * _springImageView; // +0x10
    MMUILabel * _springWishLabel; // +0x18
    MMUILabel * _springWishDeliveredLabel; // +0x20
    WCSpringWishButtonModel * _viewModel; // +0x28
}
+ (CGSize)getSpringWishBtnSize:(double)arg1;
- (id)initWithModel:(id)arg1;
- (void)initViews;
- (void)setViewModel:(id)arg1;
- (void)initSpringImageView;
- (void)initSpringWishLabel;
- (void)initSpringWishDeliveredLabel;
- (id)getSpringTitleText;
- (id)getSpringTitleTextColor;
- (void)touchUp:(id)arg1;
- (void)replyNewYearGreeting;
- (void)layoutSubviews;
- (void)unWishAnimateToWished;
- (void)configSpringWishDataReport;
- (id)genSpringWishReportDict;
- (BOOL)isSpringWished;
- (void)setIsSpringWished:(BOOL)arg1;
- (id)springImageView;
- (void)setSpringImageView:(id)arg1;
- (id)springWishLabel;
- (void)setSpringWishLabel:(id)arg1;
- (id)springWishDeliveredLabel;
- (void)setSpringWishDeliveredLabel:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end
