@interface WNSecurityInfo : NSObject
{
    int _opType; // +0x8
    unsigned int _localId; // +0xc
    NSData * _noteImageData; // +0x10
    WNContentStorage * _storage; // +0x18
}
- (int)opType;
- (void)setOpType:(int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)noteImageData;
- (void)setNoteImageData:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (void).cxx_destruct;
@end
