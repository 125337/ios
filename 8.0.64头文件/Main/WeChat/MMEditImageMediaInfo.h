@interface MMEditImageMediaInfo : NSObject
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    unsigned int _duration; // +0x10
    unsigned long long _fileSize; // +0x18
    NSString * _format; // +0x20
}
- (id)getDict;
- (id)toJson;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end
