@interface WCFinderDynamicIconGenerateDynamicIconTask : WCFinderDynamicIconFetchTask
{
    WCFinderDynamicIconFetchTask * _darkIconTask; // +0x20
    WCFinderDynamicIconFetchTask * _lightIconTask; // +0x28
    UIImage * _lightImage; // +0x30
    UIImage * _darkImage; // +0x38
}
+ (id)taskWithDarkTask:(id)arg1 lightTask:(id)arg2;
- (void)_onLightImageFinish:(id)arg1;
- (void)_onDarkImageFinish:(id)arg1;
- (void)generageDynamicIcon;
- (id)darkIconTask;
- (void)setDarkIconTask:(id)arg1;
- (id)lightIconTask;
- (void)setLightIconTask:(id)arg1;
- (id)lightImage;
- (void)setLightImage:(id)arg1;
- (id)darkImage;
- (void)setDarkImage:(id)arg1;
- (void).cxx_destruct;
@end

