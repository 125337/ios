@interface WCTimelineFPSMonitor : NSObject
{
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _fpsRecords; // +0x8
    BOOL _canShowFPSLabel; // +0x30
    BOOL _canReportFPS_IDKey1408_MMData20222; // +0x31
    BOOL _canReportFPS_MMData29222; // +0x32
    BOOL _canRecordFPS; // +0x33
    unsigned int _avgFps; // +0x34
    CADisplayLink * _link; // +0x38
    unsigned long long _count; // +0x40
    double _lastTime; // +0x48
    double _interval; // +0x50
    NSMutableDictionary * _tickObservers; // +0x58
}
- (id)initWithInterval:(double)arg1;
- (id)init;
- (void)dealloc;
- (void)tick:(id)arg1;
- (void)updateFpsIndicators:(float)arg1;
- (void)start;
- (void)stop;
- (void)addObserver:(id)arg1;
- (void)doReport;
- (void)doReportFPS_IDKey1408_MMData20222;
- (id)generateFPSReportString_MMData20222;
- (void)doReportFPS_MMData29222;
- (id)generateFPSReportString_MMData29222;
- (BOOL)canShowFPSLabel;
- (void)setCanShowFPSLabel:(BOOL)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (double)lastTime;
- (void)setLastTime:(double)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id)tickObservers;
- (void)setTickObservers:(id)arg1;
- (unsigned int)avgFps;
- (void)setAvgFps:(unsigned int)arg1;
- (BOOL)canReportFPS_IDKey1408_MMData20222;
- (void)setCanReportFPS_IDKey1408_MMData20222:(BOOL)arg1;
- (BOOL)canReportFPS_MMData29222;
- (void)setCanReportFPS_MMData29222:(BOOL)arg1;
- (BOOL)canRecordFPS;
- (void)setCanRecordFPS:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
