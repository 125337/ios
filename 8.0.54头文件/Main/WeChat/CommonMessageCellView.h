@interface CommonMessageCellView : BaseMessageCellView <IAppDataExt, IContactMgrExt, IStrangerContactMgrExt, IKFContactExt, WCActionSheetDelegate, CommonMessageCellViewExtTargetDelegate, CAAnimationDelegate>
{
    CGRect m_bubbleBorderFrame; // +0x28
    MMHeadImageView * m_headImageView; // +0x48
    MMCPLabel * m_chatRoomNameLabel; // +0x50
    MMCPLabel * m_chatRoomDescLabel; // +0x58
    TextStateItemView * m_chatRoomTextStateView; // +0x60
    YYAsyncImageView * m_bgImageView; // +0x68
    YYAsyncImageView * m_maskImageView; // +0x70
    MMUIActivityIndicatorView * m_sendingView; // +0x78
    UIButton * m_sendFailButton; // +0x80
    UIButton * m_cancelButton; // +0x88
    UIView * m_sourceViewInside; // +0x90
    UIButton * m_sourceViewBottom; // +0x98
    AppMessageBlockButton * m_appMessageBlockButton; // +0xa0
    CTRichTextView * m_crashWarningLabel; // +0xa8
    CADisplayLink * m_shakeHeadDisplayLink; // +0xb0
    BOOL _didChatroomInDarkBkg; // +0xb8
    UIVisualEffectView * _bgBlurView; // +0xc0
    UILabel * _bottomSourceLabel; // +0xc8
    UIImageView * _bottomLeftIconView; // +0xd0
    CommonMessageCellViewExtTarget * _extTarget; // +0xd8
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)refreshPatRevokeTipsView;
- (void)layoutSubviews;
- (void)layoutInternal;
- (void)onAppear;
- (void)onDisappear;
- (void)layoutContentView;
- (void)updateNodeStatus;
- (void)updateStatus;
- (void)hideUIStatus;
- (void)showUIStatus;
- (CGRect)showRectForMenuController;
- (void)setFrameForBgImageView:(CGRect)arg1;
- (void)initCrashWarningLabel;
- (void)initHeadImageView;
- (BOOL)canPatHeadImage;
- (void)initChatRoomNameLabel;
- (void)setChatRoomNameLabelTextColor;
- (void)initChatRoomTextStateLabel;
- (void)setChatRoomTextStateEmojiColor;
- (void)initChatRoomDescLabel;
- (void)initBgImageView;
- (void)initMaskImageView;
- (id)getHeadImageView;
- (id)getSendingView;
- (id)getBgImageView;
- (void)addSendingView;
- (void)addSendFailButton;
- (void)addCancelButton;
- (BOOL)canClickSourceView;
- (void)initSourceViewBottom;
- (id)genSourceViewBottomLeftView;
- (id)roomTodoViewText;
- (id)genSourceViewBottomRightView;
- (void)updateBottomSourceView;
- (void)initSourceViewInside;
- (void)initAppMessageBlockButton;
- (void)setHighlighted:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutForCrashWarning;
- (void)onHeadImageClicked:(id)arg1;
- (void)onHeadImageLongPressed:(id)arg1;
- (void)onHeadImageDoubleClick:(id)arg1;
- (void)showRevokePatActionSheetForPat:(id)arg1 fromChat:(id)arg2;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onAppButtonClicked:(id)arg1;
- (void)shakeHeadIfNeeded;
- (void)startShakeHeadAnimationFromStart:(BOOL)arg1;
- (void)updateShakeHeadAnimation;
- (void)removeShakeHeadAnimation;
- (void)restoreShakeHeadAnimation;
- (void)shakeHeadAndContent:(BOOL)arg1 withRotation:(double)arg2 withDelaySecond:(double)arg3;
- (double)arcWithAngle:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)OnAppWatermarkChanged:(id)arg1;
- (void)OnAppInfoChanged:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onModifyKFContact:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)accessibilityCustomActions;
- (id)additionalCustomActions;
- (void)onExtChatBackgroundChanged:(id)arg1;
- (void)onClickAsRefer;
- (id)extTarget;
- (void)updateBgImageView:(BOOL)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (id)bottomSourceLabel;
- (void)setBottomSourceLabel:(id)arg1;
- (id)bottomLeftIconView;
- (void)setBottomLeftIconView:(id)arg1;
- (void)setExtTarget:(id)arg1;
- (BOOL)didChatroomInDarkBkg;
- (void)setDidChatroomInDarkBkg:(BOOL)arg1;
- (void).cxx_destruct;
@end

