@interface MultiTalkContactsCollectionView : UIView <MultiTalkContactCellDelegate, UIScrollViewDelegate, MultiTalkMembersViewProtocol>
{
    BOOL isInMinimizeMode; // +0x8
    BOOL _m_doingAnimation; // +0x9
    BOOL _m_hasAnimationTodo; // +0xa
    BOOL _m_checkVisibleAfterAnimation; // +0xb
    BOOL _m_hasOriChangeUpdateTodo; // +0xc
    BOOL _m_isContentViewScroll; // +0xd
    BOOL _m_hasScrolling; // +0xe
    BOOL _m_hasScrollToast; // +0xf
    BOOL _frontVirtualBackgroundOn; // +0x10
    BOOL _backVirtualBackgroundOn; // +0x11
    BOOL _isFrontCamera; // +0x12
    int needShowContactInviteInfo; // +0x14
    int _m_mode; // +0x18
    id <MultiTalkMembersViewDelegate> delegate; // +0x20
    UIView * m_bigCellBackgroundView; // +0x28
    UIView * m_bigCellView; // +0x30
    UIScrollView * _m_contentScrollView; // +0x38
    NSMutableDictionary * _m_contactViewDic; // +0x40
    NSMutableDictionary * _m_contactViewCacheDic; // +0x48
    MMTimer * _m_waittingTimer; // +0x50
    long long _m_currOrientationType; // +0x58
    NSMutableArray * _m_lastMember; // +0x60
    NSMutableArray * _m_currentMember; // +0x68
    NSMutableSet * _lastVisibleUsrnameSet; // +0x70
    NSMutableSet * _lastVisibleMemberIdSet; // +0x78
    NSMutableSet * _lastVisibleUserIsVideoOrScreen; // +0x80
    MultiTalkScreenSharingAudienceBackgroundView * _bigSharingScreenBackgroundView; // +0x88
    UIView * _bigSharingScreenView; // +0x90
    unsigned long long _m_maxMultiTalkMemCount; // +0x98
    double _lastCheckContentOffsetY; // +0xa0
    UILabel * _userNameLabel; // +0xa8
    UIButton * _flipCameraButton; // +0xb0
    UIButton * _virtualBackgroundButton; // +0xb8
    CGSize _multiTalkCellSize; // +0xc0
    CGSize _currentSize; // +0xd0
}
- (id)contentsView;
- (id)initWithFrame:(CGRect)arg1;
- (double)getContentScrollViewHeight;
- (void)initContentScrollView;
- (void)initBigCellBackground;
- (void)initBigSharingScreenBackgroundView;
- (void)onSingleTap;
- (void)bigViewTransToCellsView;
- (void)bigSharingScreenViewTransToCellsView;
- (void)updateContentScrollViewHidden:(BOOL)arg1 Animating:(BOOL)arg2;
- (void)updateIpadOrientationAfterFrameChange;
- (void)updateMuteState:(BOOL)arg1;
- (void)multiTalkWindowChange:(BOOL)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)layoutAfterBottomPanelChange;
- (void)reloadButtonsForVideoStatus:(BOOL)arg1;
- (id)selectedMember;
- (id)memberCellWithMember:(id)arg1;
- (void)reloadSelectedMember:(id)arg1;
- (void)setupAudioInterruption:(BOOL)arg1;
- (void)reloadDataBeforeTalking;
- (void)reloadViewInviteMeBeforeTalking;
- (void)reloadOtherMemberBeforeTalking;
- (void)changeViewToTalkingMode;
- (void)updateScrollViewHeight;
- (CGSize)realContentsSize;
- (void)reloadData;
- (void)videoMembersInfoChanged;
- (BOOL)isInBigSharingScreenMode;
- (void)updateBigSharingScreenUserStateWithUser:(id)arg1 andRender:(id)arg2;
- (id)getSharingScreenMemberWithUserName:(id)arg1;
- (void)updateCurrentMember;
- (void)updateLastMember;
- (void)updateCellLayoutInIpadForOriChanged;
- (void)doExitAnimationWithExitUsernameSet:(id)arg1;
- (void)doChangeAnimation;
- (void)showBusyLabelWithExitUsernameSet:(id)arg1;
- (void)moveExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)removeExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)placeCellToView;
- (void)moveChangeMember;
- (void)checkAllMemberCellHidden;
- (void)updateCell:(id)arg1 withMember:(id)arg2;
- (id)calculateCurrentUsernameSet;
- (id)calculateExitUsernameSetWithCurrentSet:(id)arg1;
- (void)layoutSubviews;
- (void)updateContentLayout;
- (void)initWaittingTimer;
- (void)waittingTimerCheck;
- (id)backgroundColorAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (double)alphaAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (CGSize)getMultiTalkCellSizeForTotalCount:(unsigned long long)arg1;
- (CGRect)layoutAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (CGRect)layoutInIpadAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (CGRect)layoutInIphoneAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (id)getCurrentCellByUserName:(id)arg1;
- (id)getCellByUserName:(id)arg1 center:(CGPoint)arg2;
- (id)getLastValidContactCell;
- (void)updateScrollViewContentSize;
- (CGSize)bigCellViewSize;
- (unsigned long long)totalMemberCount;
- (id)memberOfIndex:(unsigned long long)arg1;
- (id)renderForUsername:(id)arg1;
- (BOOL)isVideoOnForUser:(id)arg1;
- (BOOL)isSharingScreenForUser:(id)arg1;
- (void)checkIfOnePerson;
- (id)memberInviteMeBeforeTalking;
- (unsigned long long)memberCountBeforeTalking;
- (id)memberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (double)operationPanelDisplayHeight:(int)arg1;
- (void)onClickMultiTalkContactCellWithContact:(id)arg1 render:(id)arg2;
- (void)checkToShowBigView;
- (void)checkIfSetVirtualBackgroundSelect;
- (void)onFlipCameraButtonClick;
- (void)onBackgroundSelect;
- (void)hideButtonsForCameraMode;
- (void)onClickMultiTalkContactCellBigview;
- (BOOL)getMultitalkCollectionViewDoingAnimatioin;
- (void)setMultitalkCollectionViewDoingAnimatioin:(BOOL)arg1;
- (int)getIfneedShowContactInviteInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setM_isContentViewScroll:(BOOL)arg1;
- (BOOL)checkVisibleMultiTalkCells;
- (BOOL)isMultiTalkCellVisible:(id)arg1;
- (id)lastVisibleUsrnameSet;
- (id)lastVisibleMemberIdSet;
- (id)lastVisibleUserIsVideoOrScreen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (id)m_bigCellBackgroundView;
- (void)setM_bigCellBackgroundView:(id)arg1;
- (id)m_bigCellView;
- (void)setM_bigCellView:(id)arg1;
- (int)needShowContactInviteInfo;
- (void)setNeedShowContactInviteInfo:(int)arg1;
- (id)m_contentScrollView;
- (void)setM_contentScrollView:(id)arg1;
- (id)m_contactViewDic;
- (void)setM_contactViewDic:(id)arg1;
- (id)m_contactViewCacheDic;
- (void)setM_contactViewCacheDic:(id)arg1;
- (id)m_waittingTimer;
- (void)setM_waittingTimer:(id)arg1;
- (BOOL)m_doingAnimation;
- (void)setM_doingAnimation:(BOOL)arg1;
- (BOOL)m_hasAnimationTodo;
- (void)setM_hasAnimationTodo:(BOOL)arg1;
- (BOOL)m_checkVisibleAfterAnimation;
- (void)setM_checkVisibleAfterAnimation:(BOOL)arg1;
- (BOOL)m_hasOriChangeUpdateTodo;
- (void)setM_hasOriChangeUpdateTodo:(BOOL)arg1;
- (BOOL)m_isContentViewScroll;
- (BOOL)m_hasScrolling;
- (void)setM_hasScrolling:(BOOL)arg1;
- (BOOL)m_hasScrollToast;
- (void)setM_hasScrollToast:(BOOL)arg1;
- (long long)m_currOrientationType;
- (void)setM_currOrientationType:(long long)arg1;
- (int)m_mode;
- (void)setM_mode:(int)arg1;
- (id)m_lastMember;
- (void)setM_lastMember:(id)arg1;
- (id)m_currentMember;
- (void)setM_currentMember:(id)arg1;
- (void)setLastVisibleUsrnameSet:(id)arg1;
- (void)setLastVisibleMemberIdSet:(id)arg1;
- (void)setLastVisibleUserIsVideoOrScreen:(id)arg1;
- (id)bigSharingScreenBackgroundView;
- (void)setBigSharingScreenBackgroundView:(id)arg1;
- (id)bigSharingScreenView;
- (void)setBigSharingScreenView:(id)arg1;
- (CGSize)multiTalkCellSize;
- (void)setMultiTalkCellSize:(CGSize)arg1;
- (unsigned long long)m_maxMultiTalkMemCount;
- (void)setM_maxMultiTalkMemCount:(unsigned long long)arg1;
- (double)lastCheckContentOffsetY;
- (void)setLastCheckContentOffsetY:(double)arg1;
- (CGSize)currentSize;
- (void)setCurrentSize:(CGSize)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)flipCameraButton;
- (void)setFlipCameraButton:(id)arg1;
- (id)virtualBackgroundButton;
- (void)setVirtualBackgroundButton:(id)arg1;
- (BOOL)frontVirtualBackgroundOn;
- (void)setFrontVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)backVirtualBackgroundOn;
- (void)setBackVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void).cxx_destruct;
@end
