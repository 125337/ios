@interface MMFinderLiveScreenshotPosterLogic : NSObject
{
    BOOL _keyboardVisible; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _screenshotRequestUnixEpochTime; // +0x18
    unsigned long long _screenshotStatus; // +0x20
    UIImage * _screenshot; // +0x28
    NSMutableArray * _associatedImages; // +0x30
    NSMutableArray * _primaryImageMaskingDescriptors; // +0x38
    NSMutableDictionary * _posterImageConfigurations; // +0x40
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
- (void)didTakeSnapshot:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)invalidateScreenshot;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)screenshotRequestUnixEpochTime;
- (void)setScreenshotRequestUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)screenshotStatus;
- (void)setScreenshotStatus:(unsigned long long)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (id)screenshot;
- (void)setScreenshot:(id)arg1;
- (id)associatedImages;
- (void)setAssociatedImages:(id)arg1;
- (id)primaryImageMaskingDescriptors;
- (void)setPrimaryImageMaskingDescriptors:(id)arg1;
- (id)posterImageConfigurations;
- (void)setPosterImageConfigurations:(id)arg1;
- (void).cxx_destruct;
@end
