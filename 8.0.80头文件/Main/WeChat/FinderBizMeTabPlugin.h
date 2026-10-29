@interface FinderBizMeTabPlugin : NSObject <BizFinderPublishApi, BizFinderProfileApi, BizFinderVideoDetailApi, BizFinderDataFetchApi, BizFinderRedDotNativeApi, WCFinderDataItemExt, MMFlutterPlugin>
{
    MMFlutterViewController * _flutterVC; // +0x8
    WCFinderPostMgr * _postMgr; // +0x10
    WCFinderPostMgrParamsModel * _paramsModel; // +0x18
    BizFinderFlutterApi * _flutterAPI; // +0x20
}
+ (id)plugin;
+ (id)getFinderPersonalCenterFlutterParams:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController:(id)arg1;
- (void)fetchFinderPersonalCenterDataUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)preloadCameraTemplateIfNeededWithContact:(id)arg1;
- (void)publishFinderVideoUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)publishFinderLiveUsername:(id)arg1 error:(id *)arg2;
- (void)openFinderProfileDetailUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)openVideoDetailFeedId:(id)arg1 completion:(id /* block */)arg2;
- (id)_previewDataItemsForOpenVideoDetailFeedId:(id)arg1 containsClickedFeed:(BOOL *)arg2;
- (id)_dataItemInArray:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)_performFinderDataUpdate:(id)arg1;
- (void)openFinderRedDotTipsUuid:(id)arg1 error:(id *)arg2;
- (void)onPublishButtonExposedWithError:(id *)arg1;
- (void)onPublishButtonClickedWithError:(id *)arg1;
- (void)onStartLiveExposedWithError:(id *)arg1;
- (void)onStartLiveClickedWithError:(id *)arg1;
- (void)reportOpenFinderProfileDetailForLive;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (void).cxx_destruct;
@end
