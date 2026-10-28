@interface WCStoryBubbleHeadView : MMUIView <IWCMyStoryUserStateUtilExt, MMTipsViewControllerDelegate>
{
    BOOL _isUnread; // +0x8
    BOOL _shouldShowUnreadVideoMark; // +0x9
    BOOL _userForBubbleAnimation; // +0xa
    BOOL _hasUnreadVideoMark; // +0xb
    BOOL _functionBtnHidden; // +0xc
    MMHeadImageView * _headImageView; // +0x10
    RichTextView * _commentLabel; // +0x18
    MMCPLabel * _usernameLabel; // +0x20
    MMUIButton * _backGroundView; // +0x28
    UIView * _unreadColorView; // +0x30
    id <WCStoryBubbleHeadViewDelegate> _delegate; // +0x38
    WCStoryComment * _comment; // +0x40
    MMImageView * _unreadVideoMarkView; // +0x48
    MMUIButton * _deleteBtn; // +0x50
    MMUIButton * _replyBtn; // +0x58
    UIVisualEffectView * _blurEffectView; // +0x60
    UILabel * _colonLabel; // +0x68
}
+ (double)heightForComment:(id)arg1;
+ (id)displayContentOfComment:(id)arg1;
- (void)configblurEffectView;
- (void)configUnreadColorView;
- (void)configHeadView;
- (void)configUnreadVideoMarkView;
- (void)configUsernameLabelWithMaxWidth:(double)arg1;
- (void)configCommentLabelWithMaxWidth:(double)arg1;
- (void)configDeleteBtn;
- (void)configReplyBtn;
- (id)getUserLabelText;
- (void)updateUnreadVideoMark;
- (void)updateVoiceOverState;
- (void)reloadView;
- (void)setUserForBubbleAnimation:(BOOL)arg1;
- (void)clickToShowCommentList;
- (double)getHeaderBlurEffectViewCornerRadius;
- (void)setRightFunctionalBtnHidden:(BOOL)arg1;
- (void)updateFunctionalBtnState;
- (void)onHeadImageViewDoubleClick:(id)arg1;
- (void)onHeadImageViewClick:(id)arg1;
- (void)onBlurEffectViewDidClick;
- (void)onDeleteBtnDidClick:(id)arg1;
- (void)onReplyBtnDidClick:(id)arg1;
- (id)getHeadImageViewMaskLayer;
- (id)getBlurEffectViewMaskLayer;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)unreadColorView;
- (void)setUnreadColorView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)isUnread;
- (void)setIsUnread:(BOOL)arg1;
- (BOOL)shouldShowUnreadVideoMark;
- (void)setShouldShowUnreadVideoMark:(BOOL)arg1;
- (BOOL)userForBubbleAnimation;
- (id)unreadVideoMarkView;
- (void)setUnreadVideoMarkView:(id)arg1;
- (BOOL)hasUnreadVideoMark;
- (void)setHasUnreadVideoMark:(BOOL)arg1;
- (BOOL)functionBtnHidden;
- (void)setFunctionBtnHidden:(BOOL)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)replyBtn;
- (void)setReplyBtn:(id)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (id)colonLabel;
- (void)setColonLabel:(id)arg1;
- (void).cxx_destruct;
@end
