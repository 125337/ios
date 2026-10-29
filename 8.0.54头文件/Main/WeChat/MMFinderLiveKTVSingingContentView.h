@interface MMFinderLiveKTVSingingContentView : MMFinderLiveKTVBaseView <MMFinderLiveKSKitAudioExt, PAGViewListener, MMFinderLiveKTVStateExt>
{
    int _currScore; // +0x8
    int _realtimeScoreSentenceIndex; // +0xc
    int _sumGoodScoreCnt; // +0x10
    int _sumPerfectScoreCnt; // +0x14
    NSString * _currUniqueId; // +0x18
    id /* block */ _requestSingerHeaderUIDescCallback; // +0x20
    id /* block */ _requestSingerPlayerUIDescCallback; // +0x28
    PAGView * _goodPAGView; // +0x30
    PAGView * _perfectPAGView; // +0x38
    MMUILabel * _greateScoreContentLabel; // +0x40
    MMUILabel * _greateScoreCntLabel; // +0x48
    MMFinderLiveKSKitNoteAdjustProgressView * _musicNoteAdjustView; // +0x50
    MMFinderLiveKSKitLyricContainerView * _musicLyricContainerView; // +0x58
    MMUILabel * _scoreLabel; // +0x60
    NSString * _ktvThemeResourceFetchSessionToken; // +0x68
    MMFinderLiveKTVReporter * _reporter; // +0x70
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
- (void)refreshScoreLabelUI;
- (void)updateScoreLabelOrigin;
- (void)createGoodPAGView;
- (void)updateGoodPAGViewOrigin;
- (void)createPerfectPAGView;
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
- (void)onAnimationEnd:(id)arg1;
- (id)currUniqueId;
- (void)setCurrUniqueId:(id)arg1;
- (id /* block */)requestSingerHeaderUIDescCallback;
- (void)setRequestSingerHeaderUIDescCallback:(id /* block */)arg1;
- (id /* block */)requestSingerPlayerUIDescCallback;
- (void)setRequestSingerPlayerUIDescCallback:(id /* block */)arg1;
- (int)currScore;
- (void)setCurrScore:(int)arg1;
- (int)realtimeScoreSentenceIndex;
- (void)setRealtimeScoreSentenceIndex:(int)arg1;
- (id)goodPAGView;
- (void)setGoodPAGView:(id)arg1;
- (id)perfectPAGView;
- (void)setPerfectPAGView:(id)arg1;
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

