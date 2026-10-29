@interface MMFinderLiveGiftStarBannerView : UIControl
{
    BOOL _exposed; // +0x8
    id /* block */ _clickedBlock; // +0x10
    id /* block */ _exposedBlock; // +0x18
    UIView * _badgeView; // +0x20
    MMUILabel * _textLabel; // +0x28
    NSString * _lastUpdateSignature; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithBannerInfo:(id)arg1;
- (void)fireExposedIfNeeded;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)onClick;
- (id /* block */)clickedBlock;
- (void)setClickedBlock:(id /* block */)arg1;
- (id /* block */)exposedBlock;
- (void)setExposedBlock:(id /* block */)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (BOOL)exposed;
- (void)setExposed:(BOOL)arg1;
- (id)lastUpdateSignature;
- (void)setLastUpdateSignature:(id)arg1;
- (void).cxx_destruct;
@end
