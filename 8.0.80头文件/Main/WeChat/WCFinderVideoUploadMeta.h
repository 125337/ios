@interface WCFinderVideoUploadMeta : NSObject
{
    NSString * _videoPath; // +0x8
    NSString * _thumbPath; // +0x10
    NSString * _videoInfo; // +0x18
    NSString * _clientID; // +0x20
    NSString * _requestHeader; // +0x28
    id /* block */ _complecteBlock; // +0x30
    id /* block */ _progressBlock; // +0x38
    WCFinderUploadMediaTask * _mediaTask; // +0x40
}
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (id /* block */)complecteBlock;
- (void)setComplecteBlock:(id /* block */)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id)mediaTask;
- (void)setMediaTask:(id)arg1;
- (void).cxx_destruct;
@end
