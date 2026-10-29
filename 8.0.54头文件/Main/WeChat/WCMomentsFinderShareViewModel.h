@interface WCMomentsFinderShareViewModel : WCMomentsPostShareBaseViewModel
{
    BOOL _hasRecordedDisplay; // +0x8
    BOOL _hasRecordedClick; // +0x9
    BOOL _Configurations_alwaysAllowsImagesWithPOI; // +0xa
    BOOL _isAsyncExportingVideo; // +0xb
    double _Configurations_minimumVideoDuration; // +0x10
    long long _Configurations_minimumImageCount; // +0x18
    NSString * _Configurations_customizedShareTips; // +0x20
    EditVideoAttr * _videoEditAttributes; // +0x28
    VideoCompositionAttr * _compositionAttr; // +0x30
    NSArray * _videoEditWidgetStateList; // +0x38
    SightDraft * _sightDraft; // +0x40
}
+ (id)sharedReportCache;
- (id)reportCache;
- (long long)reportSceneFromShareScene:(long long)arg1;
- (void)reportFinderWithAction:(long long)arg1 finderPostSessionID:(id)arg2;
- (id)svgIconName;
- (id)svgIconColor;
- (id)tips;
- (BOOL)validateDevice;
- (BOOL)validateConflicts;
- (BOOL)validateDataItem;
- (BOOL)validateMediaItemList;
- (BOOL)validateMediaItemListForScene;
- (BOOL)validCompositeVideoTask;
- (BOOL)shouldShowShareButton;
- (BOOL)hasActionRecordForShowingShareButton;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (BOOL)reallyShareFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)_shareVideoToFinderFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)_shareImagesToFinderFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)fetchAssets;
- (id)generateFinderImageModels;
- (double)Configurations_minimumVideoDuration;
- (void)setConfigurations_minimumVideoDuration:(double)arg1;
- (long long)Configurations_minimumImageCount;
- (void)setConfigurations_minimumImageCount:(long long)arg1;
- (BOOL)Configurations_alwaysAllowsImagesWithPOI;
- (void)setConfigurations_alwaysAllowsImagesWithPOI:(BOOL)arg1;
- (id)Configurations_customizedShareTips;
- (void)setConfigurations_customizedShareTips:(id)arg1;
- (BOOL)isAsyncExportingVideo;
- (void)setIsAsyncExportingVideo:(BOOL)arg1;
- (id)videoEditAttributes;
- (void)setVideoEditAttributes:(id)arg1;
- (id)compositionAttr;
- (void)setCompositionAttr:(id)arg1;
- (id)videoEditWidgetStateList;
- (void)setVideoEditWidgetStateList:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (void).cxx_destruct;
@end

