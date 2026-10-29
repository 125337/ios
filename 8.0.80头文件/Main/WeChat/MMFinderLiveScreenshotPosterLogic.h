@interface MMFinderLiveScreenshotPosterLogic : NSObject
{
    BOOL _keyboardVisible; // +0x8
    BOOL _supportGlobalScreenshot; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveScreenshotPosterView * _currentPosterView; // +0x18
    unsigned long long _screenshotRequestUnixEpochTime; // +0x20
    unsigned long long _screenshotStatus; // +0x28
    id /* block */ _screenShotProcessCallback; // +0x30
    UIImage * _screenshot; // +0x38
    UIImage * _posterScreenshot; // +0x40
    NSMutableArray * _associatedImages; // +0x48
    NSMutableArray * _primaryImageMaskingDescriptors; // +0x50
    NSMutableDictionary * _posterImageConfigurations; // +0x58
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (id)images;
- (BOOL)screenshotRequested;
- (BOOL)isScreenshotPosterAvailable;
- (void)commitPixelBuffer:(__CVBuffer *)arg1;
- (void)addAssociatedImage:(id)arg1;
- (void)addPrimaryImageMaskingDescriptor:(id)arg1;
- (void)setPosterImageConfigurationValue:(id)arg1 withKey:(id)arg2;
- (void)onFinishScreenShot;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)makeLiveScreenshotPoster;
- (void)invalidateScreenshot;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentPosterView;
- (void)setCurrentPosterView:(id)arg1;
- (unsigned long long)screenshotRequestUnixEpochTime;
- (void)setScreenshotRequestUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)screenshotStatus;
- (void)setScreenshotStatus:(unsigned long long)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (BOOL)supportGlobalScreenshot;
- (void)setSupportGlobalScreenshot:(BOOL)arg1;
- (id /* block */)screenShotProcessCallback;
- (void)setScreenShotProcessCallback:(id /* block */)arg1;
- (id)screenshot;
- (void)setScreenshot:(id)arg1;
- (id)posterScreenshot;
- (void)setPosterScreenshot:(id)arg1;
- (id)associatedImages;
- (void)setAssociatedImages:(id)arg1;
- (id)primaryImageMaskingDescriptors;
- (void)setPrimaryImageMaskingDescriptors:(id)arg1;
- (id)posterImageConfigurations;
- (void)setPosterImageConfigurations:(id)arg1;
- (void).cxx_destruct;
@end
