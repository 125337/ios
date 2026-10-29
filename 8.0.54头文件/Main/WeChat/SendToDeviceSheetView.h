@interface SendToDeviceSheetView : MMAutoLayoutSheetView <MsgToDeviceDelegate, IWCLanDeviceMsgForwardMgrExt>
{
    MMIconItemView * _itemView; // +0x8
    UIButton * _sendButton; // +0x10
    UIButton * _confirmButton; // +0x18
    MMUIActivityIndicatorView * _loadingView; // +0x20
    UIImageView * _doneImageView; // +0x28
    UIImageView * _failureImageView; // +0x30
    MMUILabel * _descLabel; // +0x38
    NSString * _msgDescription; // +0x40
    UIStackView * _ssvStackView; // +0x48
    MMIotNavigateInfo * _navigateInfo; // +0x50
    SSVMiniAppRedirectInfo * _ssvRedirectInfo; // +0x58
    WCDevice * _device; // +0x60
    MsgToDeviceLogic * _ilinkDeviceLogic; // +0x68
}
- (id)initWithDevice:(id)arg1 messageWrap:(id)arg2;
- (void)initConfigs;
- (void)initView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)switchToLoadingState;
- (void)switchToSuccessStateWithNavigateInfo:(id)arg1;
- (void)switchToFailureStateOfType:(long long)arg1;
- (void)switchToFailureStateOfType:(long long)arg1 errorInfo:(id)arg2;
- (void)sendToDevice;
- (void)onToDeviceMsgSent;
- (id)paramDicFromJsonString:(id)arg1;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(id)arg2;
- (void)onMsgToDeviceSuccess:(id)arg1;
- (void)onMsgToDeviceSuccessToWeApp:(id)arg1;
- (void)onMsgToDeviceSuccessToSSV:(id)arg1;
- (void)onMsgToDeviceFail:(id)arg1 type:(long long)arg2 errorInfo:(id)arg3;
- (void)onMsgToDeviceSending:(id)arg1 progress:(double)arg2;
- (id)titleLabel:(id)arg1;
- (id)subTitleLabel:(id)arg1;
- (id)itemView;
- (id)sendButton;
- (id)confirmButton;
- (id)loadingView;
- (id)doneImageView;
- (id)failureImageView;
- (id)descLabel;
- (id)ssvStackView;
- (void)onClickSSVItem;
- (void)setItemView:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setDoneImageView:(id)arg1;
- (void)setFailureImageView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)msgDescription;
- (void)setMsgDescription:(id)arg1;
- (void)setSsvStackView:(id)arg1;
- (id)navigateInfo;
- (void)setNavigateInfo:(id)arg1;
- (id)ssvRedirectInfo;
- (void)setSsvRedirectInfo:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)ilinkDeviceLogic;
- (void)setIlinkDeviceLogic:(id)arg1;
- (void).cxx_destruct;
@end

