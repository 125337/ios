@interface VOIPVideoRender : NSObject
{
    EAGLView_v2 * _glview; // +0x8
}
- (id)initWithView:(id)arg1 Layer:(id)arg2;
- (id)initWithView:(id)arg1 UseNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3 Layer:(id)arg4;
- (void)setupMirror:(BOOL)arg1;
- (void)dealloc;
- (void)transformBackImage;
- (void)setSharpenFilter:(int)arg1 sharpenMode:(long long)arg2 enable1080pSharpen:(int)arg3;
- (void)transformFrontImage;
- (void)restartRender;
- (void)renderImage:(char *)arg1 pixelBuffer:(__CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)renderImage2:(char *)arg1 pixelBuffer:(__CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)renderImage3:(char * *)arg1 pixelBuffer:(__CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)changeFrame:(CGRect)arg1;
- (void)randerDefaultView:(id)arg1;
- (void)setDegrees:(float)arg1;
- (id)getView;
- (id)snapshot;
- (id)glview;
- (void)setGlview:(id)arg1;
- (void).cxx_destruct;
@end

