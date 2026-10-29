@interface WCFinderPostChatFilePickerHelper : NSObject <SessionSelectControllerDelegate, MMUIViewControllerDelegate, MsgFileBrowseViewControllerDelegate, WAMsgSelectViewControllerDelegate>
{
    NSString * _fileType; // +0x8
    NSArray * _extension; // +0x10
    MMUIViewController * _fromVC; // +0x18
    MMUINavigationController * _navigationController; // +0x20
    WCFinderFilePickLimiter * _limiter; // +0x28
    NSString * _choosedUserName; // +0x30
    id /* block */ _onComplete; // +0x38
    id /* block */ _onCancel; // +0x40
}
+ (void)showChatFilePicker:(id)arg1 limiter:(id)arg2 fromVC:(id)arg3 complete:(id /* block */)arg4 cancel:(id /* block */)arg5;
- (void)dealloc;
- (id)init;
- (void)showSessionSelect;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (id)getViewController;
- (void)onMsgFileSelectFinish:(id)arg1;
- (void)onMsgFileSelectCancel;
- (void)onMsgSelectFinish:(id)arg1 hd:(BOOL)arg2;
- (void)onMsgSelectCancel;
- (void)handleLocalFileWithPath:(id)arg1;
- (void)checkCancel;
- (void)checkFinishWithErrMsg:(id)arg1;
- (void)checkFinishWithErr:(id)arg1 url:(id)arg2 extra:(id)arg3;
- (void)checkFinishWithErr:(id)arg1 url:(id)arg2 extra:(id)arg3 cancel:(BOOL)arg4;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)extension;
- (void)setExtension:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)limiter;
- (void)setLimiter:(id)arg1;
- (id)choosedUserName;
- (void)setChoosedUserName:(id)arg1;
- (id /* block */)onComplete;
- (void)setOnComplete:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (void).cxx_destruct;
@end

