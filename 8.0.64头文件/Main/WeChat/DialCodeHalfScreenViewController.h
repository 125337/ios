@interface DialCodeHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>
{
    BOOL _isPickingLanguage; // +0x70
    id <DialCodeHalfScreenViewControllerDelegate> _delegate; // +0x78
    NSString * _languageCode; // +0x80
    NSString * _languageName; // +0x88
    WCSheetView * _sheetView; // +0x90
    MMUILabel * _contentLabel; // +0x98
    WCRedesignButtonItem * _changeLanguageButtonItem; // +0xa0
    NSString * _pickLanguageCode; // +0xa8
    NSString * _pickLanguageName; // +0xb0
    NSArray * _arrLanguageCodes; // +0xb8
    NSArray * _arrLanguageNames; // +0xc0
    MMCommonPickerView * _pickerview; // +0xc8
}
- (id)initWithLanguageCode:(id)arg1 languageName:(id)arg2;
- (void)viewDidLoad;
- (void)onTapChangeLanguageButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)languageCode;
- (void)setLanguageCode:(id)arg1;
- (id)languageName;
- (void)setLanguageName:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)changeLanguageButtonItem;
- (void)setChangeLanguageButtonItem:(id)arg1;
- (BOOL)isPickingLanguage;
- (void)setIsPickingLanguage:(BOOL)arg1;
- (id)pickLanguageCode;
- (void)setPickLanguageCode:(id)arg1;
- (id)pickLanguageName;
- (void)setPickLanguageName:(id)arg1;
- (id)arrLanguageCodes;
- (void)setArrLanguageCodes:(id)arg1;
- (id)arrLanguageNames;
- (void)setArrLanguageNames:(id)arg1;
- (id)pickerview;
- (void)setPickerview:(id)arg1;
- (void).cxx_destruct;
@end
