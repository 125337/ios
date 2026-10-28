@interface WADynamicBackgroundGLBaseViewController : GLKViewController
{
    float _elapsedTime; // +0x8
    WADynamicBackgroundGLContext * _glContext; // +0x10
    EAGLContext * _context; // +0x18
}
- (void)viewDidLoad;
- (void)setupContext;
- (void)setupGLContext;
- (id)getGLContext;
- (void)update;
- (void)glkView:(id)arg1 drawInRect:(CGRect)arg2;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (float)elapsedTime;
- (void)setElapsedTime:(float)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
