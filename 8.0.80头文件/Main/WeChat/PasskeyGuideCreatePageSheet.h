@interface PasskeyGuideCreatePageSheet : MMAutoLayoutSheetView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    PasskeyGuideCreateConfig * _m_config; // +0x8
}
- (id)initWithConfig:(id)arg1;
- (void)customArrangeViews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (id)m_config;
- (void)setM_config:(id)arg1;
- (void).cxx_destruct;
@end
