@interface NameEditorViewController : MMUIViewController <UITextFieldDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCTableViewNormalCellManager * m_editInfo; // +0x70
    NSString * m_nsOldText; // +0x78
    NSString * m_nsFooterTip; // +0x80
    NSString * m_nsHeaderTip; // +0x88
    id m_targetOnSave; // +0x90
    SEL m_selOnSave; // +0x98
    BOOL m_bEnableEmpty; // +0xa0
    BOOL m_bAutoDismis; // +0xa1
    id m_userData; // +0xa8
    unsigned int m_uiScene; // +0xb0
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)disMissThisViewAnimated;
- (void)onSaveText;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)updateWordCount:(id)arg1;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 footerTip:(id)arg3 textTip:(id)arg4;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 headerTip:(id)arg3 footerTip:(id)arg4 textTip:(id)arg5;
- (void)dealloc;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (void)enableAutoCorrect:(BOOL)arg1;
- (id)m_nsOldText;
- (void)setM_nsOldText:(id)arg1;
- (BOOL)m_bEnableEmpty;
- (void)setM_bEnableEmpty:(BOOL)arg1;
- (BOOL)m_bAutoDismis;
- (void)setM_bAutoDismis:(BOOL)arg1;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (id)m_editInfo;
- (void)setM_editInfo:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

