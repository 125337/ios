@interface TBTrafficBlockData : NSObject
{
    int _level; // +0x8
    int _blockId; // +0xc
    unsigned int _timeStamp; // +0x10
    int _dataType; // +0x14
    unsigned int _crc; // +0x18
    struct _mapRect; // +0x20
}
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (int)level;
- (void)setLevel:(int)arg1;
- (int)blockId;
- (void)setBlockId:(int)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (struct)mapRect;
- (void)setMapRect:(struct)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (unsigned int)crc;
- (void)setCrc:(unsigned int)arg1;
@end
