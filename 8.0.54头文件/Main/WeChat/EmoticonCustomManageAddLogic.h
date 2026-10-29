@interface EmoticonCustomManageAddLogic : MMObject <StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonBackupOperateMgrExt, EmoticonDescMgrExt>
{
    BOOL m_isAdding; // +0x8
    BOOL m_isExchanging; // +0x9
    BOOL m_isJustExchange; // +0xa
    AddEmoticonWrap * m_emoticonWrap; // +0x10
    StoreEmotionExchangeEmotionPackCgi * m_exchangePackCgi; // +0x18
    BOOL _newSnackStyle; // +0x20
    BOOL _disableAutoShowSucToast; // +0x21
    NSString * _loadingText; // +0x28
    id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> _delegate; // +0x30
    MMSnackBar * _snackBar; // +0x38
}
+ (id)typeNumberForImageData:(id)arg1;
- (id)init;
- (BOOL)isAdding;
- (void)setDelegate:(id)arg1;
- (BOOL)checkTotalCountLimitWithType:(unsigned long long)arg1;
- (BOOL)startAddEmoticonWithWrap:(id)arg1;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (BOOL)startAddEmoticonWithWrap:(id)arg1 NeedCheckTotalCountLimit:(BOOL)arg2;
- (BOOL)startExchangePackForSendingWithWrap:(id)arg1;
- (BOOL)cancelAddEmoticonWithWrap:(id)arg1;
- (void)showSavedTips;
- (void)showExtendLimitTipsWithWording:(id)arg1 ofEmoticonType:(unsigned long long)arg2;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)showJumpDetailTipsWithWording:(id)arg1;
- (void)tryDownloadThumbImage;
- (void)showLoadingSnackBar;
- (void)showSavedSnackBar;
- (void)hideSnackBar;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onAddBackupEmoticonPendingUpload:(id)arg1;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)onStickyBackupEmoticonOK:(id)arg1;
- (void)onStickyBackupEmoticonFailed:(id)arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id)delegate;
- (BOOL)newSnackStyle;
- (void)setNewSnackStyle:(BOOL)arg1;
- (BOOL)disableAutoShowSucToast;
- (void)setDisableAutoShowSucToast:(BOOL)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (void).cxx_destruct;
@end

