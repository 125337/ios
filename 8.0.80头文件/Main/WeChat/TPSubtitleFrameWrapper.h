@interface TPSubtitleFrameWrapper : NSObject
{
    BOOL _needUpdate; // +0x8
    TPFrame * _subtitleFrame; // +0x10
}
- (id)init;
- (void)dealloc;
- (BOOL)needUpdate;
- (void)setNeedUpdate:(BOOL)arg1;
- (TPFrame *)subtitleFrame;
- (void)setSubtitleFrame:(TPFrame *)arg1;
@end
