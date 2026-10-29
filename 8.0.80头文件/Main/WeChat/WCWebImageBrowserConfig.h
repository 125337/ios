@interface WCWebImageBrowserConfig : MMObject
{
    BOOL _enableBottomBar; // +0x8
    BOOL _showAIProcessButton; // +0x9
    BOOL _showImageSugWord; // +0xa
    BOOL _isPhotoAccount; // +0xb
    NSMutableArray * _arrImageSourceInfos; // +0x10
    NSMutableArray * _arrImageSearchInfos; // +0x18
    WCWebImageXiaoweiEntryInfo * _xiaoweiEntryInfo; // +0x20
    NSString * _articleMultimodalXml; // +0x28
    NSArray * _originalImageUrls; // +0x30
    MPImageSugWordContext * _imageSugWordContext; // +0x38
    MPImageSugWord39400Snapshot * _imageSugWordReportSnapshot; // +0x40
    id /* block */ _mpImageForwardPluginProvider; // +0x48
}
- (id)init;
- (BOOL)enableBottomBar;
- (void)setEnableBottomBar:(BOOL)arg1;
- (id)arrImageSourceInfos;
- (void)setArrImageSourceInfos:(id)arg1;
- (id)arrImageSearchInfos;
- (void)setArrImageSearchInfos:(id)arg1;
- (BOOL)showAIProcessButton;
- (void)setShowAIProcessButton:(BOOL)arg1;
- (BOOL)showImageSugWord;
- (void)setShowImageSugWord:(BOOL)arg1;
- (BOOL)isPhotoAccount;
- (void)setIsPhotoAccount:(BOOL)arg1;
- (id)xiaoweiEntryInfo;
- (void)setXiaoweiEntryInfo:(id)arg1;
- (id)articleMultimodalXml;
- (void)setArticleMultimodalXml:(id)arg1;
- (id)originalImageUrls;
- (void)setOriginalImageUrls:(id)arg1;
- (id)imageSugWordContext;
- (void)setImageSugWordContext:(id)arg1;
- (id)imageSugWordReportSnapshot;
- (void)setImageSugWordReportSnapshot:(id)arg1;
- (id /* block */)mpImageForwardPluginProvider;
- (void)setMpImageForwardPluginProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
