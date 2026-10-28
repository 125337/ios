@interface MMFinderLiveKTVSingerAudioUserView : UIView <MMFinderLiveKTVLogicExt, MMFinderLiveKTVStateExt>
{
    MMFinderLiveKTVSingerUserInfo * _userInfo; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMFinderLiveAudioRoomMicAudioAnimationView * _waveAnimationView; // +0x20
    MMUILabel * _nameLabel; // +0x28
    MMUILabel * _heatLabel; // +0x30
}
+ (double)preferExtraHeight;
- (id)initWithSingerUserInfo:(id)arg1 taskId:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHeadImageView;
- (void)layoutWaveAnimationView;
- (void)layoutNameLabel;
- (void)updateNameLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateHeatLabelOrigin;
- (void)updateNameLabelText;
- (void)updateHeatLabelText;
- (void)onSingingStateChanged:(long long)arg1;
- (BOOL)isNickAndHeatNeedShow;
- (double)getHeadImageViewRadiusWithHeight:(double)arg1;
- (void)updateIsSinging:(BOOL)arg1;
- (void)updateSingerUserInfo:(id)arg1;
- (id)liveTask;
- (void)onLiveKTVNoteReached:(BOOL)arg1 singerUserId:(id)arg2 taskId:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)waveAnimationView;
- (void)setWaveAnimationView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)heatLabel;
- (void)setHeatLabel:(id)arg1;
- (void).cxx_destruct;
@end
