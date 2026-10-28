@interface MMFluencyScoreMgr : NSObject
{
    BOOL _running; // +0x8
    BOOL _enteredBgWhenRunning; // +0x9
    BOOL _scoreLabelExpanded; // +0xa
    BOOL _hitRecord; // +0xb
    BOOL _hitShowFloat; // +0xc
    BOOL _hitGenCallTrace; // +0xd
    BOOL _hitFluencyOptForbidAll; // +0xe
    float _score; // +0x10
    int _miss0FrameCount; // +0x14
    int _miss1FrameCount; // +0x18
    int _miss2FrameCount; // +0x1c
    int _miss3FrameCount; // +0x20
    int _miss4FrameCount; // +0x24
    int _miss5OrMoreFrameCount; // +0x28
    float _smoothRate; // +0x2c
    float _freezeRate; // +0x30
    int _callTraceMaxDepth; // +0x34
    int _callTraceMinCost; // +0x38
    unsigned long long _curAllSwitches; // +0x40
    long long _runningOpType; // +0x48
    id <MMFluencyScoreMgrDelegate> _runningIDDelegate; // +0x50
    double _runningBeginTime; // +0x58
    UIScrollView * _runningScrollView; // +0x60
    double _beginCallTreeTime; // +0x68
    double _endCallTreeTime; // +0x70
    NSTimer * _timer; // +0x78
    CADisplayLink * _displayLink; // +0x80
    NSMutableArray * _frameDurations; // +0x88
    NSMutableArray * _frameStartTimes; // +0x90
    double _lastTimeInterval; // +0x98
    UILabel * _scoreLabel; // +0xa0
    double _startTraceTime; // +0xa8
    double _stopTraceTime; // +0xb0
    NSArray * _ocMethodCosts; // +0xb8
    NSArray * _runLoopCosts; // +0xc0
    NSMutableArray * _scoreRecords; // +0xc8
    CGPoint _scrollViewBeginContentOffset; // +0xd0
    CGPoint _scrollViewBeginVelocity; // +0xe0
    CGSize _scrollViewBeginContentSize; // +0xf0
}
+ (id)shared;
- (void)startForScroll:(id)arg1 scrollView:(id)arg2;
- (void)startForOpType:(long long)arg1;
- (void)stopForScroll;
- (void)stopForScroll:(id)arg1 scrollView:(id)arg2;
- (void)reportFluencyScore;
- (void)uploadCallTreeIfNeeded;
- (unsigned long long)fluencyScoreScene;
- (id)fluencyScoreID;
- (id)getExtStr;
- (void)calculateScore;
- (double)calculateDuration:(long long)arg1;
- (void)startDisplayLinkIfNeeded;
- (void)once:(id)arg1;
- (BOOL)scoreLabelExpanded;
- (id)scoreLabel;
- (void)tap:(id)arg1;
- (void)swip:(id)arg1;
- (void)foldScoreLabel;
- (void)expandScoreLabel;
- (double)getExpandX;
- (double)getFoldX;
- (void)removeScoreLabel;
- (void)showScoreTip;
- (void)changeScoreLabelAlpha;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (id)init;
- (void)checkHitStatus;
- (void)configForbidSwitchStates;
- (unsigned long long)curAllSwitches;
- (void)setCurAllSwitches:(unsigned long long)arg1;
- (BOOL)isRunning;
- (void)setRunning:(BOOL)arg1;
- (long long)runningOpType;
- (void)setRunningOpType:(long long)arg1;
- (id)runningIDDelegate;
- (void)setRunningIDDelegate:(id)arg1;
- (double)runningBeginTime;
- (void)setRunningBeginTime:(double)arg1;
- (id)runningScrollView;
- (void)setRunningScrollView:(id)arg1;
- (CGPoint)scrollViewBeginContentOffset;
- (void)setScrollViewBeginContentOffset:(CGPoint)arg1;
- (CGPoint)scrollViewBeginVelocity;
- (void)setScrollViewBeginVelocity:(CGPoint)arg1;
- (CGSize)scrollViewBeginContentSize;
- (void)setScrollViewBeginContentSize:(CGSize)arg1;
- (double)beginCallTreeTime;
- (void)setBeginCallTreeTime:(double)arg1;
- (double)endCallTreeTime;
- (void)setEndCallTreeTime:(double)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (int)miss0FrameCount;
- (void)setMiss0FrameCount:(int)arg1;
- (int)miss1FrameCount;
- (void)setMiss1FrameCount:(int)arg1;
- (int)miss2FrameCount;
- (void)setMiss2FrameCount:(int)arg1;
- (int)miss3FrameCount;
- (void)setMiss3FrameCount:(int)arg1;
- (int)miss4FrameCount;
- (void)setMiss4FrameCount:(int)arg1;
- (int)miss5OrMoreFrameCount;
- (void)setMiss5OrMoreFrameCount:(int)arg1;
- (float)smoothRate;
- (void)setSmoothRate:(float)arg1;
- (float)freezeRate;
- (void)setFreezeRate:(float)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isEnteredBgWhenRunning;
- (void)setEnteredBgWhenRunning:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)frameDurations;
- (void)setFrameDurations:(id)arg1;
- (id)frameStartTimes;
- (void)setFrameStartTimes:(id)arg1;
- (double)lastTimeInterval;
- (void)setLastTimeInterval:(double)arg1;
- (void)setScoreLabel:(id)arg1;
- (void)setScoreLabelExpanded:(BOOL)arg1;
- (BOOL)hitRecord;
- (void)setHitRecord:(BOOL)arg1;
- (BOOL)hitShowFloat;
- (void)setHitShowFloat:(BOOL)arg1;
- (BOOL)hitGenCallTrace;
- (void)setHitGenCallTrace:(BOOL)arg1;
- (BOOL)hitFluencyOptForbidAll;
- (void)setHitFluencyOptForbidAll:(BOOL)arg1;
- (double)startTraceTime;
- (void)setStartTraceTime:(double)arg1;
- (double)stopTraceTime;
- (void)setStopTraceTime:(double)arg1;
- (id)ocMethodCosts;
- (void)setOcMethodCosts:(id)arg1;
- (id)runLoopCosts;
- (void)setRunLoopCosts:(id)arg1;
- (id)scoreRecords;
- (void)setScoreRecords:(id)arg1;
- (int)callTraceMaxDepth;
- (void)setCallTraceMaxDepth:(int)arg1;
- (int)callTraceMinCost;
- (void)setCallTraceMinCost:(int)arg1;
- (void).cxx_destruct;
@end
