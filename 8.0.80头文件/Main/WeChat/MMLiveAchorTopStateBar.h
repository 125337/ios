@interface MMLiveAchorTopStateBar : MMLiveBaseComponentView
{
    UIImageView * _networkStateImageView; // +0x8
    UIImageView * _likedImageView; // +0x10
    MMUILabel * _likedCountLabel; // +0x18
    id <MMLiveAchorTopStateBarDelegate> _delegate; // +0x20
    id /* block */ _widthChangeCallback; // +0x28
    unsigned long long _liveId; // +0x30
    NSString * _roomId; // +0x38
    long long _roleType; // +0x40
    long long _currentNetWorkState; // +0x48
    unsigned long long _likeCount; // +0x50
    MMTimerLabel * _timerLabel; // +0x58
}
+ (id)networkImageForState:(long long)arg1;
- (void)layoutSubviews;
- (void)forceLayoutForOrientationChanged;
- (void)layoutUI;
- (void)updateSubViewsHidden:(BOOL)arg1;
- (void)layoutNetworkStateImageView;
- (void)layoutTimerLabel;
- (void)layoutLikedImageView;
- (void)layoutLikedCountLabel;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)updateLikeCount:(unsigned long long)arg1;
- (void)onEnterLive;
- (double)getLikedCountLabelRight;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)widthChangeCallback;
- (void)setWidthChangeCallback:(id /* block */)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (long long)currentNetWorkState;
- (void)setCurrentNetWorkState:(long long)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (id)networkStateImageView;
- (id)timerLabel;
- (void)setTimerLabel:(id)arg1;
- (id)likedImageView;
- (id)likedCountLabel;
- (void).cxx_destruct;
@end
