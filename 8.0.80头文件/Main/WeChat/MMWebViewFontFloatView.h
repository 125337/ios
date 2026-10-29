@interface MMWebViewFontFloatView : MMUIButton <MMStepSliderDelegate>
{
    UIImageView * viewBg; // +0x8
    unsigned int m_uiFontType; // +0x10
    unsigned int m_uiMaxLevel; // +0x14
    MMStepSlider * m_slider; // +0x18
    id <MMWebViewFontFloatViewDelegate> m_delegate; // +0x20
    BOOL m_bAnimating; // +0x28
}
- (void)mmSliderViewChange:(unsigned int)arg1;
- (void)onClose;
- (id)initWithFontType:(unsigned int)arg1 maxLevel:(unsigned int)arg2 attachToView:(id)arg3;
- (void)initSlider:(unsigned int)arg1 maxLevel:(unsigned int)arg2;
- (void)delayShow;
- (void)showUp;
- (void)slideOut;
- (void)dealloc;
- (void)layoutSubviews;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
