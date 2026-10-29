@interface WCMultiShareRecordExpandMediaNameContext : NSObject
{
    BOOL _compactSpacing; // +0x8
    unsigned long long _imageIndex; // +0x10
    unsigned long long _videoIndex; // +0x18
    NSMutableDictionary * _fileNameCountMap; // +0x20
}
- (id)init;
- (unsigned long long)consumeImageIndex;
- (unsigned long long)consumeVideoIndex;
- (void)resetMediaIndex;
- (void)resetFileNameCountMap;
- (unsigned long long)imageIndex;
- (void)setImageIndex:(unsigned long long)arg1;
- (unsigned long long)videoIndex;
- (void)setVideoIndex:(unsigned long long)arg1;
- (BOOL)compactSpacing;
- (void)setCompactSpacing:(BOOL)arg1;
- (id)fileNameCountMap;
- (void)setFileNameCountMap:(id)arg1;
- (void).cxx_destruct;
@end
