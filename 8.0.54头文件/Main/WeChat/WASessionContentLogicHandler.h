@interface WASessionContentLogicHandler : NSObject <PBMessageObserverDelegate, WCActionSheetDelegate, WAAppActionSheetDelegate>
{
    BOOL _isRequestedEnterSession; // +0x8
    WAAppActionSheet * _actionSheet; // +0x10
    NSMutableArray * _scanQrCodeBlackList; // +0x18
    id <WASessionContentLogicHandlerDelegate> _delegate; // +0x20
}
- (void)dealloc;
- (void)requestEnterSessionCGIWithSessionFrom:(id)arg1 enterScene:(unsigned long long)arg2 extInfo:(id)arg3 fromScene:(unsigned long long)arg4;
- (void)showRightBtnActionSheetWithShowHomePage:(BOOL)arg1;
- (void)dismissRightBtnActionSheet;
- (id)menubuttonTitleArray;
- (void)onClickWeAppReceiveSessionMsg;
- (void)fetchKFSessionInfo;
- (id)getScanQrCodeBlackList;
- (void)onResponseEnterSession:(id)arg1;
- (void)onResponseFetchKFSessionInfo:(id)arg1;
- (id)getContact;
- (id)getNavigationController;
- (id)getSessionContentViewController;
- (unsigned long long)getEnterScene;
- (id)getPageID;
- (id)getSceneID;
- (unsigned long long)getDebugMode;
- (unsigned int)getAppVersion;
- (id)getFatherAppid;
- (id)getFromPagePath;
- (void)confirmBlockMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmReceiveMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openWeAppAboutUs;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRightBtnActionSheetClickBlockSessionMessage;
- (void)onRightBtnActionSheetClickReceiveSessionMessage;
- (void)onRightBtnActionSheetClickExpose;
- (void)onRightBtnActionSheetClickCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)onWAActionSheetInfoClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

