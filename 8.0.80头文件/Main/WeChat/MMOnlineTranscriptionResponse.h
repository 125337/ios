@interface MMOnlineTranscriptionResponse : NSObject
{
    BOOL _isPingResponse; // +0x8
    BOOL _tailWaitTimedOut; // +0x9
    BOOL _hasResult; // +0xa
    BOOL _hasVadInfo; // +0xb
    BOOL _vadIsEnd; // +0xc
    unsigned int _requestSeq; // +0x10
    unsigned int _sequence; // +0x14
    unsigned int _endFlag; // +0x18
    unsigned int _originEndSeq; // +0x1c
    unsigned int _maxPacketSize; // +0x20
    unsigned int _uploadIntervalMs; // +0x24
    NSString * _text; // +0x28
    NSData * _extraData; // +0x30
}
- (unsigned int)requestSeq;
- (void)setRequestSeq:(unsigned int)arg1;
- (BOOL)isPingResponse;
- (void)setIsPingResponse:(BOOL)arg1;
- (BOOL)tailWaitTimedOut;
- (void)setTailWaitTimedOut:(BOOL)arg1;
- (BOOL)hasResult;
- (void)setHasResult:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (unsigned int)endFlag;
- (void)setEndFlag:(unsigned int)arg1;
- (unsigned int)originEndSeq;
- (void)setOriginEndSeq:(unsigned int)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned int)uploadIntervalMs;
- (void)setUploadIntervalMs:(unsigned int)arg1;
- (BOOL)hasVadInfo;
- (void)setHasVadInfo:(BOOL)arg1;
- (BOOL)vadIsEnd;
- (void)setVadIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
