@interface OpenVoiceVideoRender : NSObject
{
    EAGLOpenVoiceView * _glview; // +0x8
}
- (id)initWithView:(id)arg1 Layer:(id)arg2;
- (id)initWithView:(id)arg1 UseNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3 Layer:(id)arg4;
- (void)dealloc;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)transformBackImage;
- (void)transformFrontImage;
- (void)restartRender;
- (void)stopRender;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 fitView:(BOOL)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 objectFit:(int)arg4;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage3:(char * *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)changeFrame:(CGRect)arg1;
- (void)randerDefaultView:(id)arg1;
- (void)setDegrees:(float)arg1;
- (id)getGLView;
- (id)getView;
- (BOOL)isUnmatch;
- (id)glview;
- (void)setGlview:(id)arg1;
- (void).cxx_destruct;
@end
