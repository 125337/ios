@interface FlutterStandardReader : NSObject
{
    NSData * _data; // +0x8
    _NSRange _range; // +0x10
}
- (id)initWithData:(id)arg1;
- (BOOL)hasMore;
- (void)readBytes:(void *)arg1 length:(unsigned long long)arg2;
- (unsigned char)readByte;
- (unsigned int)readSize;
- (id)readData:(unsigned long long)arg1;
- (id)readUTF8;
- (void)readAlignment:(unsigned char)arg1;
- (id)readValue;
- (id)readValueOfType:(unsigned char)arg1;
- (void).cxx_destruct;
@end
