@interface SettingTranslateLanguageViewController : SettingBaseViewController
{
    unsigned int m_uiCurIndex; // +0x78
    unsigned int m_uiCurWorkingIndex; // +0x7c
    NSArray * m_arrLanguages; // +0x80
    NSArray * m_arrLanguageDisplayNames; // +0x88
    int _scene; // +0x90
    id /* block */ _onTranslateLanguageChangedBlock; // +0x98
    id _userData; // +0xa0
}
- (id)init;
- (void)initLanguageData;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (id)currentSelectDisplayName;
- (void)cancel;
- (void)save;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)onTranslateLanguageChangedBlock;
- (void)setOnTranslateLanguageChangedBlock:(id /* block */)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (void).cxx_destruct;
@end

