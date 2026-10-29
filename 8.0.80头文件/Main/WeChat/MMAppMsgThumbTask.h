@interface MMAppMsgThumbTask : NSObject
{
    BOOL _isCancelled; // +0x8
    id /* block */ _completion; // +0x10
    CMessageWrap * _message; // +0x18
    ThumbImageUploader * _thumbUploader; // +0x20
}
- (id)initWithMessage:(id)arg1;
- (void)uploadThumb:(id /* block */)arg1;
- (void)generateAndUploadThumb:(id /* block */)arg1;
- (void)startUpload;
- (void)cancel;
- (BOOL)canGenerateThumb;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)thumbUploader;
- (void)setThumbUploader:(id)arg1;
- (void).cxx_destruct;
@end
