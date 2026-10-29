@interface MMTranscriptionChannelResult : NSObject
{
    BOOL _isFinal; // +0x8
    unsigned long long _source; // +0x10
    NSString * _text; // +0x18
    unsigned long long _startFrameSeq; // +0x20
    unsigned long long _endFrameSeq; // +0x28
    NSString * _internalSegmentId; // +0x30
    NSData * _extraData; // +0x38
}
- (id)init;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned long long)startFrameSeq;
- (void)setStartFrameSeq:(unsigned long long)arg1;
- (unsigned long long)endFrameSeq;
- (void)setEndFrameSeq:(unsigned long long)arg1;
- (id)internalSegmentId;
- (void)setInternalSegmentId:(id)arg1;
- (BOOL)isFinal;
- (void)setIsFinal:(BOOL)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
