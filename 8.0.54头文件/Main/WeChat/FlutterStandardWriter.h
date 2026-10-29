@interface FlutterStandardWriter : NSObject
{
    NSMutableData * _data; // +0x8
}
- (id)initWithData:(id)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)writeData:(id)arg1;
- (void)writeSize:(unsigned int)arg1;
- (void)writeAlignment:(unsigned char)arg1;
- (void)writeUTF8:(id)arg1;
- (void)writeValue:(id)arg1;
- (void).cxx_destruct;
@end

