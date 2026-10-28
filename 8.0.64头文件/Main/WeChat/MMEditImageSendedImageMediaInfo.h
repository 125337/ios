@interface MMEditImageSendedImageMediaInfo : MMEditImageMediaInfo
{
    unsigned long long _jpgFileSize; // +0x28
}
- (id)getDict;
- (unsigned long long)jpgFileSize;
- (void)setJpgFileSize:(unsigned long long)arg1;
@end
