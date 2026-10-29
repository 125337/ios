@interface MMFinderLiveQuickCommentGuidePanel : MMPageSheetBaseView
{
    NSString * _userName; // +0x8
    NSString * _comment; // +0x10
    id /* block */ _sendBlock; // +0x18
    MMUILabel * _titleView; // +0x20
    MMFinderLiveQuickCommentGuideView * _guideView; // +0x28
    MMUIButton * _sendButton; // +0x30
    MMUIButton * _cancelButton; // +0x38
}
- (id)initWithUserName:(id)arg1 comment:(id)arg2 sendBlock:(id /* block */)arg3;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initTitleView;
- (void)initGuideView;
- (void)initSendButton;
- (void)initCancelButton;
- (void)layoutSubviews;
- (void)layoutTitleView;
- (void)layoutGuideView;
- (void)layoutConfirmView;
- (unsigned long long)getSupportedOrientationMask;
- (void)onSendButtonClicked;
- (void)onCancelButtonClicked;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id /* block */)sendBlock;
- (void)setSendBlock:(id /* block */)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
