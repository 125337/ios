@interface MJPublisherPickerComposingButtonManager : NSObject
{
    BOOL _isUsingNewYearStyle; // +0x8
    MJTemplateComposingButton * _springFestivalButtonForPreviewing; // +0x10
    MJTemplateComposingButton * _springFestivalButtonForNonPreviewing; // +0x18
    UIButton * _normalButtonForPreviewing; // +0x20
    UIButton * _normalButtonForNonPreviewing; // +0x28
}
- (id)init;
- (void)setupButtons;
- (id)makeNormalStyleButton;
- (id)makeSpringFestivalStyleButton;
- (void)updateIsUsingNewYearStyle;
- (void)calcIsUsingNewYearStyle;
- (void)composingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)composingButtonForAssetPreviewing:(BOOL)arg1;
- (id)springFestivalButtonForPreviewing;
- (void)setSpringFestivalButtonForPreviewing:(id)arg1;
- (id)springFestivalButtonForNonPreviewing;
- (void)setSpringFestivalButtonForNonPreviewing:(id)arg1;
- (id)normalButtonForPreviewing;
- (void)setNormalButtonForPreviewing:(id)arg1;
- (id)normalButtonForNonPreviewing;
- (void)setNormalButtonForNonPreviewing:(id)arg1;
- (BOOL)isUsingNewYearStyle;
- (void)setIsUsingNewYearStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

