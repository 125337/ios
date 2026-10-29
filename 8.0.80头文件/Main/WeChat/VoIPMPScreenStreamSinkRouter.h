@interface VoIPMPScreenStreamSinkRouter : NSObject <VoIPMPScreenStreamSink>
{
    NSHashTable * _sinks; // +0x8
}
- (id)init;
- (void)addSink:(id)arg1;
- (void)removeSink:(id)arg1;
- (void)removeAllSinks;
- (unsigned long long)sinkCount;
- (void)onScreenStreamPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (id)sinks;
- (void)setSinks:(id)arg1;
- (void).cxx_destruct;
@end
