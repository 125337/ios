@interface TXCAsyncReadPacket : NSObject
{
    NSMutableData * buffer; // +0x8
    unsigned long long startOffset; // +0x10
    unsigned long long bytesDone; // +0x18
    unsigned long long maxLength; // +0x20
    double timeout; // +0x28
    unsigned long long readLength; // +0x30
    NSData * term; // +0x38
    BOOL bufferOwner; // +0x40
    unsigned long long originalBufferLength; // +0x48
    long long tag; // +0x50
}
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1;
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(BOOL *)arg2;
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1;
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(BOOL *)arg2;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL *)arg2;
- (long long)searchForTermAfterPreBuffering:(long long)arg1;
- (void).cxx_destruct;
@end
