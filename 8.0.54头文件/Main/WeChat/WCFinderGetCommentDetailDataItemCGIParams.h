@interface WCFinderGetCommentDetailDataItemCGIParams : NSObject
{
    BOOL _preloadFirstFrameInWIFI; // +0x8
    BOOL _isPrefetchRequest; // +0x9
    StreamTabTipsInfo * _tabTipsInfo; // +0x10
    WCFinderPushFeedViewProductParams * _productInfo; // +0x18
    NSString * _fluencyReportSceneKey; // +0x20
    WCFinderGetDetailDataItemCGIConfig * _config; // +0x28
    FinderLivePermissionVerifyInfo * _verifyInfo; // +0x30
    FinderClientStatus * _clientStatus; // +0x38
    FinderLiveReportBaseInfo * _liveReportBaseInfo; // +0x40
}
- (id)tabTipsInfo;
- (void)setTabTipsInfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (BOOL)preloadFirstFrameInWIFI;
- (void)setPreloadFirstFrameInWIFI:(BOOL)arg1;
- (BOOL)isPrefetchRequest;
- (void)setIsPrefetchRequest:(BOOL)arg1;
- (id)fluencyReportSceneKey;
- (void)setFluencyReportSceneKey:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)liveReportBaseInfo;
- (void)setLiveReportBaseInfo:(id)arg1;
- (void).cxx_destruct;
@end

