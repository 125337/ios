@interface MMFinderLiveSFBarrageCellView : UIView <MMMenuControllerExt, PAGViewListener>
{
    BOOL _isInTappedState; // +0x8
    BOOL _isShowingMenu; // +0x9
    BOOL _forceAlignLeftForPaidBarrage; // +0xa
    BOOL _disablePAGAnimation; // +0xb
    BOOL _isInGetContactProcess; // +0xc
    id /* block */ _cellDidTapBlock; // +0x10
    id /* block */ _cellActionInvokeBlock; // +0x18
    id /* block */ _autoRecoverUnTappedBlock; // +0x20
    id /* block */ _getSingleEnableCommentBlock; // +0x28
    MMLiveCommentDataItem * _dataItem; // +0x30
    MMLiveCommentPubbleCell * _pubbleCell; // +0x38
    MMUIButton * _likeButton; // +0x40
    PAGView * _likeAnimationViewForMenu; // +0x48
    FinderLiveContact * _peerContact; // +0x50
    unsigned long long _lastGetContactTime; // +0x58
    MMFinderLiveSFBarrageCellUIParam * _uiParam; // +0x60
}
+ (double)estimateBarrageCellLineHeight:(id)arg1;
+ (id)createPubbleCellFrame:(id)arg1 taskId:(id)arg2;
+ (id)createPubbleCellFrame:(id)arg1 taskId:(id)arg2 maxWidth:(double)arg3;
+ (BOOL)isCellFrameSupportReuse:(id)arg1;
- (id)initWithUIParam:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)prepareForReuseWithUIParam:(id)arg1;
- (void)releaseHeavyResources;
- (void)updateWithCellFrame:(id)arg1;
- (void)updateWithCellFrame:(id)arg1 needInteritemMargin:(BOOL)arg2;
- (void)reloadLikeInfo;
- (void)refreshPubbleCell:(id)arg1;
- (void)createPubbleCellIfNeeded:(id)arg1;
- (void)setDisablePAGAnimation:(BOOL)arg1;
- (id)getSuperfanTextGradientColorFromWithLevel:(unsigned int)arg1;
- (id)getSuperfanTextGradientColorToWithLevel:(unsigned int)arg1;
- (double)getPubbleCellContentLeft;
- (double)getPubbleCellContentRight;
- (unsigned long long)getPubbleStyle:(id)arg1;
- (void)refreshLikeButton;
- (BOOL)isSupportReuse;
- (CGRect)getPubbleTapHitAreaFrame;
- (CGRect)getLikeBtnTapHitAreaFrame;
- (double)getDisplayAreaWidth;
- (double)getDisplayAreaLeft;
- (void)onPubbleTap:(CGPoint)arg1;
- (void)onLikeBtnTap;
- (void)setIsInTappedState:(BOOL)arg1;
- (void)recoverUnTappedState;
- (BOOL)showMenuItems;
- (void)hideMenuItems;
- (id)currentFinderLiveTask;
- (CGRect)getCurrentVisibleRect;
- (void)updateUIForTapStateChanged;
- (void)updateUITappedForFloatBarrage;
- (void)updateUIUnTappedForFloatBarrage;
- (BOOL)isMenuShow;
- (BOOL)isFloatBarrage;
- (BOOL)isPaidBarrage;
- (BOOL)isFanGroupBarrage;
- (id)convertedPubbleUserCell;
- (void)showMenuItemsForAudienceInRect:(CGRect)arg1;
- (void)showMenuItemsForCommentAssistantSelfInRect:(CGRect)arg1;
- (void)showMenuItemsForCommentAssistantInRect:(CGRect)arg1;
- (void)realShowMenuItemsForCommentAssistantWithCommentBannedFlag:(unsigned long long)arg1 inRect:(CGRect)arg2;
- (void)showMenuItemsForAnchorOrAssistantInRect:(CGRect)arg1;
- (void)realShowMenuItemsForAnchorOrAssistantWithCommentBannedFlag:(unsigned long long)arg1 animated:(BOOL)arg2 inRect:(CGRect)arg3;
- (void)showMenuItemsForAnchorOrAssistantSelfInRect:(CGRect)arg1;
- (void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)createLikeMenuItem;
- (id)createReplyMenuItem;
- (id)createCopyMenuItem;
- (id)createAddEmoticonMenuItem;
- (id)createShowEmoticonAlbumMenuItem;
- (id)createFinderRoleMenuItemView;
- (id)createExposeMenuItem;
- (id)createTopMenuItem;
- (id)createDisableCommentMenuItem:(unsigned long long)arg1 isNoSense:(BOOL)arg2;
- (id)createKickOutMenuItem;
- (id)createMoreMenuItem;
- (id)checkAndGenerateConnectMicMenuItem;
- (void)onCommentActionReply:(id)arg1;
- (void)onCommentActionCopy:(id)arg1;
- (void)onCommentActionAddEmoticon:(id)arg1;
- (void)onCommentActionShowEmoticonAlbum:(id)arg1;
- (void)onCommentActionExpose:(id)arg1;
- (void)onCommentActionLikeFromMenu:(id)arg1;
- (void)onCommentActionLike:(id)arg1;
- (void)onCommentActionUnLike:(id)arg1;
- (void)onCommentActionRoleFinder:(id)arg1;
- (void)onCommentActionRoleProfile:(id)arg1;
- (void)onCommentActionTop:(id)arg1;
- (void)onCommentActionBanComment:(id)arg1;
- (void)onCommentActionBanNoSenseComment:(id)arg1;
- (void)onCommentActionAllowNoSenseComment:(id)arg1;
- (void)onCommentActionAllowComment:(id)arg1;
- (void)onCommentActionKickOut:(id)arg1;
- (void)onCommentActionMore:(id)arg1;
- (void)onCommentActionInviteConnectMic:(id)arg1;
- (void)onCommentActionStopConnectMic:(id)arg1;
- (CGRect)getSelfPresentationFrame;
- (unsigned int)commentSenderRoleType;
- (BOOL)isCommentSelfCommit;
- (BOOL)isCommentSenderRoleTypeValid;
- (BOOL)selfIsCommentAssistant;
- (void)operateManagementEvent:(id /* block */)arg1;
- (void)getLiveContactForCommentSenderWithCompletion:(id /* block */)arg1;
- (unsigned long long)getCommentSenderSingleDisableCommentDef;
- (void)clearlikeAnimationViewForMenu;
- (void)playLikeAnimationInMenuItemView:(id)arg1;
- (id)createLikeAnimationView;
- (BOOL)isBigEmoticonCommentCell;
- (void)reportAudienceCommentLike:(unsigned long long)arg1;
- (void)reportAnchorCommentLike:(unsigned long long)arg1;
- (id)getCommentLikeReportDic:(id)arg1;
- (void)reportAnchorConnectMicAction:(unsigned long long)arg1;
- (void)onMenuControllerWillHideWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidHideWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidShowFailedWithExtraInfo:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (id /* block */)cellDidTapBlock;
- (void)setCellDidTapBlock:(id /* block */)arg1;
- (id /* block */)cellActionInvokeBlock;
- (void)setCellActionInvokeBlock:(id /* block */)arg1;
- (id /* block */)autoRecoverUnTappedBlock;
- (void)setAutoRecoverUnTappedBlock:(id /* block */)arg1;
- (id /* block */)getSingleEnableCommentBlock;
- (void)setGetSingleEnableCommentBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isInTappedState;
- (BOOL)isShowingMenu;
- (void)setIsShowingMenu:(BOOL)arg1;
- (BOOL)forceAlignLeftForPaidBarrage;
- (void)setForceAlignLeftForPaidBarrage:(BOOL)arg1;
- (BOOL)disablePAGAnimation;
- (id)pubbleCell;
- (void)setPubbleCell:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)likeAnimationViewForMenu;
- (void)setLikeAnimationViewForMenu:(id)arg1;
- (id)peerContact;
- (void)setPeerContact:(id)arg1;
- (unsigned long long)lastGetContactTime;
- (void)setLastGetContactTime:(unsigned long long)arg1;
- (BOOL)isInGetContactProcess;
- (void)setIsInGetContactProcess:(BOOL)arg1;
- (id)uiParam;
- (void)setUiParam:(id)arg1;
- (void).cxx_destruct;
@end
