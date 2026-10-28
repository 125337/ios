@interface WCVideoSampleBufferRender : WCVideoRender
{
    __CVBuffer * _localImageBuffer; // +0x8
    BOOL isRendered; // +0x10
    BOOL _isMirror; // +0x11
    UIView * _renderView; // +0x18
    AVSampleBufferDisplayLayer * _renderLayer; // +0x20
    NSRecursiveLock * _localBufferLock; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 isMirror:(BOOL)arg2;
- (id)getRenderView;
- (void)changeFrame:(CGRect)arg1;
- (void)setMirror:(BOOL)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
- (BOOL)isRendered;
- (void)setIsRendered:(BOOL)arg1;
- (id)renderView;
- (id)renderLayer;
- (id)localBufferLock;
- (void)setLocalBufferLock:(id)arg1;
- (BOOL)isMirror;
- (void)setIsMirror:(BOOL)arg1;
- (void).cxx_destruct;
@end
