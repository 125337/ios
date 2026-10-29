@interface SettingLanguageViewController : SettingBaseViewController
{
    unsigned int m_uiCurIndex; // +0x78
    unsigned int m_uiCurWorkingIndex; // +0x7c
    NSArray * m_arrLanguages; // +0x80
    NSArray * m_arrLanguageDisplayNames; // +0x88
    BOOL _showInWeCheck; // +0x90
}
- (void)initLanguageData;
- (void)viewDidLoad;
- (void)cancel;
- (void)save;
- (void)doChangeLanguage;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)showInWeCheck;
- (void)setShowInWeCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end

