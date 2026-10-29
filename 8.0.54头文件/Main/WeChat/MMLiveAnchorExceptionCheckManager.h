@interface MMLiveAnchorExceptionCheckManager : NSObject
{
    BOOL _showingSilentTip; // +0x8
    BOOL _showingFeverTip; // +0x9
    BOOL _showingSoundQualityToBadTip; // +0xa
    int _count; // +0xc
    unsigned int _remainTime; // +0x10
    id <MMLiveAnchorExceptionCheckDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSMutableArray * _testArray; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)dealloc;
- (void)onEnterBackground;
- (id)liveTask;
- (void)checkAllException:(unsigned int)arg1;
- (void)handleCancelLiveSilentTip;
- (void)handleLiveSilent;
- (BOOL)checkLiveSilent;
- (BOOL)isLiveDataAllSilent:(id)arg1;
- (void)handleCancelDeviceFeverTip;
- (void)handleDeviceFever;
- (BOOL)checkDeviceFever:(int)arg1;
- (void)handleCancelSoundQualityToBadTip;
- (void)handleSoundQualityToBad;
- (BOOL)checkSoundQualityToBad;
- (BOOL)isHasSoundQualityBadData:(id)arg1;
- (void)handleIntermittently;
- (BOOL)checkIntermittently;
- (BOOL)isHasSoundIntermittentlyData;
- (void)showWeakNetTipViewWithType:(unsigned long long)arg1 isShow:(BOOL)arg2;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)arg1;
- (void)setCount:(int)arg1;
- (void)reStartAudio;
- (id)getDataWithCount:(int)arg1;
- (void)updateCurrentWillShowType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (int)count;
- (id)testArray;
- (void)setTestArray:(id)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (BOOL)showingSilentTip;
- (void)setShowingSilentTip:(BOOL)arg1;
- (BOOL)showingFeverTip;
- (void)setShowingFeverTip:(BOOL)arg1;
- (BOOL)showingSoundQualityToBadTip;
- (void)setShowingSoundQualityToBadTip:(BOOL)arg1;
- (void).cxx_destruct;
@end

