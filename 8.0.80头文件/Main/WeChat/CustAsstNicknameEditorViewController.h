@interface CustAsstNicknameEditorViewController : MMUIViewController <UITextFieldDelegate, IBotContactOplogExt>
{
    unsigned int _currentEventID; // +0x70
    NSString * _contactUserName; // +0x78
    NSString * _currentNickname; // +0x80
    id /* block */ _onSaveBlock; // +0x88
    MMTableViewInfo * _tableViewInfo; // +0x90
    WCTableViewNormalCellManager * _editCellInfo; // +0x98
    NSString * _pendingNickname; // +0xa0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)onCancel;
- (void)onSave;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updateDoneButtonState:(id)arg1;
- (void)onBotContactOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)contactUserName;
- (void)setContactUserName:(id)arg1;
- (id)currentNickname;
- (void)setCurrentNickname:(id)arg1;
- (id /* block */)onSaveBlock;
- (void)setOnSaveBlock:(id /* block */)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)editCellInfo;
- (void)setEditCellInfo:(id)arg1;
- (unsigned int)currentEventID;
- (void)setCurrentEventID:(unsigned int)arg1;
- (id)pendingNickname;
- (void)setPendingNickname:(id)arg1;
- (void).cxx_destruct;
@end
