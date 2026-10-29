@interface MMFinderLiveFeedStreamPlusOneConfirmSheet : MMPageSheetBaseView
{
    BOOL _hideSwitchIdentity; // +0x8
    MMLiveFeedStreamTaskId * _taskId; // +0x10
    NSString * _hotWordContent; // +0x18
    id /* block */ _confirmBlock; // +0x20
    id /* block */ _cancelBlock; // +0x28
    id /* block */ _switchIdentityBlock; // +0x30
    UIView * _contentContainer; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIImageView * _headImageView; // +0x48
    MMUILabel * _nickNameLabel; // +0x50
    MMUILabel * _roleTypeLabel; // +0x58
    MMUIButton * _cancelButton; // +0x60
    MMUIButton * _sendButton; // +0x68
    MMUIButton * _switchIdentityButton; // +0x70
    MMUIActivityIndicatorView * _sendLoadingIndicator; // +0x78
}
+ (id)showWithTaskId:(id)arg1 hotWordContent:(id)arg2 hideSwitchIdentity:(BOOL)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5 switchIdentityBlock:(id /* block */)arg6;
- (id)initWithTaskId:(id)arg1 hotWordContent:(id)arg2 hideSwitchIdentity:(BOOL)arg3;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (id)createActionButtonWithTitle:(id)arg1 bgColor:(id)arg2 titleColor:(id)arg3 action:(SEL)arg4;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setSendButtonLoading:(BOOL)arg1;
- (void)refreshIdentity;
- (id)curFeedStreamTask;
- (void)updateHeadImageCornerRadiusWithRoleType:(long long)arg1;
- (void)updateHeadImageWithURLString:(id)arg1;
- (void)onSendButtonClicked;
- (void)onCancelButtonClicked;
- (void)onSwitchIdentityButtonClicked;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)hotWordContent;
- (void)setHotWordContent:(id)arg1;
- (BOOL)hideSwitchIdentity;
- (void)setHideSwitchIdentity:(BOOL)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)switchIdentityBlock;
- (void)setSwitchIdentityBlock:(id /* block */)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)roleTypeLabel;
- (void)setRoleTypeLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)switchIdentityButton;
- (void)setSwitchIdentityButton:(id)arg1;
- (id)sendLoadingIndicator;
- (void)setSendLoadingIndicator:(id)arg1;
- (void).cxx_destruct;
@end
