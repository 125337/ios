@interface VoiceRecordSelectLanguageView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    unsigned int _selectedLanguageType; // +0x8
    id <VoiceRecordSelectLanguageViewDelegate> _delegate; // +0x10
    UIView * _selectedPanelView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configPageSheet;
- (void)configSelectedPanelView;
- (void)setSelectedLanguageType:(unsigned int)arg1;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)selectedLanguageType;
- (id)selectedPanelView;
- (void)setSelectedPanelView:(id)arg1;
- (void).cxx_destruct;
@end

