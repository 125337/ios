@interface MMFinderLiveKTVSeatUserView : UIView <MMFinderLiveKTVSeatUserUIChangeExt>
{
    BOOL _isTalking; // +0x8
    BOOL _isPreparing; // +0x9
    int _score; // +0xc
    MMLiveTaskId * _taskId; // +0x10
    MMFinderLiveConnectMicUser * _userInfo; // +0x18
    WCFinderHeadImageView * _userHeadImageView; // +0x20
    MMFinderLiveAudioRoomMicAudioAnimationView * _waveAnimationView; // +0x28
    MMUILabel * _tagLabel; // +0x30
    MMUILabel * _nickNameLabel; // +0x38
    MMUILabel * _heatLabel; // +0x40
}
+ (double)preferWidth;
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)getUserAvatarView;
- (void)layoutUserHeadImageView;
- (void)layoutWaveAnimationView;
- (void)layoutTagLabel;
- (void)updateTagLabelOrigin;
- (void)layoutNickNameLabel;
- (void)updateNickNameLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateHeatLabelOrigin;
- (BOOL)isUserAnchor;
- (void)refreshTagLabelUI;
- (void)updateTagLabelText;
- (void)updateHeatLabelText;
- (void)updateNickNameLabelText;
- (BOOL)isCurrentTalking;
- (void)updateUserInfo:(id)arg1;
- (void)updateIsPreparing:(BOOL)arg1;
- (void)updateScore:(int)arg1;
- (void)checkIsTalking;
- (id)finderContact;
- (id)liveTask;
- (void)onLiveKTVSeatUserUIChange:(unsigned long long)arg1 taskId:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)userHeadImageView;
- (void)setUserHeadImageView:(id)arg1;
- (id)waveAnimationView;
- (void)setWaveAnimationView:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)heatLabel;
- (void)setHeatLabel:(id)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (int)score;
- (void)setScore:(int)arg1;
- (void).cxx_destruct;
@end
