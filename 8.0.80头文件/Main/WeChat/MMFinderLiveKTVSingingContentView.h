@interface MMFinderLiveKTVSingingContentView : MMFinderLiveKTVBaseView <MMFinderLiveKSKitAudioExt, PAGViewListener, MMFinderLiveKTVStateExt>
{
    BOOL _goodPAGAnimating; // +0x8
    BOOL _perfectPAGAnimating; // +0x9
    int _currScore; // +0xc
    int _realtimeScoreSentenceIndex; // +0x10
    int _sumGoodScoreCnt; // +0x14
    int _sumPerfectScoreCnt; // +0x18
    NSString * _currUniqueId; // +0x20
    MMLiveRewardGiftSendingFlowerButton * _sendFlowerButton; // +0x28
    id /* block */ _requestSingerHeaderUIDescCallback; // +0x30
    id /* block */ _requestSingerPlayerUIDescCallback; // +0x38
    id /* block */ _singingFrameUpdateBlock; // +0x40
    PAGView * _goodPAGView; // +0x48
    PAGView * _perfectPAGView; // +0x50
    MMUILabel * _greateScoreContentLabel; // +0x58
    MMUILabel * _greateScoreCntLabel; // +0x60
    MMFinderLiveKSKitNoteAdjustProgressView * _musicNoteAdjustView; // +0x68
    MMFinderLiveKSKitLyricContainerView * _musicLyricContainerView; // +0x70
    MMUILabel * _scoreLabel; // +0x78
    UIView * _singingOperationsContainerView; // +0x80
    UIButton * _audioEffectBtn; // +0x88
    UIButton * _originalSongBtn; // +0x90
    UIButton * _pauseSongBtn; // +0x98
    UIButton * _endSongBtn; // +0xa0
    NSString * _ktvThemeResourceFetchSessionToken; // +0xa8
    MMFinderLiveKTVReporter * _reporter; // +0xb0
    CGRect _singingContentFrame; // +0xb8
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutMusicNoteAdjustView;
- (void)layoutMusicLyricContainerView;
- (void)layoutScoreLabel;
- (void)layoutSingingOperationsContainerView;
- (void)refreshOriginalSongBtnUI;
- (void)refreshPauseSongBtnUI;
- (void)refreshScoreLabelUI;
- (void)updateScoreLabelOrigin;
- (void)createGoodPAGView:(id /* block */)arg1;
- (void)updateGoodPAGViewOrigin;
- (void)createPerfectPAGView:(id /* block */)arg1;
- (void)updatePerfectPAGViewOrigin;
- (CGPoint)getGreateScoreAnimationViewCenter;
- (CGRect)getSingerPlayerRect;
- (CGRect)getSingerHeaderRect;
- (void)createGreateScoreContentLabel;
- (void)updateGreateScoreContentLabelOrigin;
- (void)createGreateScoreCntLabel;
- (void)updateGreateScoreCntLabelOrigin;
- (void)startSing;
- (void)clearStates;
- (BOOL)updateCurrUniqueId;
- (void)onKSKitSingStart;
- (void)onKSKitSingStop;
- (void)onKSKitSingEnd;
- (void)updateCurrScore:(int)arg1;
- (void)clearDatas;
- (void)checkScoreResult:(int)arg1 sentence:(int)arg2;
- (void)startGoodScoreAnimation;
- (void)stopGoodScoreAnimation;
- (void)startPerfectScoreAnimation;
- (void)stopPerfectScoreAnimation;
- (void)showGreateScoreCntAnimated:(unsigned long long)arg1 duration:(double)arg2;
- (void)hideGreateScoreCnt;
- (void)delayClearSumGoodScoreCnt;
- (void)clearSumGoodScoreCnt;
- (void)delayClearSumPerfectScoreCnt;
- (void)clearSumPerfectScoreCnt;
- (void)onScoreLabelTapped;
- (void)onClickAudioEffectBtn;
- (void)onClickOriginalSongBtn;
- (void)onClickPauseSongBtn;
- (void)onClickEndSongBtn;
- (void)endSong:(id)arg1;
- (BOOL)changeCurrSongPauseState:(BOOL)arg1 songItem:(id)arg2;
- (BOOL)hasOriginalFile;
- (id)finderLiveTask;
- (id)ksKitAudioEngine;
- (int)goodScoreStandard;
- (int)perfectScoreStandard;
- (id)ktvReporter;
- (void)onKSKitSingStartWithUniqueId:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingStopWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitVoiceMIDIScoreReached:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3 uniqueId:(id)arg4 taskId:(id)arg5;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 disableScoreAdjustChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 useVideoChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 realTimeScoreChanged:(int)arg3 sentenceIndex:(int)arg4;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 totalScoreChanged:(int)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 wonderfulPositionBeginUpdated:(int)arg3 end:(int)arg4;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (void)checkAndResetForWonderfulPosition;
- (void)onAnimationEnd:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)currUniqueId;
- (void)setCurrUniqueId:(id)arg1;
- (id)sendFlowerButton;
- (id /* block */)requestSingerHeaderUIDescCallback;
- (void)setRequestSingerHeaderUIDescCallback:(id /* block */)arg1;
- (id /* block */)requestSingerPlayerUIDescCallback;
- (void)setRequestSingerPlayerUIDescCallback:(id /* block */)arg1;
- (id /* block */)singingFrameUpdateBlock;
- (void)setSingingFrameUpdateBlock:(id /* block */)arg1;
- (int)currScore;
- (void)setCurrScore:(int)arg1;
- (int)realtimeScoreSentenceIndex;
- (void)setRealtimeScoreSentenceIndex:(int)arg1;
- (CGRect)singingContentFrame;
- (void)setSingingContentFrame:(CGRect)arg1;
- (id)goodPAGView;
- (void)setGoodPAGView:(id)arg1;
- (id)perfectPAGView;
- (void)setPerfectPAGView:(id)arg1;
- (BOOL)goodPAGAnimating;
- (void)setGoodPAGAnimating:(BOOL)arg1;
- (BOOL)perfectPAGAnimating;
- (void)setPerfectPAGAnimating:(BOOL)arg1;
- (id)greateScoreContentLabel;
- (void)setGreateScoreContentLabel:(id)arg1;
- (id)greateScoreCntLabel;
- (void)setGreateScoreCntLabel:(id)arg1;
- (id)musicNoteAdjustView;
- (void)setMusicNoteAdjustView:(id)arg1;
- (id)musicLyricContainerView;
- (void)setMusicLyricContainerView:(id)arg1;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg1;
- (id)singingOperationsContainerView;
- (void)setSingingOperationsContainerView:(id)arg1;
- (id)audioEffectBtn;
- (void)setAudioEffectBtn:(id)arg1;
- (id)originalSongBtn;
- (void)setOriginalSongBtn:(id)arg1;
- (id)pauseSongBtn;
- (void)setPauseSongBtn:(id)arg1;
- (id)endSongBtn;
- (void)setEndSongBtn:(id)arg1;
- (int)sumGoodScoreCnt;
- (void)setSumGoodScoreCnt:(int)arg1;
- (int)sumPerfectScoreCnt;
- (void)setSumPerfectScoreCnt:(int)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
