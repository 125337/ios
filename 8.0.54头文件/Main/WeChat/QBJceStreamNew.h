@interface QBJceStreamNew : NSObject
{
    char * _streamBuffer; // +0x8
    int _streamSize; // +0x10
    int _cursor; // +0x14
}
- (id)init;
- (id)data;
- (id)description;
- (char *)streamBuffer;
- (void)setStreamBuffer:(char *)arg1;
- (int)streamSize;
- (void)setStreamSize:(int)arg1;
- (int)cursor;
- (void)setCursor:(int)arg1;
@end

