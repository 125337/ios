@interface GetA8KeyLogic : MMObject <WCPayLogicMgrExt, IJumpEmoticonDetailCgiDelegate, ExtraDeviceLoginMgrExt, IScanBookMgrExt, WCNewCardDetailViewControllerDelegate, ContactSearchLogicDelegate, WCRedEnvelopesGetRedPacketPreviewCgiDelegate, WCFinderQRCodeViewModelDelegate, WCFinderFeedDetailStatusViewDelegate, PBMessageObserverDelegate, IWCDeviceBrandMgrExt, WCBaseControlMgrExt, MMUseCaseCallback>
{
    MMUIViewController * m_viewController; // +0x8
    id <GetA8KeyLogicDelegate> m_delegate; // +0x10
    NSString * m_nsLastResult; // +0x18
    NSString * m_nsBundleID; // +0x20
    JSAPIPermissionBitSet * m_lastPmsBitSet; // +0x28
    GeneralControlBitSet * m_lastGenCtlBitSet; // +0x30
    DeepLinkBitSet * m_lastDeepLinkBitSet; // +0x38
    NSData * m_lastJsApiControlBytes; // +0x40
    NSMutableDictionary * m_wifiData; // +0x48
    unsigned int _lastRequestID; // +0x50
    SKBuiltinBuffer_t * _lastA8KeyCookie; // +0x58
    CContact * m_deviceContact; // +0x60
    NSDictionary * m_deviceData; // +0x68
    double startTime; // +0x70
    ContactSearchLogic * m_ContactSearchLogic; // +0x78
    StrongNotificationScanLogic * m_strongNotificationScanLogic; // +0x80
    unsigned int _m_reportSourceScene; // +0x88
    unsigned int _searchContactEventID; // +0x8c
    unsigned int _getA8KeyEventID; // +0x90
    unsigned int _getA8keySubScene; // +0x94
    unsigned int _getA8KeyScene; // +0x98
    JumpEmoticonDetailCgi * m_jumpEmoticonDetailCgi; // +0xa0
    NSString * _m_reportSourceUserName; // +0xa8
    NSString * _m_reportMsgUserName; // +0xb0
    NSString * _m_reportMsgId; // +0xb8
    NSNumber * _m_reportContentType; // +0xc0
    NSNumber * _m_reportMessageInnerType; // +0xc8
    NSString * _m_reportWxaPathWithQuery; // +0xd0
    MMTipsViewController * _tipsViewController; // +0xd8
    WCRedEnvelopesGetRedPacketPreviewCgi * _m_getRedPacketPreviewCgi; // +0xe0
    WCFinderQRCodeViewModel * _qrcodeViewModel; // +0xe8
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xf0
    NewLifeDetailLinkJumper * _linkJumperForNewLife; // +0xf8
    NSString * _m_sessionKey; // +0x100
    NSString * _fromBizUser; // +0x108
}
- (void)dealloc;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)setCurrentViewController:(id)arg1;
- (void)setGetA8KeyBundleID:(id)arg1;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 subScene:(unsigned int)arg3 codeType:(unsigned int)arg4 codeVersion:(unsigned int)arg5 fromUser:(id)arg6;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 subScene:(unsigned int)arg3 codeType:(unsigned int)arg4 codeVersion:(unsigned int)arg5 fromUser:(id)arg6 reqSourceUsername:(id)arg7 appId:(id)arg8 getA8KeyRequestId:(unsigned int)arg9;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5 userName:(id)arg6;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5 userName:(id)arg6 getA8KeyRequestId:(unsigned int)arg7;
- (void)doUnknow:(id)arg1;
- (void)onSearchContactHandleEnd;
- (void)onAlertWebConfirm;
- (void)onAlertAppConfirm;
- (void)doSearchContact:(id)arg1 SearchScene:(unsigned int)arg2 picUrl:(id)arg3;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 picUrl:(id)arg4;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 resultString:(id)arg4 subScene:(unsigned int)arg5 picUrl:(id)arg6 picEncKey:(id)arg7 sourceType:(unsigned int)arg8;
- (void)showContactInfoView:(id)arg1 QRCodeScene:(unsigned long long)arg2 alertWording:(id)arg3;
- (void)OnGetA8Key:(id)arg1;
- (void)call:(id)arg1;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onContactSearchLogicResearch:(id)arg1;
- (void)onContactSearchCGIEnd;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)handleSearchContactResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelSearchContact;
- (void)cancelGetA8Key;
- (void)showNotSupportTips;
- (void)jumpToFinderDetailFromURL:(id)arg1 scene:(long long)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCDeviceBrandSearch:(id)arg1 respData:(id)arg2 fliterStatus:(unsigned int)arg3;
- (void)jumpToContactInfoViewController:(id)arg1 userData:(id)arg2;
- (void)jumpToMyDeviceInfoViewController:(id)arg1 userData:(id)arg2;
- (void)jumpToDeviceSearchGuideViewControllerWithUserData:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onNeedReStartScanQRCode;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (id)getViewController;
- (id)getJumpFromWeAppAppidForLongPressCode:(unsigned long long)arg1 preScene:(unsigned long long)arg2 preSceneNote:(id)arg3;
- (void)fillInfoVCIfScanQRCodeFromWebView:(id)arg1;
- (id)getFirstUrlIfScanQRCodeFromWebView;
- (id)getLastUrlIfScanQRCodeFromWebView;
- (id)getOuterUrl;
- (unsigned long long)getFinderEntryScene;
- (void)handleFinderUserQRCodeUrlSuccess;
- (void)handleFinderUserQRCodeUrlFailure;
- (void)handleFinderFeedQRCodeUrlSuccess;
- (void)handleFinderFeedQRCodeUrlFailureWithErrorCode:(int)arg1 errorMsg:(id)arg2;
- (void)didClickBack:(id)arg1;
- (id)m_jumpEmoticonDetailCgi;
- (void)setM_jumpEmoticonDetailCgi:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_reportSourceScene;
- (void)setM_reportSourceScene:(unsigned int)arg1;
- (id)m_reportSourceUserName;
- (void)setM_reportSourceUserName:(id)arg1;
- (id)m_reportMsgUserName;
- (void)setM_reportMsgUserName:(id)arg1;
- (id)m_reportMsgId;
- (void)setM_reportMsgId:(id)arg1;
- (id)m_reportContentType;
- (void)setM_reportContentType:(id)arg1;
- (id)m_reportMessageInnerType;
- (void)setM_reportMessageInnerType:(id)arg1;
- (id)m_reportWxaPathWithQuery;
- (void)setM_reportWxaPathWithQuery:(id)arg1;
- (id)tipsViewController;
- (void)setTipsViewController:(id)arg1;
- (id)m_getRedPacketPreviewCgi;
- (void)setM_getRedPacketPreviewCgi:(id)arg1;
- (id)qrcodeViewModel;
- (void)setQrcodeViewModel:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)linkJumperForNewLife;
- (void)setLinkJumperForNewLife:(id)arg1;
- (unsigned int)searchContactEventID;
- (void)setSearchContactEventID:(unsigned int)arg1;
- (unsigned int)getA8KeyEventID;
- (void)setGetA8KeyEventID:(unsigned int)arg1;
- (id)m_sessionKey;
- (void)setM_sessionKey:(id)arg1;
- (unsigned int)getA8keySubScene;
- (void)setGetA8keySubScene:(unsigned int)arg1;
- (unsigned int)getA8KeyScene;
- (void)setGetA8KeyScene:(unsigned int)arg1;
- (id)fromBizUser;
- (void)setFromBizUser:(id)arg1;
- (void).cxx_destruct;
@end

