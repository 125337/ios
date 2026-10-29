@interface MMDictationOfflineSnapshot : NSObject
{
    unsigned long long _frameSeq; // +0x8
    NSString * _text; // +0x10
    NSString * _segmentId; // +0x18
}
- (unsigned long long)frameSeq;
- (void)setFrameSeq:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)segmentId;
- (void)setSegmentId:(id)arg1;
- (void).cxx_destruct;
@end
