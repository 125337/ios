@interface MMFinderLiveFeedNoticeDetailBindCouponView : MMFinderLiveFeedNoticeDetailBindItemContentView
{
    UIButton * _actionButton; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _stateLabel; // +0x20
    UIImageView * _doneView; // +0x28
}
+ (BOOL)shouldDisplayWithAnchor:(id)arg1 notice:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (void)updateButton;
- (void)onActionButtonClicked;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)doneView;
- (void)setDoneView:(id)arg1;
- (void).cxx_destruct;
@end
