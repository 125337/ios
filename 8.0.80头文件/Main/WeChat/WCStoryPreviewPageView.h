@interface WCStoryPreviewPageView : WCStoryVideoPlayerView <WCStoryBubbleOrCommentAnimationViewDelegate, WCActionSheetDelegate, WCStoryAggregateCommentBubbleViewControllerDelegate, WCStoryCommentOthersViewControllerDelegate, WCStoryFacadeExt>
{
    BOOL m_isMyOwnWC; // +0x8
    WCStoryBubbleOrCommentAnimationView * m_commentAnimationView; // +0x10
    BOOL m_isOnShowing; // +0x18
    BOOL m_hasDoBubble; // +0x19
    NSMutableSet * m_unreadCommentIdSet; // +0x20
    BOOL _canDeleteMyOwnStory; // +0x28
    BOOL _allElementsHidden; // +0x29
    id <WCStoryPreviewPageViewDelegate> delegate; // +0x30
    WCStoryDataItem * m_dataItem; // +0x38
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x40
    id <WCStoryVideoPlayerViewDelegate> _playerDelegate; // +0x48
    long long _pageViewScene; // +0x50
    MMUIButton * _friendVisitVersionCommentOthersBtn; // +0x58
    MMUIButton * _oldVersionCommentOthersBtn; // +0x60
    MMUIButton * _subCommentBtn; // +0x68
    MMUIButton * _subBubbleBtn; // +0x70
    MMUILabel * _uploadFailedTipView; // +0x78
    MMUIImageView * _privateImageView; // +0x80
    MMUIImageView * _hideInTimelineImageView; // +0x88
    NSMutableArray * _iconViewArray; // +0x90
    MMUIButton * _commentCountBtn; // +0x98
    MMUIButton * _visitorCountBtn; // +0xa0
    UILabel * _commentTipsLabel; // +0xa8
    UIView * _commentBluePointView; // +0xb0
    UIView * _visitBluePointView; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 canDeleteMyOwnStory:(BOOL)arg3;
- (void)setPageViewScene:(long long)arg1;
- (void)setAllElementsHidden:(BOOL)arg1;
- (void)updateIconToolView;
- (void)updateUploadStateWithItem:(id)arg1;
- (void)updatePrivacyStatusWithItem:(id)arg1;
- (void)showUnloadFailedWording:(id)arg1;
- (void)configSubView;
- (void)configBackGroundGesture;
- (void)configFlagIconView;
- (void)voiceOverElementEnable:(BOOL)arg1;
- (void)configCommentBtn;
- (void)configOldCommentBtn;
- (void)reloadCommentBtn;
- (void)configCommentAnimationView;
- (void)startBubbleAndCommentAnimation;
- (void)doBubbleCommentWithDoubleClick:(BOOL)arg1;
- (void)doVisitComment;
- (void)doCommentWithText:(id)arg1 isDoubleClick:(BOOL)arg2 replyComment:(id)arg3;
- (void)insertNewComment:(id)arg1;
- (void)updateDataItemForCommentWithItem:(id)arg1;
- (void)updataUnreadComment;
- (void)clearUnreadCommentIdSet;
- (void)stopBubbleAndCommentAnimation;
- (void)showAggregateCommentBubbleListFocusOnVisitor:(BOOL)arg1;
- (void)showCommentsList;
- (void)tryShowCommentsList;
- (void)showRelateCommentsList;
- (void)showCommentsListAndScrollToBottom:(BOOL)arg1 animated:(BOOL)arg2 showKeyboard:(BOOL)arg3;
- (void)showBubbleList;
- (id)uploadFailedTipView;
- (id)privateImageView;
- (id)hideInTimelineImageView;
- (void)playVideoWithMute:(BOOL)arg1;
- (void)pauseVideo;
- (void)stopAndCleanPlayer;
- (id)tipWordingWithErrorType:(int)arg1;
- (BOOL)canReUploadWithErrorType:(int)arg1;
- (void)showMoreAction;
- (void)onShowActionSheet;
- (void)hideDataItemAndShowTips;
- (void)onHideStoryData;
- (void)onReUploadStoryData;
- (void)onShowAlertViewOfDelete;
- (void)alertViewDidTapDeleteButton;
- (void)alertViewDidTapCancelButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBubbleOrCommentAnimationHasPlayOneTime:(id)arg1;
- (void)onBubbleOrCommentAnimationViewHasPlayFirstReadedItem:(id)arg1;
- (void)onBubbleOrCommentShowAnimationDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)onBubbleOrCommentAnimationStartToPlayLastOneFirstTime:(id)arg1;
- (void)onBubbleBoilingHasPlayOneTime;
- (void)onCommentCountButtonClick;
- (void)onVisitorCountButtonClick;
- (void)onSingleTagCommentAnimationView;
- (void)onNewVersionCommentBtnClicked;
- (void)onOldVersionCommentBtnClick;
- (void)onSingleTapBackGroundView:(id)arg1;
- (void)onDoubleTapBackGroundView:(id)arg1;
- (void)onWCStoryBubbleButtonSingleTap:(id)arg1;
- (void)onBubbleButtonHighlighted:(id)arg1;
- (void)onBubbleButtonCancel:(id)arg1;
- (void)StoryAggregateCommentBubbleViewControllerDidDisMissSelf;
- (void)StoryAggregateCommentBubbleViewControllerWillPushAnotherController;
- (void)StoryAggregateCommentBubbleViewControllerWillPopFromAnotherController;
- (void)StoryCommentOthersViewControllerWillPushAnotherController;
- (void)StoryCommentOthersViewControllerWillPopFromAnotherController;
- (void)onCommentSuccess:(id)arg1;
- (void)onDeleteCommentSuccess:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)playerDelegate;
- (void)setPlayerDelegate:(id)arg1;
- (BOOL)canDeleteMyOwnStory;
- (void)setCanDeleteMyOwnStory:(BOOL)arg1;
- (long long)pageViewScene;
- (id)friendVisitVersionCommentOthersBtn;
- (void)setFriendVisitVersionCommentOthersBtn:(id)arg1;
- (id)oldVersionCommentOthersBtn;
- (void)setOldVersionCommentOthersBtn:(id)arg1;
- (id)subCommentBtn;
- (void)setSubCommentBtn:(id)arg1;
- (id)subBubbleBtn;
- (void)setSubBubbleBtn:(id)arg1;
- (void)setUploadFailedTipView:(id)arg1;
- (void)setPrivateImageView:(id)arg1;
- (void)setHideInTimelineImageView:(id)arg1;
- (id)iconViewArray;
- (void)setIconViewArray:(id)arg1;
- (BOOL)isAllElementsHidden;
- (id)commentCountBtn;
- (void)setCommentCountBtn:(id)arg1;
- (id)visitorCountBtn;
- (void)setVisitorCountBtn:(id)arg1;
- (id)commentTipsLabel;
- (void)setCommentTipsLabel:(id)arg1;
- (id)commentBluePointView;
- (void)setCommentBluePointView:(id)arg1;
- (id)visitBluePointView;
- (void)setVisitBluePointView:(id)arg1;
- (void).cxx_destruct;
@end
