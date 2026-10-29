@interface TranslateLanguageSelectView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _bShowCloseBtn; // +0x8
    id <TranslateLanguageSelectViewDelegate> _delegate; // +0x10
    NSString * _selectedLanguageType; // +0x18
    UIView * _selectedPanelView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 bShowCloseBtn:(BOOL)arg2;
- (void)configPageSheet;
- (void)configSelectedPanelView;
- (void)setSelectedLanguageType:(id)arg1;
- (void)setChatName:(id)arg1;
- (id)getChatName;
- (void)showWithAnimated:(BOOL)arg1;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetWillClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedLanguageType;
- (id)selectedPanelView;
- (void)setSelectedPanelView:(id)arg1;
- (BOOL)bShowCloseBtn;
- (void)setBShowCloseBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
