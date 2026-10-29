@interface TingVideoShareHelper : NSObject <WCBaseCommitViewResultDelegate, TextStatePublishViewControllerDelegate, SendAppMsgHandleDelegate, ForwardMessageLogicDelegate>
{
    BOOL _finished; // +0x8
    BOOL _exporting; // +0x9
    BOOL _keepFiles; // +0xa
    id /* block */ _completion; // +0x10
    NSString * _toUsername; // +0x18
    UIViewController * _sourceController; // +0x20
    NSString * _pendingIconId; // +0x28
    NSString * _directory; // +0x30
    NSString * _account; // +0x38
    long long _target; // +0x40
    SendAppMsgHandler * _sendAppMsgHandler; // +0x48
    ForwardMessageLogicController * _forwardLogic; // +0x50
}
- (BOOL)isCurrentAccount;
- (void)finish:(id)arg1;
- (void)fail;
- (void)finishWhenDismissed:(id)arg1;
- (id)videoShareRootDirectory;
- (void)sweepExpiredShareDirectories;
- (void)startWithVideo:(id)arg1 target:(long long)arg2;
- (id)loadingHost;
- (void)downloadFrom:(id)arg1 to:(id)arg2;
- (void)continueWithLocalPath:(id)arg1;
- (void)forwardToFriendAtPath:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)exportForMomentsAtPath:(id)arg1 asset:(id)arg2;
- (void)runMomentsExportAtPath:(id)arg1 asset:(id)arg2 compress:(BOOL)arg3 allowFallback:(BOOL)arg4;
- (void)presentStatusAtPath:(id)arg1;
- (void)presentVideoWithDraft:(id)arg1;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (void)onCancelCommitForCommitView:(id)arg1 isSaveDraft:(BOOL)arg2;
- (void)onDoneCommitForCommitView:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)sourceController;
- (void)setSourceController:(id)arg1;
- (id)pendingIconId;
- (void)setPendingIconId:(id)arg1;
- (id)directory;
- (void)setDirectory:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (long long)target;
- (void)setTarget:(long long)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)exporting;
- (void)setExporting:(BOOL)arg1;
- (BOOL)keepFiles;
- (void)setKeepFiles:(BOOL)arg1;
- (id)sendAppMsgHandler;
- (void)setSendAppMsgHandler:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void).cxx_destruct;
@end
