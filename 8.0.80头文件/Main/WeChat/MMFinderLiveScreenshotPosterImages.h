@interface MMFinderLiveScreenshotPosterImages : NSObject
{
    UIImage * _screenshot; // +0x8
    NSArray * _associatedImages; // +0x10
    NSArray * _primaryImageMaskingDescriptors; // +0x18
    NSDictionary * _posterImageConfigurations; // +0x20
}
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
