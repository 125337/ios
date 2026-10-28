@interface WCMomentsScrollActionSheetBizOriginalArticleRowView : MMUIView
{
    id <WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate> _delegate; // +0x8
    MMUIButton * _backgroundButton; // +0x10
    UIImageView * _subscriptionsImageView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    UILabel * _titleLabel; // +0x28
}
+ (double)rowViewHeight;
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)subscriptionsImageView;
- (void)setSubscriptionsImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
