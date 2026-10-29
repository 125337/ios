@interface EAGLOpenVoiceView : UIView <OpenVoiceOpenglesContextDelegate>
{
    BOOL m_acceptNV12; // +0x8
    BOOL m_mirrored; // +0x9
    UIView * m_defaultView; // +0x10
    OpenVoiceOpenglesContext * m_openglesContext; // +0x18
    id <NSObject> targetor; // +0x20
    SEL selector; // +0x28
}
+ (Class)layerClass;
- (BOOL)checkTouchPoint:(CGPoint)arg1 IfInView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)renderView;
- (void)updateViewFrameWithContentSize:(CGSize)arg1;
- (void)whenDidActive;
- (void)whenEnterBackground;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 AcceptNV12:(BOOL)arg2;
- (id)initWithView:(id)arg1 AcceptNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)setupELGS;
- (void)setupELGS:(BOOL)arg1 IsMirrored:(BOOL)arg2;
- (void)restartRender;
- (void)stopRender;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 fitView:(BOOL)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 objectFit:(int)arg4;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage3:(char * *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)dealloc;
- (void)applyRotation:(float)arg1;
- (void)setDegrees:(float)arg1;
- (void)resetMirror:(BOOL)arg1;
- (void)changeFrame:(CGRect)arg1;
- (void)randerDefaultView:(id)arg1;
- (BOOL)isUnmatch;
- (id)m_defaultView;
- (void)setM_defaultView:(id)arg1;
- (id)m_openglesContext;
- (void)setM_openglesContext:(id)arg1;
- (id)targetor;
- (void)setTargetor:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (BOOL)m_acceptNV12;
- (void)setM_acceptNV12:(BOOL)arg1;
- (BOOL)m_mirrored;
- (void)setM_mirrored:(BOOL)arg1;
- (void).cxx_destruct;
@end
