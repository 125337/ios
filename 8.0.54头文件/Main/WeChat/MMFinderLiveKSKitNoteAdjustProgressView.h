@interface MMFinderLiveKSKitNoteAdjustProgressView : MMFinderLiveKTVBaseView <MMFinderLiveKSKitAudioExt, MMFinderLiveKTVSEISyncRecvExt, MMFinderLiveKTVStateExt, MMFinderLiveKTVProgressExt, MMFinderLiveKTVUIExt>
{
    BOOL _isStart; // +0x8
    BOOL _isNoteDotAnimating; // +0x9
    BOOL _currNoteIsHit; // +0xa
    BOOL _isNoteHasAppeared; // +0xb
    BOOL _isNoteDotCanAppeared; // +0xc
    BOOL _isNoteUpdated; // +0xd
    BOOL _isNoteHasUpdated; // +0xe
    float _currNoteHeight; // +0x10
    float _currNoteHeightPercent; // +0x14
    float _currNoteValue; // +0x18
    int _nextNoteBeginTime; // +0x1c
    int _lastRemoteVoiceNoteUpdateTime; // +0x20
    int _firstNoteBeginTime; // +0x24
    id /* block */ _startCallback; // +0x28
    NSString * _uniqueId; // +0x30
    UIView * _topInnerLine; // +0x38
    UIView * _bottomInnerLine; // +0x40
    MMFinderLiveKSKitMusicNoteScrollView * _musicNoteScrollView; // +0x48
    MMFinderLiveKSKitMusicNoteContentView * _musicNoteContentView; // +0x50
    PAGView * _goodHitPAGView; // +0x58
    UIImageView * _musicNoteDot; // +0x60
    double _lastNoteAdjustTime; // +0x68
    NSMutableArray * _allMusicNoteList; // +0x70
    long long _lastLoadedNoteIndex; // +0x78
    MMFinderLiveKSKitProgessPreparingView * _progressPreparingView; // +0x80
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTopInnerLine;
- (void)layoutBottomInnerLine;
- (void)updateTopBottomLinesHidden;
- (void)layoutMusicNoteScrollView;
- (void)layoutMusicNoteContentView;
- (void)layoutMusicNoteDot;
- (void)updateNoteDotAndNoteHitPagHidden;
- (void)updateNoteDotCenterYAnimated:(BOOL)arg1;
- (void)resetNoteHeightPercent;
- (void)initNoteHeightPercent;
- (void)createGoodHitPAGView;
- (void)layoutLyricPreparingView;
- (void)startWithMusicNoteList:(id)arg1 uniqueId:(id)arg2;
- (void)stop;
- (double)preferHeight;
- (double)preferWidthInIpad;
- (void)startNoteHeightUIRefresh;
- (void)initDatas:(id)arg1;
- (void)clearDatas;
- (void)synchronizeCurrKTVState;
- (id)getNextBatchMusicNotes:(unsigned long long)arg1 intervalSegment:(BOOL)arg2 minVisiblePosition:(int)arg3;
- (void)updateSelfHidden;
- (void)checkIsTimeToPrepareNextBatchMusicNotes:(int)arg1;
- (void)checkNoteHasAppearedWithCurrPosition:(int)arg1;
- (void)updateNoteHasAppeared:(BOOL)arg1;
- (void)updateNoteDotCanAppeared:(BOOL)arg1;
- (BOOL)updateNoteHeightPercent:(float)arg1;
- (void)updateCurrNoteIsHit:(BOOL)arg1;
- (void)onPositionChanged:(int)arg1 preAdjust:(int)arg2;
- (void)updateRemoteVoiceNoteWithPositionIfNeed:(int)arg1;
- (void)onVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 timeOffset:(int)arg3 duration:(int)arg4 hit:(BOOL)arg5;
- (void)refreshNoteHeightIfNeed;
- (void)freqAdjustNoteHeight:(float)arg1 noteValue:(float)arg2;
- (int)noteAdjustTimeInterval;
- (double)noteDotAnimateDuration;
- (void)checkHitAnimationStateWithCurrNote:(id)arg1 nextNote:(id)arg2 position:(int)arg3;
- (void)startGoodHitAnimation;
- (void)stopGoodHitAnimation;
- (void)tryStartProgressPrepareWithPosition:(int)arg1;
- (void)updatePrepareProgressIfNeed:(int)arg1;
- (BOOL)preferSegmentNoteContent;
- (int)timeOffsetSegment;
- (int)goodHitDuration;
- (int)remoteVoiceNoteUpdateInterval;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 isHit:(BOOL)arg3 timeOffset:(int)arg4 duration:(int)arg5 uniqueId:(id)arg6 taskId:(id)arg7;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)onLiveSEIKTVProgressSyncRecv:(id)arg1 continuous:(BOOL)arg2 stick:(BOOL)arg3 ktvSeiData:(id)arg4 taskId:(id)arg5;
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id)arg2;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)onLiveKTVProgressRefresh:(long long)arg1 currFPS:(long long)arg2 taskId:(id)arg3;
- (id /* block */)startCallback;
- (void)setStartCallback:(id /* block */)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)topInnerLine;
- (void)setTopInnerLine:(id)arg1;
- (id)bottomInnerLine;
- (void)setBottomInnerLine:(id)arg1;
- (id)musicNoteScrollView;
- (void)setMusicNoteScrollView:(id)arg1;
- (id)musicNoteContentView;
- (void)setMusicNoteContentView:(id)arg1;
- (id)goodHitPAGView;
- (void)setGoodHitPAGView:(id)arg1;
- (id)musicNoteDot;
- (void)setMusicNoteDot:(id)arg1;
- (BOOL)isNoteDotAnimating;
- (void)setIsNoteDotAnimating:(BOOL)arg1;
- (float)currNoteHeight;
- (void)setCurrNoteHeight:(float)arg1;
- (float)currNoteHeightPercent;
- (void)setCurrNoteHeightPercent:(float)arg1;
- (float)currNoteValue;
- (void)setCurrNoteValue:(float)arg1;
- (BOOL)currNoteIsHit;
- (void)setCurrNoteIsHit:(BOOL)arg1;
- (double)lastNoteAdjustTime;
- (void)setLastNoteAdjustTime:(double)arg1;
- (id)allMusicNoteList;
- (void)setAllMusicNoteList:(id)arg1;
- (long long)lastLoadedNoteIndex;
- (void)setLastLoadedNoteIndex:(long long)arg1;
- (int)nextNoteBeginTime;
- (void)setNextNoteBeginTime:(int)arg1;
- (int)lastRemoteVoiceNoteUpdateTime;
- (void)setLastRemoteVoiceNoteUpdateTime:(int)arg1;
- (int)firstNoteBeginTime;
- (void)setFirstNoteBeginTime:(int)arg1;
- (BOOL)isNoteHasAppeared;
- (void)setIsNoteHasAppeared:(BOOL)arg1;
- (BOOL)isNoteDotCanAppeared;
- (void)setIsNoteDotCanAppeared:(BOOL)arg1;
- (BOOL)isNoteUpdated;
- (void)setIsNoteUpdated:(BOOL)arg1;
- (BOOL)isNoteHasUpdated;
- (void)setIsNoteHasUpdated:(BOOL)arg1;
- (id)progressPreparingView;
- (void)setProgressPreparingView:(id)arg1;
- (void).cxx_destruct;
@end

