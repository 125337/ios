@interface MMFinderLiveOnlineStateHotCardView : UIView
{
    id <MMFinderLiveOnlineStateHotCardViewDelegate> _delegate; // +0x8
    FinderJumpInfo * _jumpInfo; // +0x10
    UIView * _backgroundView; // +0x18
    MMWebImageView * _leftIconView; // +0x20
    UILabel * _label; // +0x28
    UIImageView * _rightIconView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (double)backgroundViewHeight;
- (UIEdgeInsets)padding;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onClicked;
- (void)updateWithJumpInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)rightIconView;
- (void)setRightIconView:(id)arg1;
- (void).cxx_destruct;
@end
