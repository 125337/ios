@interface MMFinderLivePaymentTrialModeCell : MMUIView
{
    BOOL _isSelected; // +0x8
    id <MMFinderLivePaymentTrialModeCellDelegate> _delegate; // +0x10
    NSString * _detailTitle; // +0x18
    NSString * _detailDescription; // +0x20
    long long _purchaseLivePreviewType; // +0x28
    MMUILabel * _detailTitleLabel; // +0x30
    MMUILabel * _detailDescriptionLabel; // +0x38
    MMUIImageView * _selectStatusImageView; // +0x40
    UIView * _separatorLine; // +0x48
    UITapGestureRecognizer * _tapGesture; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 purchaseLivePreviewType:(long long)arg2;
- (void)onTapped;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setDetailTitle:(id)arg1;
- (void)setDetailDescription:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailTitle;
- (id)detailDescription;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (id)detailTitleLabel;
- (void)setDetailTitleLabel:(id)arg1;
- (id)detailDescriptionLabel;
- (void)setDetailDescriptionLabel:(id)arg1;
- (id)selectStatusImageView;
- (void)setSelectStatusImageView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

