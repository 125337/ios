@interface MMFinderLiveActivityTask : MMFinderLiveTask <AVAudioPlayerDelegate>
{
    BOOL _isLiveCdnPlayerMuted; // +0x8
    unsigned int _activityResVersion; // +0xc
    MMFinderLiveWinterOlympicTorchInfo * _torchInfo; // +0x10
    NSString * _activityVerifyInfo; // +0x18
    unsigned long long _eventType; // +0x20
    MMFinderLiveEventInfo * _activityInfo; // +0x28
    MMFinderLiveBackgroundMusicLogic * _backgroundMusicLogic; // +0x30
}
+ (id)activityResFilePathForDefaultVersion:(id)arg1 activityId:(unsigned long long)arg2;
- (void)showAlert:(id)arg1;
- (void)showAlert:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)showAlertInLive:(id)arg1;
- (void)showAlertInLive:(id)arg1 actionBlock:(id /* block */)arg2;
- (id)initWithFinderDataItem:(id)arg1;
- (BOOL)isAudienceLiveRewardEnable;
- (BOOL)isLiveEnableReward;
- (BOOL)isLiveShoppingAvailable;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)isLiveGameInTeamUp;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isLiveConnectMicEnabled;
- (BOOL)isLiveIdentitySwitchEnabled;
- (BOOL)isWatchLiveWithoutLoginEnabled;
- (BOOL)isLiveHandoffEnabled;
- (BOOL)isLiveAirPlayEnabled;
- (BOOL)isLivePictureInPictureEnabled;
- (BOOL)isLiveClearingGiftEffectEnabled;
- (BOOL)isLiveClaritySwitchEnabled;
- (id)createNewTaskId;
- (id)createLiveViewWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)updateJoinLiveContext:(id)arg1;
- (BOOL)startPreviewCdnPlay;
- (void)switchCdnOrTrtcPlay:(BOOL)arg1;
- (void)generateMainCdnPlayerItem;
- (BOOL)shouldForbidLandScapeForIphone;
- (BOOL)hasAudienceBackgroundMusic;
- (BOOL)innerPauseLiveForAudience;
- (BOOL)innerResumeLiveForAudience;
- (BOOL)muteCdnPlayer;
- (BOOL)unmuteCdnPlayer;
- (BOOL)isActivityLiveTask;
- (id)activityTaskId;
- (unsigned int)activityId;
- (Class)currentLiveViewClass;
- (Class)currentLiveViewControllerClass;
- (BOOL)showLiveStream;
- (id)liveEventToken;
- (BOOL)isWinterOlympicsLive;
- (id)winterOlympicsLiveView;
- (void)updateActivityInfoWithFinderLiveAudienceEventInfo:(id)arg1;
- (void)updateMusicList:(id)arg1;
- (id)activityResFilePath:(id)arg1;
- (void)checkAndUpdateLiveRoleType;
- (void)updateActivityInfoWithLiveEventInfo:(id)arg1;
- (void)checkShowLiveStreamValueChangeWithLastValue:(BOOL)arg1;
- (void)checkAndRefreshMusic:(BOOL)arg1;
- (id)torchInfo;
- (void)setTorchInfo:(id)arg1;
- (unsigned int)activityResVersion;
- (void)setActivityResVersion:(unsigned int)arg1;
- (id)activityVerifyInfo;
- (void)setActivityVerifyInfo:(id)arg1;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (id)backgroundMusicLogic;
- (void)setBackgroundMusicLogic:(id)arg1;
- (BOOL)isLiveCdnPlayerMuted;
- (void)setIsLiveCdnPlayerMuted:(BOOL)arg1;
- (void).cxx_destruct;
@end
