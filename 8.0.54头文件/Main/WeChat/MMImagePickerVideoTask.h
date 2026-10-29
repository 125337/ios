@interface MMImagePickerVideoTask : NSObject
{
    MMAsset * _mmAsset; // +0x8
    AVAsset * _videoAsset; // +0x10
    NSURL * _videoUrl; // +0x18
    unsigned long long _scene; // +0x20
    id /* block */ _completeCallback; // +0x28
}
- (id)mmAsset;
- (void)setMmAsset:(id)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id /* block */)completeCallback;
- (void)setCompleteCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

