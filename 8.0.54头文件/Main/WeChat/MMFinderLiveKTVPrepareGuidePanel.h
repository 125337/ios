@interface MMFinderLiveKTVPrepareGuidePanel : MMPageSheetBaseView
{
    BOOL _isSongNotifyToPlay; // +0x8
    BOOL _isSingSessionPrepared; // +0x9
    BOOL _isSingSessionConnecting; // +0xa
    BOOL _isSongResPrepared; // +0xb
    BOOL _isSongResDownloading; // +0xc
    BOOL _isGiveUp; // +0xd
    unsigned int _countDownSecond; // +0x10
    id /* block */ _prepareFinishCallback; // +0x18
    MMFinderLiveKSKitMusicSong * _songData; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    UIView * _panelView; // +0x30
    MMUILabel * _tipLabel; // +0x38
    MMWebImageView * _songCoverImgView; // +0x40
    MMUILabel * _songNameLabel; // +0x48
    MMUILabel * _artistNameLabel; // +0x50
    MMUILabel * _durationLabel; // +0x58
    WCFinderAnimationLoadingView * _loadingView; // +0x60
    MMUILabel * _loadingLabel; // +0x68
    UIButton * _startButton; // +0x70
    UIButton * _giveupButton; // +0x78
    MMTimer * _countDownTimer; // +0x80
    MMLiveStorageCleanupPinningToken * _songResourcesPinningToken; // +0x88
}
+ (id)genFormatDuraionTimeStringFrom:(int)arg1;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)setupPageSheetConfig;
- (void)initDefaultData;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutTipLabel;
- (void)updateTipLabelText;
- (void)updateTipLabelOrigin;
- (void)layoutSongCoverImgView;
- (void)layoutSongNameLabel;
- (void)updateSongNameLabelOrigin;
- (void)layoutArtistNameAndDurationLabels;
- (void)updateArtistNameAndDurationLabelsOrigin;
- (void)layoutGiveupButton;
- (void)giveupButtonAction;
- (void)layoutStartButton;
- (void)startButtonAction;
- (void)updateStartBtnText;
- (BOOL)needShowRetryTip;
- (void)layoutLoadingWidgets;
- (void)updateLoadingState;
- (BOOL)needShowLoading;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)onCurrSongNameUpdated;
- (void)updateDatas;
- (void)startCountDown;
- (void)onCountDown;
- (void)stopCountDown;
- (void)onCountDownFinish;
- (void)refreshTipLabel;
- (void)refreshUI;
- (void)prepareToStartSing;
- (void)startCgiToPlay:(id)arg1;
- (void)startToPrepareSingSession:(id)arg1;
- (void)startToPrepareSongResource:(id)arg1;
- (void)onSingPrepareResponse;
- (id)liveTask;
- (id)finderTaskId;
- (unsigned int)initCountDownSecond;
- (BOOL)isPrepared;
- (id /* block */)prepareFinishCallback;
- (void)setPrepareFinishCallback:(id /* block */)arg1;
- (id)songData;
- (void)setSongData:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)songCoverImgView;
- (void)setSongCoverImgView:(id)arg1;
- (id)songNameLabel;
- (void)setSongNameLabel:(id)arg1;
- (id)artistNameLabel;
- (void)setArtistNameLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)giveupButton;
- (void)setGiveupButton:(id)arg1;
- (unsigned int)countDownSecond;
- (void)setCountDownSecond:(unsigned int)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (BOOL)isSongNotifyToPlay;
- (void)setIsSongNotifyToPlay:(BOOL)arg1;
- (BOOL)isSingSessionPrepared;
- (void)setIsSingSessionPrepared:(BOOL)arg1;
- (BOOL)isSingSessionConnecting;
- (void)setIsSingSessionConnecting:(BOOL)arg1;
- (BOOL)isSongResPrepared;
- (void)setIsSongResPrepared:(BOOL)arg1;
- (BOOL)isSongResDownloading;
- (void)setIsSongResDownloading:(BOOL)arg1;
- (BOOL)isGiveUp;
- (void)setIsGiveUp:(BOOL)arg1;
- (id)songResourcesPinningToken;
- (void)setSongResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

