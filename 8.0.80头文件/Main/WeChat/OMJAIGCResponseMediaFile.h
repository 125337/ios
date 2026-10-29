@interface OMJAIGCResponseMediaFile : NSObject
{
    OMJAIGCMediaFile * _mediaFile; // +0x8
    CGRect _frameRect; // +0x10
}
- (id)initWithMediaFile:(id)arg1 frameRect:(CGRect)arg2;
- (id)mediaFile;
- (void)setMediaFile:(id)arg1;
- (CGRect)frameRect;
- (void)setFrameRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
