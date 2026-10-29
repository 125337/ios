@interface WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView : UIView
{
    id <WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate> _delegate; // +0x8
    NSMutableArray * _avatarList; // +0x10
    double _avatarMargin; // +0x18
    CGSize _avatarSize; // +0x20
}
+ (unsigned long long)maxTeamListCount;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (void)updateAudioWaveColor:(id)arg1;
- (void)updateListCameraOn:(id)arg1;
- (void)updateTalkingStatus:(id)arg1;
- (void)updateWithInfoList:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)calculateAvatarSize:(CGSize)arg1;
- (unsigned long long)lines;
- (id)showingList;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatarList;
- (void)setAvatarList:(id)arg1;
- (CGSize)avatarSize;
- (void)setAvatarSize:(CGSize)arg1;
- (double)avatarMargin;
- (void)setAvatarMargin:(double)arg1;
- (void).cxx_destruct;
@end
