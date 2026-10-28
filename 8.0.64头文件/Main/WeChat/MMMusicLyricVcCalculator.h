@interface MMMusicLyricVcCalculator : NSObject
{
    MMMusicLyricResolver * _lyricResolver; // +0x8
    NSMutableArray * _lyricsList; // +0x10
    NSMutableArray * _timeList; // +0x18
    MMTimer * _timer; // +0x20
    int _currentLyricIndex; // +0x28
    double _offset; // +0x30
    id <MMMusicLyricVcCalculatorDelegate> _delegate; // +0x38
}
- (id)initWithLyricStr:(id)arg1;
- (void)startScroll;
- (void)stopScroll;
- (void)scroll;
- (void)updateCurIndex;
- (void)stopTimer;
- (BOOL)isValidLyric;
- (id)arrLyrics;
- (id)arrTimes;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
