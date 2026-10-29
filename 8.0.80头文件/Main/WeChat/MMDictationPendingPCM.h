@interface MMDictationPendingPCM : NSObject
{
    NSData * _pcm; // +0x8
    unsigned long long _endFrameSeq; // +0x10
    NSString * _segmentId; // +0x18
}
- (id)pcm;
- (void)setPcm:(id)arg1;
- (unsigned long long)endFrameSeq;
- (void)setEndFrameSeq:(unsigned long long)arg1;
- (id)segmentId;
- (void)setSegmentId:(id)arg1;
- (void).cxx_destruct;
@end
