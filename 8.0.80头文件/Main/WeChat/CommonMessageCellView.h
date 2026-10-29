@interface CommonMessageCellView : BaseMessageCellView <IAppDataExt, IContactMgrExt, IStrangerContactMgrExt, IAutoSetRemarkExt, IKFContactExt, WCActionSheetDelegate, CommonMessageCellViewExtTargetDelegate, CAAnimationDelegate>
{
    CGRect m_bubbleBorderFrame; // +0x28
    MMHeadImageView * m_headImageView; // +0x48
    MMCPLabel * m_chatRoomNameLabel; // +0x50
    MMCPLabel * m_chatRoomDescLabel; // +0x58
    TextStateItemView * m_chatRoomTextStateView; // +0x60
    UIImageView * m_chatRoomAiTagView; // +0x68
    YYAsyncImageView * m_bgImageView; // +0x70
    YYAsyncImageView * m_maskImageView; // +0x78
    MMUIActivityIndicatorView * m_sendingView; // +0x80
    UIButton * m_sendFailButton; // +0x88
    UIButton * m_cancelButton; // +0x90
    UIView * m_sourceViewInside; // +0x98
    UIButton * m_sourceViewBottom; // +0xa0
    AppMessageBlockButton * m_appMessageBlockButton; // +0xa8
    MMInputMsgReferView * m_msgReplyView; // +0xb0
    CTRichTextView * m_crashWarningLabel; // +0xb8
    CADisplayLink * m_shakeHeadDisplayLink; // +0xc0
    BOOL _didChatroomInDarkBkg; // +0xc8
    UIView * _plainBgView; // +0xd0
    UIVisualEffectView * _bgBlurView; // +0xd8
    UILabel * _bottomSourceLabel; // +0xe0
    UIImageView * _bottomLeftIconView; // +0xe8
    UIView * _souceBtnContainerView; // +0xf0
    CommonMessageCellViewExtTarget * _extTarget; // +0xf8
    UIView * _bottomSourceLeftView; // +0x100
    UIView * _bottomSourceRightView; // +0x108
    MMUIButton * _foldButton; // +0x110
}
+ (void)showSameTextTranslateDialogInView:(id)arg1 viewModel:(id)arg2 retranslateBlock:(id /* block */)arg3;
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)tryConfigChatBotReport;
- (void)prepareForReuse;
- (void)refreshPatRevokeTipsView;
- (void)layoutSubviews;
- (BOOL)isCustAsstContext;
- (void)initPlainBgView;
- (void)layoutInternal;
- (void)onAppear;
- (void)onDisappear;
- (void)layoutContentView;
- (void)updateNodeStatus;
- (void)updateStatus;
- (CGRect)showRectForMenuController;
- (void)setFrameForBgImageView:(CGRect)arg1;
- (BOOL)tailNeedBackground;
- (void)onShowOperationMenu;
- (void)onShowMsgReplyMenuItem:(id)arg1;
- (id)displayViewForRefer;
- (BOOL)canShowResendMenu;
- (void)initMsgReplyView;
- (id)populateReferThumbImageWithReferMsg:(id)arg1;
- (void)updateReferMsgStatusObserverForReferMsg:(id)arg1 needObserve:(BOOL)arg2;
- (void)unregisterReferMsgStatusObserver;
- (void)refreshReferThumbImage;
- (void)onExtReferMsgStatusUpdated;
- (void)onTapMsgReplyView:(id)arg1;
- (void)handleTapReferMessage;
- (void)handleTapForReferMsg:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLongPressMsgReplyView:(id)arg1;
- (void)onReturnToOriginalMsg;
- (void)initCrashWarningLabel;
- (void)initHeadImageView;
- (BOOL)canPatHeadImage;
- (void)initChatRoomNameLabel;
- (void)setChatRoomNameLabelTextColor;
- (BOOL)useStatusIconStyleUpgrade;
- (Class)chatRoomTextStateViewClass;
- (id)createChatRoomTextStateView:(id)arg1;
- (void)initChatRoomTextStateLabel;
- (void)initChatRoomAiTagView;
- (void)setChatRoomTextStateEmojiColor;
- (void)hideChatRoomTextStateView;
- (void)onTapChatRoomTextStateViewForCard;
- (void)configChatRoomTextStateViewReportWithContact:(id)arg1;
- (void)initChatRoomDescLabel;
- (void)initBgImageView;
- (void)initMaskImageView;
- (id)getSendFailButton;
- (id)getReferView;
- (id)getFoldButton;
- (id)getNameLabel;
- (id)getHeadImageView;
- (id)getSendingView;
- (id)getBgImageView;
- (void)addSendingView;
- (void)addSendFailButton;
- (void)addCancelButton;
- (void)reportFoldButtonClicked;
- (BOOL)canAddFoldButton;
- (void)addFoldButtonIfNeeded;
- (void)addFoldButtonForFoldAnimation:(BOOL)arg1;
- (void)setupFoldButton:(BOOL)arg1;
- (void)layoutFoldButton;
- (BOOL)canClickSourceView;
- (BOOL)isSolitaire;
- (BOOL)isRoomToDo;
- (void)initSourceViewBottom;
- (void)bottomSourceInteralLayout;
- (id)getSourceViewBottomIcon;
- (id)genSourceViewBottomLeftView;
- (id)roomTodoViewText;
- (id)genSourceViewBottomRightView;
- (void)updateBottomSourceView;
- (id)bottomSourceLabelColor;
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
- (void)startTextSearch:(id)arg1;
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
- (void)onSetStrangerRemark:(id)arg1;
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
- (void)onMsgMediaGroup:(id)arg1 removeMsgs:(id)arg2;
- (id)plainBgView;
- (void)setPlainBgView:(id)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (id)bottomSourceLabel;
- (void)setBottomSourceLabel:(id)arg1;
- (id)bottomLeftIconView;
- (void)setBottomLeftIconView:(id)arg1;
- (id)souceBtnContainerView;
- (void)setSouceBtnContainerView:(id)arg1;
- (void)setExtTarget:(id)arg1;
- (BOOL)didChatroomInDarkBkg;
- (void)setDidChatroomInDarkBkg:(BOOL)arg1;
- (id)bottomSourceLeftView;
- (void)setBottomSourceLeftView:(id)arg1;
- (id)bottomSourceRightView;
- (void)setBottomSourceRightView:(id)arg1;
- (id)foldButton;
- (void)setFoldButton:(id)arg1;
- (void).cxx_destruct;
@end
