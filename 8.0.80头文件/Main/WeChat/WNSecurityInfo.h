@interface WNSecurityInfo : NSObject
{
    int _opType; // +0x8
    unsigned int _localId; // +0xc
    NSData * _noteImageData; // +0x10
    WNContentStorage * _storage; // +0x18
    unsigned long long _startIndex; // +0x20
    unsigned long long _endIndex; // +0x28
}
- (id)init;
- (int)opType;
- (void)setOpType:(int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)noteImageData;
- (void)setNoteImageData:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (unsigned long long)startIndex;
- (void)setStartIndex:(unsigned long long)arg1;
- (unsigned long long)endIndex;
- (void)setEndIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
