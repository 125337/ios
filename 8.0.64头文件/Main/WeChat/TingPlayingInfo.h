@interface TingPlayingInfo : NSObject
{
    TingItem * _tingItem; // +0x8
    TingAudioTraceLog * _traceLog; // +0x10
}
- (id)initWithTingItem:(id)arg1;
- (id)description;
- (id)traceLog;
- (double)playedTime;
- (void)clearTraceLog;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (void)setTraceLog:(id)arg1;
- (void).cxx_destruct;
@end
