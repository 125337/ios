@interface EmoticonCustomManageAddLogic : MMObject <StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonBackupOperateMgrExt, EmoticonDescMgrExt>
{
    BOOL m_isAdding; // +0x8
    BOOL m_isExchanging; // +0x9
    BOOL m_isJustExchange; // +0xa
    NSMutableArray * m_emoticonWraps; // +0x10
    NSMutableArray * m_existWraps; // +0x18
    NSMutableArray * m_emoticonMd5s; // +0x20
    StoreEmotionExchangeEmotionPackCgi * m_exchangePackCgi; // +0x28
    BOOL _newSnackStyle; // +0x30
    BOOL _disableAutoShowSucToast; // +0x31
    BOOL _hasExistedWrapWhenAdd; // +0x32
    NSString * _loadingText; // +0x38
    id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> _delegate; // +0x40
    unsigned long long _totalEditCount; // +0x48
    MMSnackBar * _snackBar; // +0x50
    unsigned long long _totalEditedCount; // +0x58
}
+ (id)typeNumberForImageData:(id)arg1;
- (id)init;
- (BOOL)isAdding;
- (void)setDelegate:(id)arg1;
- (BOOL)checkTotalCountLimitWithType:(unsigned long long)arg1;
- (BOOL)startAddEmoticonWithWrap:(id)arg1;
- (BOOL)startAddEmoticonWithWraps:(id)arg1;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (BOOL)startAddEmoticonWithWraps:(id)arg1 NeedCheckTotalCountLimit:(BOOL)arg2;
- (BOOL)startExchangePackForSendingWithWrap:(id)arg1;
- (BOOL)cancelAddEmoticonWithWrap:(id)arg1;
- (void)showSavedTips;
- (void)showExtendLimitTipsWithWording:(id)arg1 ofEmoticonType:(unsigned long long)arg2;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)showJumpDetailTipsWithWording:(id)arg1;
- (void)tryDownloadThumbImage:(id)arg1;
- (void)showLoadingSnackBar;
- (void)showSavedSnackBar;
- (void)hideSnackBar;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onAddBackupEmoticonPendingUpload:(id)arg1;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)hideSnackBarIfNeed;
- (void)stickyAfterAddedIfNeed;
- (void)onStickyBackupEmoticonOK:(id)arg1 needDealVc:(BOOL)arg2;
- (void)onStickyBackupEmoticonFailed:(id)arg1 needDealVc:(BOOL)arg2;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id)delegate;
- (BOOL)newSnackStyle;
- (void)setNewSnackStyle:(BOOL)arg1;
- (BOOL)disableAutoShowSucToast;
- (void)setDisableAutoShowSucToast:(BOOL)arg1;
- (unsigned long long)totalEditCount;
- (void)setTotalEditCount:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (unsigned long long)totalEditedCount;
- (void)setTotalEditedCount:(unsigned long long)arg1;
- (BOOL)hasExistedWrapWhenAdd;
- (void)setHasExistedWrapWhenAdd:(BOOL)arg1;
- (void).cxx_destruct;
@end
