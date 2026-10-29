@interface MSESendStatusTipsView : UIView <MSEShareButtonPannelViewDelegate>
{
    id <MSESendStatusTipsViewDelegate> _delegate; // +0x8
    long long _contentType; // +0x10
    unsigned long long _contentCount; // +0x18
    unsigned long long _targetType; // +0x20
    UILabel * _contentLabel; // +0x28
    UILabel * _uploadPercentLabel; // +0x30
    UIButton * _confirmBtn; // +0x38
    MMProgressView * _progressView; // +0x40
    UILabel * _sendResultLabel; // +0x48
    UIView * _sepLineView; // +0x50
    UIButton * _cancelBtn; // +0x58
    UIButton * _retryBtn; // +0x60
    NSString * _contentCountDescStr; // +0x68
}
- (void)dealloc;
- (id)initTipsViewWithContainerWidth:(double)arg1;
- (void)updateViewContent;
- (void)initView;
- (void)showResultLabel;
- (void)showRetryBottomView;
- (void)hideRetryBottomView;
- (void)onConfirmBtnPress:(id)arg1;
- (void)onCancelBtnPress:(id)arg1;
- (void)onRetryBtnPress:(id)arg1;
- (void)onMessageSendStatusChange:(id)arg1;
- (void)onTimelineSendStatusChange:(id)arg1;
- (void)onMessageSendResultGet:(id)arg1;
- (void)onTimelineSendResultGet:(id)arg1;
- (void)onTextStateSendStatusChange:(id)arg1;
- (void)onTextStateDidReceiveResult:(id)arg1;
- (void)updateUploadStatus:(id)arg1;
- (void)handleUploadResultInternal:(id)arg1;
- (void)handleUploadResult:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (unsigned long long)contentCount;
- (void)setContentCount:(unsigned long long)arg1;
- (unsigned long long)targetType;
- (void)setTargetType:(unsigned long long)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)uploadPercentLabel;
- (void)setUploadPercentLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)sendResultLabel;
- (void)setSendResultLabel:(id)arg1;
- (id)sepLineView;
- (void)setSepLineView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (id)contentCountDescStr;
- (void)setContentCountDescStr:(id)arg1;
- (void).cxx_destruct;
@end

