@interface WADefaultPosterViewModel : NSObject
{
    UIImage * _originalScreenshot; // +0x8
    WAScreenshotContextInfo * _screenshotContextInfo; // +0x10
    WAContact * _contact; // +0x18
    UIImage * _weappSunCodeImage; // +0x20
}
- (BOOL)canGeneratePoster;
- (id)originalScreenshot;
- (void)setOriginalScreenshot:(id)arg1;
- (id)screenshotContextInfo;
- (void)setScreenshotContextInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)weappSunCodeImage;
- (void)setWeappSunCodeImage:(id)arg1;
- (void).cxx_destruct;
@end
