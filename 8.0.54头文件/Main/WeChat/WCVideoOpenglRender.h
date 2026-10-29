@interface WCVideoOpenglRender : WCVideoRender
{
    BOOL _m_frontCamera; // +0x8
    BOOL _hideBlurWhenRenderSizeChanged; // +0x9
    BOOL _shouldFlipFrontBackView; // +0xa
    BOOL _freezeRender; // +0xb
    BOOL _checkScreenDataWhenHideBlur; // +0xc
    unsigned int _m_frontFpsCount; // +0x10
    unsigned int _m_backFpsCount; // +0x14
    unsigned int _m_videoSizeW; // +0x18
    unsigned int _m_videoMemberId; // +0x1c
    unsigned int _m_videoCodecType; // +0x20
    VoipOpenglesContext * m_backOpenglesContext; // +0x28
    VoipOpenglesContext * m_frontOpenglesContext; // +0x30
    OpenglRenderView * m_backRenderView; // +0x38
    OpenglRenderView * m_frontRenderView; // +0x40
    UIView * m_renderView; // +0x48
    MMTimer * _m_fpsTimer; // +0x50
    UIView * _blurView; // +0x58
    UILabel * _tipLabel; // +0x60
    double _renderImageWidth; // +0x68
    double _renderImageHeight; // +0x70
    UIImageView * _loadingImagesView; // +0x78
    NSMutableArray * _loadingImagesList; // +0x80
    MMTimer * _loadingImagesTimer; // +0x88
    unsigned long long _loadingImagesTimerCount; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)cameraFrontMode:(BOOL)arg1;
- (void)updateViewWithFrontCamera;
- (float)defaultFrontDegrees;
- (float)frontDegrees;
- (void)setFrontDegrees:(float)arg1;
- (float)defaultBackDegrees;
- (float)backDegrees;
- (void)setBackDegrees:(float)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
- (void)changeFrame:(CGRect)arg1;
- (id)getRenderView;
- (void)whenBecomeActive;
- (void)setupELGS;
- (void)dealloc;
- (void)showBlurUntilRenderSizeChangeForChangingToSmallSizeAnimation;
- (void)showBlurUntilRenderSizeChangeForChangingToBigScreenDataAnimation;
- (void)showBlurWithTip:(id)arg1;
- (void)hideBlur;
- (void)checkLoadingAndHideBlur;
- (void)checkAndShowLoading;
- (void)loadingTimerCheck;
- (void)hideLoading;
- (void)checkAndHideBlur;
- (void)setFreezeRender:(BOOL)arg1;
- (BOOL)isTouchInsideViewWithPoint:(CGPoint)arg1;
- (id)m_backOpenglesContext;
- (void)setM_backOpenglesContext:(id)arg1;
- (id)m_frontOpenglesContext;
- (void)setM_frontOpenglesContext:(id)arg1;
- (id)m_backRenderView;
- (void)setM_backRenderView:(id)arg1;
- (id)m_frontRenderView;
- (void)setM_frontRenderView:(id)arg1;
- (id)m_renderView;
- (void)setM_renderView:(id)arg1;
- (id)m_fpsTimer;
- (void)setM_fpsTimer:(id)arg1;
- (unsigned int)m_frontFpsCount;
- (void)setM_frontFpsCount:(unsigned int)arg1;
- (unsigned int)m_backFpsCount;
- (void)setM_backFpsCount:(unsigned int)arg1;
- (unsigned int)m_videoSizeW;
- (void)setM_videoSizeW:(unsigned int)arg1;
- (unsigned int)m_videoMemberId;
- (void)setM_videoMemberId:(unsigned int)arg1;
- (unsigned int)m_videoCodecType;
- (void)setM_videoCodecType:(unsigned int)arg1;
- (BOOL)m_frontCamera;
- (void)setM_frontCamera:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (BOOL)hideBlurWhenRenderSizeChanged;
- (void)setHideBlurWhenRenderSizeChanged:(BOOL)arg1;
- (double)renderImageWidth;
- (void)setRenderImageWidth:(double)arg1;
- (double)renderImageHeight;
- (void)setRenderImageHeight:(double)arg1;
- (BOOL)shouldFlipFrontBackView;
- (void)setShouldFlipFrontBackView:(BOOL)arg1;
- (BOOL)freezeRender;
- (BOOL)checkScreenDataWhenHideBlur;
- (void)setCheckScreenDataWhenHideBlur:(BOOL)arg1;
- (id)loadingImagesView;
- (void)setLoadingImagesView:(id)arg1;
- (id)loadingImagesList;
- (void)setLoadingImagesList:(id)arg1;
- (id)loadingImagesTimer;
- (void)setLoadingImagesTimer:(id)arg1;
- (unsigned long long)loadingImagesTimerCount;
- (void)setLoadingImagesTimerCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

