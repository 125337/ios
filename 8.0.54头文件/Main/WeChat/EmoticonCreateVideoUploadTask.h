@interface EmoticonCreateVideoUploadTask : EmoticonCreateUploadTask
{
    id /* block */ _convertStartBlock; // +0x28
    id /* block */ _convertFailBlock; // +0x30
    id /* block */ _convertSucBlock; // +0x38
    NSString * _videoPath; // +0x40
    EmoticonVideoConverter * _videoConverter; // +0x48
}
- (id)init;
- (id)initWithVideoPath:(id)arg1;
- (void)startUpload;
- (void)convertVideoToWxam:(id)arg1;
- (id)videoConverter;
- (id /* block */)convertStartBlock;
- (void)setConvertStartBlock:(id /* block */)arg1;
- (id /* block */)convertFailBlock;
- (void)setConvertFailBlock:(id /* block */)arg1;
- (id /* block */)convertSucBlock;
- (void)setConvertSucBlock:(id /* block */)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (void)setVideoConverter:(id)arg1;
- (void).cxx_destruct;
@end

