@interface BrandProfileNaviLiveBar : MMUIView
{
    id <BrandProfileNaviLiveBarDelegate> _delegate; // +0x8
    MMUIImageView * _finderIcon; // +0x10
    MMUILabel * _finderLabel; // +0x18
    MMUIImageView * _finderArrow; // +0x20
    MMUIButton * _clickButtonMask; // +0x28
}
- (id)init;
- (void)initSelf;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onButtonClicked;
- (void)onButtonTouchDown:(id)arg1;
- (void)onButtonTouchUp:(id)arg1;
- (id)accessibilityLabel;
- (id)finderIcon;
- (id)finderLabel;
- (id)finderArrow;
- (id)clickButtonMask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFinderIcon:(id)arg1;
- (void)setFinderLabel:(id)arg1;
- (void)setFinderArrow:(id)arg1;
- (void)setClickButtonMask:(id)arg1;
- (void).cxx_destruct;
@end

