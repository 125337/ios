@interface WCFinderLiveHomePageEntertainmentAudioRoomCell : WCFinderLiveFeedGenericCdnCell <InfiniteLoopContainerViewDelegate, WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate, WCFinderHeadImageViewDelegate, WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate>
{
    id <WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate> _delegate; // +0x8
    WCFinderLiveHomePageFeedEntertainmentAudioRoomVM * _feedVM; // +0x10
    WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView * _avatarListView; // +0x18
    RichTextView * _titleLabel; // +0x20
    UIView * _authContainer; // +0x28
    WCFinderHeadImageView * _avatorImageView; // +0x30
    RichTextView * _nicknameTV; // +0x38
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x40
    WCFinderFeedImageCDNView * _bgBlurImageView; // +0x48
    InfiniteLoopContainerView * _notificationListView; // +0x50
    MMTimer * _timer; // +0x58
}
+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)onConnectMicButtonClicked;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)updateState;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)onAuthorViewDidClick;
- (id)generateAvatarInfoList;
- (void)relayoutNickname;
- (void)layoutUI;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (void)prepareForMorphTransition;
- (void)onEntertainmentAudioRoomStateUpdated;
- (void)onEntertainmentAudioRoomBackgroundImageUpdated;
- (void)onEntertainmentAudioRoomTalkingStatusUpdated;
- (void)onEntertainmentAudioRoomListStatusFlagUpdate:(id)arg1;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onTeamUpListClickUnoccupiedSeat;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)avatarListView;
- (void)setAvatarListView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)authContainer;
- (void)setAuthContainer:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)bgBlurImageView;
- (void)setBgBlurImageView:(id)arg1;
- (id)notificationListView;
- (void)setNotificationListView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
