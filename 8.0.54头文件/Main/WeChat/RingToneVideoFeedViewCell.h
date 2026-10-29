@interface RingToneVideoFeedViewCell : UICollectionViewCell <WCAudioSessionExt, RingTonePlayerExt, RingBackInfoDisplaySheetViewDelegate>
{
    BOOL _isCurrentPlaying; // +0x8
    RingToneDetail * _ring; // +0x10
    id <RingToneVideoFeedViewCellDelegate> _delegate; // +0x18
    WCFinderFeedContentVM * _feedContentVM; // +0x20
    RingToneFinderPlayerView * _finderPlayerView; // +0x28
    MMUIButton * _doneBtn; // +0x30
    UIImageView * _ringIconView; // +0x38
    UIImageView * _musicDancingView; // +0x40
    MMUILabel * _descLabel; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUILabel * _settingsLabel; // +0x58
    unsigned long long _useFriendNum; // +0x60
    unsigned long long _settingNum; // +0x68
    CAGradientLayer * _gradientLayer; // +0x70
    UIView * _blurView; // +0x78
    MMUIButton * _tingBtn; // +0x80
}
+ (id)cellID;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 ring:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)registerExtForVC:(unsigned long long)arg1;
- (void)initSubView;
- (void)updateContentWithRingDetail:(id)arg1 vm:(id)arg2 playFirstRing:(BOOL)arg3 friendName:(id)arg4;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBlurAlpha:(double)arg1;
- (void)_triggerAntiAddictCheckLogic;
- (void)playWithSound:(BOOL)arg1;
- (void)stopPlaySound:(BOOL)arg1;
- (void)setDancingViewOn:(BOOL)arg1;
- (double)getCurrentPlayTime;
- (void)onSelectRing:(id)arg1;
- (void)onJumpToTingInfoPage:(id)arg1;
- (void)onRingToneSheetDisappear;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isCurrentPlaying;
- (void)setIsCurrentPlaying:(BOOL)arg1;
- (id)feedContentVM;
- (void)setFeedContentVM:(id)arg1;
- (id)finderPlayerView;
- (void)setFinderPlayerView:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)ringIconView;
- (void)setRingIconView:(id)arg1;
- (id)musicDancingView;
- (void)setMusicDancingView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)settingsLabel;
- (void)setSettingsLabel:(id)arg1;
- (unsigned long long)useFriendNum;
- (void)setUseFriendNum:(unsigned long long)arg1;
- (unsigned long long)settingNum;
- (void)setSettingNum:(unsigned long long)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)tingBtn;
- (void)setTingBtn:(id)arg1;
- (void).cxx_destruct;
@end

