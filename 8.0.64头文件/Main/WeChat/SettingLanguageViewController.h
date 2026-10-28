@interface SettingLanguageViewController : SettingBaseViewController
{
    unsigned int m_uiCurIndex; // +0x80
    unsigned int m_uiCurWorkingIndex; // +0x84
    NSArray * m_arrLanguages; // +0x88
    NSArray * m_arrLanguageDisplayNames; // +0x90
    BOOL _showInWeCheck; // +0x98
}
- (void)initLanguageData;
- (void)viewDidLoad;
- (void)reportSwitchSucceed;
- (void)cancel;
- (void)save;
- (void)doChangeLanguage;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)registerYReportSdk;
- (BOOL)showInWeCheck;
- (void)setShowInWeCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end
