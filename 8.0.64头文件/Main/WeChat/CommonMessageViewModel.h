@interface CommonMessageViewModel : BaseMessageViewModel <PatRevokeTipsViewDelegate, IMsgExt, CommonMessageViewModelExtTargetDelegate>
{
    unsigned long long m_bgBubbleType; // +0x60
    unsigned long long m_maskBubbleType; // +0x68
    BOOL m_isShowChatRoomDisplayName; // +0x70
    BOOL m_isChatRoomOwnerOrAdmin; // +0x71
    BOOL _canShowSendingView; // +0x72
    NSArray * m_replyTextStyles; // +0x78
    MMReferPartialInfo * _referPartInfo; // +0x80
    CommonMessageSourceInfoHandler * _sourceInfoHandler; // +0x88
    unsigned long long _shakeHeadAnimationType; // +0x90
    double _shakeHeadAnimationProgress; // +0x98
    PatRevokeTipsView * _patRevokeTipsView; // +0xa0
    CommonMessageViewModelExtTarget * _extTarget; // +0xa8
    CGSize m_replyTextSize; // +0xb0
    UIEdgeInsets _replyTextInset; // +0xc0
}
- (unsigned int)thumbDownloadStatus;
- (void)downloadThumbImageIfNeed;
- (void)onMessageDownloadThumbImageOK;
- (id)getReplyString;
- (id)additionalAccessibilityDescription2;
- (id)accessibilityMessageType;
- (double)getVCVisableHeight:(double)arg1;
- (double)getPatSystemMessageAddHeight:(id)arg1;
- (double)getNavigationBarBottomInWindow;
- (void)showPatRevokeTipsWithHeadImageView:(id)arg1;
- (void)tryHiddenPathRevokeTipsWhenCellDisappear;
- (void)onPatRevokeTipsViewHidden;
- (void)onClickRevokeTipsWithChatName:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)dealloc;
- (BOOL)canShowReplyMessage;
- (BOOL)canReplyMessageJump;
- (CGSize)replyTextSize;
- (CGSize)calculateReplyTextSize;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (void)updateChatContact:(id)arg1;
- (void)updateChatContactAdminStatus:(BOOL)arg1;
- (id)chatRoomTextStateIconDescription;
- (BOOL)isShowHeadImage;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)calIsShowChatRoomDisplayName;
- (BOOL)checkIsChatRoomOwnerOrAdmin;
- (BOOL)isShowSourceView;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isSupportSourceViewBottomClick;
- (id)sourceTitle;
- (double)sourceTitleMaxWidth;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (BOOL)isShowAppMessageBlockButton;
- (BOOL)isShowSendingView;
- (BOOL)isShowSendFailView;
- (id)bgBubbleInfo;
- (id)maskBubbleInfo;
- (BOOL)shouldShowRoomTodoView;
- (BOOL)hasSetRoomTodoFlag;
- (void)setShakeHeadAnimationType:(unsigned long long)arg1;
- (id)customJumpAppId;
- (BOOL)shouldShowWeAppEntranceTail;
- (CGSize)measure:(CGSize)arg1;
- (void)resetLayoutCache;
- (void)onExtMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)setReplyTextSize:(CGSize)arg1;
- (id)replyTextStyles;
- (void)setReplyTextStyles:(id)arg1;
- (UIEdgeInsets)replyTextInset;
- (void)setReplyTextInset:(UIEdgeInsets)arg1;
- (id)referPartInfo;
- (void)setReferPartInfo:(id)arg1;
- (id)sourceInfoHandler;
- (void)setSourceInfoHandler:(id)arg1;
- (BOOL)canShowSendingView;
- (void)setCanShowSendingView:(BOOL)arg1;
- (unsigned long long)shakeHeadAnimationType;
- (double)shakeHeadAnimationProgress;
- (void)setShakeHeadAnimationProgress:(double)arg1;
- (id)patRevokeTipsView;
- (void)setPatRevokeTipsView:(id)arg1;
- (id)extTarget;
- (void)setExtTarget:(id)arg1;
- (void).cxx_destruct;
@end
