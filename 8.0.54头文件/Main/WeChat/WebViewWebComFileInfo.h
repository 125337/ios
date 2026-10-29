@interface WebViewWebComFileInfo : NSObject
{
    unsigned int _offset; // +0x8
    unsigned int _size; // +0xc
    NSString * _filePath; // +0x10
}
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)size;
- (void)setSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end

