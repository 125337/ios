@interface WCFinderPostMediaLivePhotoVideoModel : NSObject
{
    NSString * _path; // +0x8
    unsigned long long _durationMs; // +0x10
    unsigned long long _fileSize; // +0x18
    CGSize _size; // +0x20
}
- (id)initWithLivePhotoVideoPath:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (unsigned long long)durationMs;
- (void)setDurationMs:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
