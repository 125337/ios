@interface WCFinderImageUploadMeta : NSObject
{
    NSString * _imagePath; // +0x8
    id /* block */ _completion; // +0x10
    WCFinderUploadMediaTask * _mediaTask; // +0x18
    unsigned long long _cdnHeaderType; // +0x20
}
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)mediaTask;
- (void)setMediaTask:(id)arg1;
- (unsigned long long)cdnHeaderType;
- (void)setCdnHeaderType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
