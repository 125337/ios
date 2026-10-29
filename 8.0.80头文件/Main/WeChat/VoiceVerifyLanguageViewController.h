@interface VoiceVerifyLanguageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int m_uiCurIndex; // +0x70
    unsigned int m_uiCurWorkingIndex; // +0x74
    NSArray * m_arrLanguages; // +0x78
    NSArray * m_arrLanguageDisplayNames; // +0x80
    MMTableView * m_tableView; // +0x88
    id <VoiceVerifyLanguageDelegate> m_delegate; // +0x90
}
+ (id)GetLanguageNames;
+ (id)GetLanguageCodes;
+ (id)GetLanguageNameByLanguageCode:(id)arg1;
+ (id)GetLanguageCodeByCurLanguage:(id)arg1;
- (void)initLanguageData;
- (id)initWithLanguageCode:(id)arg1;
- (BOOL)useCustomNavibar;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)OnBack;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
