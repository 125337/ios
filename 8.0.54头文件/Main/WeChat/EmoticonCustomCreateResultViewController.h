@interface EmoticonCustomCreateResultViewController : MMUIViewController <ForwardMessageLogicDelegate>
{
    BOOL _didBatchDownloadEmojiInfo; // +0x68
    BOOL _isExceedLimit; // +0x69
    NSString * _editSessionId; // +0x70
    EmojiInfoObj * _emojiInfoObj; // +0x78
    UIButton * _sendBtn; // +0x80
    UIButton * _doneBtn; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _subTitleLabel; // +0x98
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xa0
    UIImageView * _emojiView; // +0xa8
    ForwardMessageLogicController * _forwardLogicController; // +0xb0
}
- (id)initWithEmojiInfo:(id)arg1 isExceedLimit:(BOOL)arg2;
- (void)viewDidLoad;
- (void)initViews;
- (void)createOrUpdateLayout;
- (void)startDownloadEmoji;
- (void)updateNavigationBarConfig;
- (id)navigationBarBackgroundColor;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onTapSend;
- (void)realStartForward;
- (void)onTapDone;
- (id)forwardLogicController;
- (id)getCurrentViewController;
- (BOOL)shouldShowSendSuccessView:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)registerYReportSdk;
- (id)editSessionId;
- (void)setEditSessionId:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)emojiView;
- (void)setEmojiView:(id)arg1;
- (BOOL)didBatchDownloadEmojiInfo;
- (void)setDidBatchDownloadEmojiInfo:(BOOL)arg1;
- (void)setForwardLogicController:(id)arg1;
- (BOOL)isExceedLimit;
- (void)setIsExceedLimit:(BOOL)arg1;
- (void).cxx_destruct;
@end

