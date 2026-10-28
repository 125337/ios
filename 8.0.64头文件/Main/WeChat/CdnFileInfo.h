@interface CdnFileInfo : NSObject
{
    int _fileType; // +0x8
    int _format; // +0xc
    int _compress; // +0x10
    unsigned long long _size; // +0x18
    NSString * _md5; // +0x20
    NSString * _path; // +0x28
    NSString * _buffer; // +0x30
}
- (id)desc;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (int)format;
- (void)setFormat:(int)arg1;
- (int)compress;
- (void)setCompress:(int)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end
