@interface ShareDataToOpenSDKController : MMObject <IWCLanDeviceMsgForwardMgrExt, IShareTo3rdAppSettingViewControllerExt, UIDocumentInteractionControllerDelegate, MMScrollActionSheetDelegate, MsgToDeviceDelegate, ILinkDeviceExt>
{
    MMScrollActionSheet * m_shareSheet; // +0x8
    NSMutableArray * m_deviceSheetSection; // +0x10
    NSMutableArray * m_3rdAppSection; // +0x18
    UIViewController * fromViewController; // +0x20
    CMessageWrap * m_oMessageWrap; // +0x28
    WCDataItem * m_oDataItem; // +0x30
    NSString * m_nsUsrName; // +0x38
    NSString * _tmpFilePath; // +0x40
    NSString * _tmpFileName; // +0x48
    NSArray * m_arrLanDevices; // +0x50
    UIDocumentInteractionController * m_vcDocument; // +0x58
    ShareTo3rdAppSettingViewController * _appSettingVC; // +0x60
    id <ShareDataToOpenSDKControllerDelegate> m_delegate; // +0x68
    long long m_opScene; // +0x70
    UIView * m_viewToShow; // +0x78
    MsgToDeviceLogic * _ilinkDeviceLogic; // +0x80
}
+ (id)shareInstance;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getCurrentVC;
- (id)make3rdAppSection;
- (BOOL)checkAvailablityOfMsg:(id)arg1;
- (void)shareMsgToOpenSDKByMessageWrap:(id)arg1;
- (void)shareTimeLineToOpenSDKByDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (BOOL)scrollActionSheetShouldCancel:(id)arg1;
- (id)customViewForRow:(long long)arg1;
- (id)customViewForItem:(id)arg1;
- (BOOL)hasMessageTypeSupportOpenBySystem;
- (id)GetFilePath;
- (id)copyFileToTmpPathAndRetPath:(id)arg1;
- (void)OnOpenByApp:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)onShouldReloadView;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(id)arg2;
- (void)onWCLanDeviceForwardMsgProgressUpdate:(double)arg1 toDevice:(id)arg2;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onMsgToDeviceSuccess:(id)arg1;
- (void)onMsgToDeviceFail:(id)arg1 type:(long long)arg2;
- (void)onMsgToDeviceSending:(id)arg1 progress:(double)arg2;
- (id)itemForLanDevice:(id)arg1;
- (id)actionSheetCellForLanDevice:(id)arg1;
- (void)onActionSheetConfirmCancel;
- (void)reloadActionSheet;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)m_opScene;
- (void)setM_opScene:(long long)arg1;
- (id)m_viewToShow;
- (void)setM_viewToShow:(id)arg1;
- (id)ilinkDeviceLogic;
- (void)setIlinkDeviceLogic:(id)arg1;
- (void).cxx_destruct;
@end

