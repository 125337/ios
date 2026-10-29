@interface WAJSEventHandler_chooseMessageFile : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate, MMUIViewControllerDelegate, MsgFileBrowseViewControllerDelegate, WAMsgSelectViewControllerDelegate>
{
    BOOL _showingLoading; // +0x8
    BOOL _selectCanceled; // +0x9
    NSString * _fileType; // +0x10
    NSArray * _extension; // +0x18
    long long _limitCount; // +0x20
    MMUINavigationController * _navigationController; // +0x28
    NSString * _choosedUserName; // +0x30
    NSMutableDictionary * _resDic; // +0x38
    unsigned long long _resWait; // +0x40
}
- (void)handleJSEvent:(id)arg1;
- (void)showSessionSelect;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (id)calcImgType:(id)arg1;
- (void)checkFinish;
- (id)getWebviewController;
- (id)getViewController;
- (void)onMsgFileSelectFinish:(id)arg1;
- (void)onMsgFileSelectCancel;
- (void)onMsgSelectFinish:(id)arg1 hd:(BOOL)arg2;
- (void)onMsgSelectCancel;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)extension;
- (void)setExtension:(id)arg1;
- (long long)limitCount;
- (void)setLimitCount:(long long)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)choosedUserName;
- (void)setChoosedUserName:(id)arg1;
- (id)resDic;
- (void)setResDic:(id)arg1;
- (unsigned long long)resWait;
- (void)setResWait:(unsigned long long)arg1;
- (BOOL)showingLoading;
- (void)setShowingLoading:(BOOL)arg1;
- (BOOL)selectCanceled;
- (void)setSelectCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end

