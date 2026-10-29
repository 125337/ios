@interface TPSeekRecord : NSObject
{
    BOOL _isSeeking; // +0x8
    unsigned long long _lastEvent; // +0x10
    long long _seekBufferedCount; // +0x18
    NSMutableArray * _seekItemArray; // +0x20
}
- (unsigned long long)lastEvent;
- (void)setLastEvent:(unsigned long long)arg1;
- (long long)seekBufferedCount;
- (void)setSeekBufferedCount:(long long)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (id)seekItemArray;
- (void)setSeekItemArray:(id)arg1;
- (void).cxx_destruct;
@end
