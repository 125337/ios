@interface MMDictationFinalizedSegment : NSObject
{
    NSString * _rawText; // +0x8
    NSString * _processedText; // +0x10
    unsigned long long _startFrameSeq; // +0x18
    unsigned long long _endFrameSeq; // +0x20
    NSString * _segmentId; // +0x28
    NSArray * _snapshots; // +0x30
}
- (id)rawText;
- (void)setRawText:(id)arg1;
- (id)processedText;
- (void)setProcessedText:(id)arg1;
- (unsigned long long)startFrameSeq;
- (void)setStartFrameSeq:(unsigned long long)arg1;
- (unsigned long long)endFrameSeq;
- (void)setEndFrameSeq:(unsigned long long)arg1;
- (id)segmentId;
- (void)setSegmentId:(id)arg1;
- (id)snapshots;
- (void)setSnapshots:(id)arg1;
- (void).cxx_destruct;
@end
