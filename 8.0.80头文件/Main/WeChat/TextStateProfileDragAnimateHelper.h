@interface TextStateProfileDragAnimateHelper : MMDragDownAnimateHelper <TextStateBaseMediaViewDelegate, TextStateBaseCardContentViewDelegate, MultipleTextStateCardViewDataSource, MultipleTextStateCardViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _shouldAutoPlayMedia; // +0x8
    BOOL _showSameFriendDescription; // +0x9
    BOOL _showGeneralIconButton; // +0xa
    BOOL _showAddButton; // +0xb
    BOOL _enableDragDownMoreButton; // +0xc
    BOOL _enableFriendSquareRedDot; // +0xd
    BOOL _disableJumpSquare; // +0xe
    BOOL _isFromMyTab; // +0xf
    BOOL _showStatusOperateButton; // +0x10
    BOOL _needShowDoubleTapFavoriteGuide; // +0x11
    unsigned int _notifyCount; // +0x14
    id <TextStateProfileDragAnimateHelperDelegate> _delegate; // +0x18
    long long _contactInfoViewSource; // +0x20
    id /* block */ _alphaAnimation; // +0x28
    double _mediaViewMinHeight; // +0x30
    NSHashTable * _alphaAnimateViews; // +0x38
    MultipleTextStateCardView * _multipleCardView; // +0x40
    UIButton * _bottomCloseButton; // +0x48
    MMUIButton * _addButton; // +0x50
    CContact * _contact; // +0x58
    double _profileHeight; // +0x60
    double _profileFittingHeight; // +0x68
    TextStateProfileCardContentView * _profileContentView; // +0x70
    MMTimer * _playMediaTimer; // +0x78
    double _startPlayTime; // +0x80
}
+ (double)profileBottomPaddingWithSingle:(BOOL)arg1;
+ (CGSize)standardTextStateMediaSizeForWidth:(double)arg1;
- (id)initWithFrontContainerView:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3;
- (void)setDragAnimationProgress:(id /* block */)arg1;
- (void)updateState;
- (id)pullDownCardReporter;
- (id)mediaView;
- (id)activeContentView;
- (id)mediaMaskView;
- (id)multipleCardView;
- (id)addButton;
- (void)setShowAddButton:(BOOL)arg1;
- (void)setShowStatusOperateButton:(BOOL)arg1;
- (void)onInitUI;
- (void)showProfileDragDownView:(BOOL)arg1;
- (void)setNotifyCount:(unsigned int)arg1;
- (void)setShowSameFriendDescription:(BOOL)arg1;
- (void)setShowGeneralIconButton:(BOOL)arg1;
- (void)setEnableDragDownMoreButton:(BOOL)arg1;
- (void)setEnableFriendSquareRedDot:(BOOL)arg1;
- (void)setDisableJumpSquare:(BOOL)arg1;
- (void)setSmallRedDotForMoreButton:(BOOL)arg1;
- (BOOL)isShowingFriendSquareRedDot;
- (void)disableDoubleTapFavoriteGuide;
- (void)expandContentCardIfNeeded;
- (void)updateSameFriendDescription;
- (CGSize)textStateMediaSizeForWidth:(double)arg1;
- (void)onBeginDragging;
- (void)onDidEnterDragDownState;
- (void)onWillEnterDragDownState;
- (void)onWillExitDragDownState;
- (void)onDidExitDragDownState;
- (void)onTapAddButton;
- (void)addAlphaAnimateView:(id)arg1;
- (void)setupAnimateDetailView:(id)arg1 fittingHeight:(double)arg2 normalHeight:(double)arg3;
- (void)onDragDownProgressChange:(double)arg1;
- (void)updateDragMaskView:(double)arg1;
- (BOOL)shouldUpdateMediaWithContact:(id)arg1;
- (void)updateMediaWithContact:(id)arg1;
- (BOOL)isPlayingRecent;
- (void)setupMediaViewMinHeight:(double)arg1;
- (void)startMedia;
- (void)stopMedia;
- (void)onMediaFinishPlaying;
- (void)requestUpdateDataSource;
- (void)doSourceAction:(id)arg1;
- (void)doHeadImageAction:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(BOOL)arg2;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapMoreButton:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)onTapIconButton:(id)arg1;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)onLongPress:(id)arg1 isDown:(BOOL)arg2;
- (void)onTextStateDragMaskButtonClick:(id)arg1;
- (BOOL)canAutoPlayMedia;
- (double)calMediaViewHeight;
- (BOOL)shouldShowDragDownInfoView;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onMultipleTextStateCard:(id)arg1 willDisplayCard:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onMultipleTextStateCard:(id)arg1 didMoveFromCard:(id)arg2 toCard:(id)arg3;
- (BOOL)shouldAutoMarkReadOnMultipleTextStateCardView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAutoPlayMedia;
- (void)setShouldAutoPlayMedia:(BOOL)arg1;
- (unsigned int)notifyCount;
- (BOOL)showSameFriendDescription;
- (BOOL)showGeneralIconButton;
- (BOOL)showAddButton;
- (BOOL)enableDragDownMoreButton;
- (BOOL)enableFriendSquareRedDot;
- (BOOL)disableJumpSquare;
- (BOOL)isFromMyTab;
- (void)setIsFromMyTab:(BOOL)arg1;
- (BOOL)showStatusOperateButton;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (id /* block */)alphaAnimation;
- (void)setAlphaAnimation:(id /* block */)arg1;
- (double)mediaViewMinHeight;
- (void)setMediaViewMinHeight:(double)arg1;
- (id)alphaAnimateViews;
- (void)setAlphaAnimateViews:(id)arg1;
- (void)setMultipleCardView:(id)arg1;
- (id)bottomCloseButton;
- (void)setBottomCloseButton:(id)arg1;
- (void)setAddButton:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)profileHeight;
- (void)setProfileHeight:(double)arg1;
- (double)profileFittingHeight;
- (void)setProfileFittingHeight:(double)arg1;
- (id)profileContentView;
- (void)setProfileContentView:(id)arg1;
- (id)playMediaTimer;
- (void)setPlayMediaTimer:(id)arg1;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (BOOL)needShowDoubleTapFavoriteGuide;
- (void)setNeedShowDoubleTapFavoriteGuide:(BOOL)arg1;
- (void).cxx_destruct;
@end
