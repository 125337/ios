@interface QBJceInputStreamNew : QBJceStreamNew
{
    int _headType; // +0x18
    int _headTag; // +0x1c
    int _stringLength; // +0x20
    NSData * _dataHolders; // +0x28
}
+ (id)streamWithData:(id)arg1;
- (id)init;
- (id)data;
- (BOOL)peakHead;
- (BOOL)readHead;
- (char)readInt1;
- (short)readInt2;
- (int)readInt4;
- (long long)readInt8;
- (long long)readInt:(int)arg1;
- (float)readFloat:(int)arg1;
- (double)readDouble:(int)arg1;
- (float)readFloat;
- (double)readDouble;
- (char *)readBytes:(unsigned int)arg1;
- (void)skip:(unsigned int)arg1;
- (id)readDataWithSize:(int)arg1;
- (id)readNumber:(int)arg1 required:(BOOL)arg2;
- (id)utf8Decode:(char *)arg1 length:(int)arg2;
- (id)readString:(int)arg1 required:(BOOL)arg2;
- (id)readData:(int)arg1 required:(BOOL)arg2;
- (id)readObject:(int)arg1 required:(BOOL)arg2 description:(Class)arg3;
- (id)readArray:(int)arg1 required:(BOOL)arg2 description:(id)arg3;
- (id)readDictionary:(int)arg1 required:(BOOL)arg2 description:(id)arg3;
- (id)readUTF8String:(int)arg1 required:(BOOL)arg2 description:(id)arg3;
- (id)readAnything:(int)arg1 required:(BOOL)arg2 description:(id)arg3;
- (void).cxx_destruct;
- (int)headType;
- (void)setHeadType:(int)arg1;
- (int)headTag;
- (id)dataHolders;
- (void)setDataHolders:(id)arg1;
- (int)stringLength;
- (void)setStringLength:(int)arg1;
@end

