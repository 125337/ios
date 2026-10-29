@interface NewLifeImageCdnDownloadParameter : NSObject
{
    BOOL _isThumb; // +0x8
    NSString * _mediaId; // +0x10
    NSString * _mediaURL; // +0x18
    NSString * _savePath; // +0x20
    long long _maxConcurrentCount; // +0x28
}
- (id)init;
- (BOOL)isValid;
- (id)description;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)mediaURL;
- (void)setMediaURL:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (long long)maxConcurrentCount;
- (void)setMaxConcurrentCount:(long long)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (void).cxx_destruct;
@end

