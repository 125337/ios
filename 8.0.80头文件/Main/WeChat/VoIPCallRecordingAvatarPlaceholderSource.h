@interface VoIPCallRecordingAvatarPlaceholderSource : NSObject
+ (void)generatePlaceholderWithContact:(id)arg1 style:(long long)arg2 targetSize:(CGSize)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;
+ (__CVBuffer *)p_renderPlaceholderPixelBufferOnMainWithContact:(id)arg1 style:(long long)arg2 targetSize:(CGSize)arg3;
+ (__CVBuffer *)p_bgraPixelBufferFromImage:(id)arg1 size:(CGSize)arg2;
@end
