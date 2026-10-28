@interface WCFinderGetCommentDetailDataItemCGIParams : NSObject
{
    BOOL _preloadFirstFrameInWIFI; // +0x8
    BOOL _isPrefetchRequest; // +0x9
    BOOL _ignoreAutoToast; // +0xa
    NSString * _containerId; // +0x10
    StreamTabTipsInfo * _tabTipsInfo; // +0x18
    WCFinderPushFeedViewProductParams * _productInfo; // +0x20
    NSString * _fluencyReportSceneKey; // +0x28
    WCFinderGetDetailDataItemCGIConfig * _config; // +0x30
    FinderLivePermissionVerifyInfo * _verifyInfo; // +0x38
    FinderClientStatus * _clientStatus; // +0x40
    FinderLiveReportBaseInfo * _liveReportBaseInfo; // +0x48
    NSString * _gMsgId; // +0x50
    JsApiSourceInfo * _jsApiSourceInfo; // +0x58
    unsigned long long _relatedScene; // +0x60
    NSString * _fromSessionId; // +0x68
    FinderShareUserInfo * _shareUserInfo; // +0x70
}
- (id)containerId;
- (void)setContainerId:(id)arg1;
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
- (id)gMsgId;
- (void)setGMsgId:(id)arg1;
- (id)jsApiSourceInfo;
- (void)setJsApiSourceInfo:(id)arg1;
- (unsigned long long)relatedScene;
- (void)setRelatedScene:(unsigned long long)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)shareUserInfo;
- (void)setShareUserInfo:(id)arg1;
- (BOOL)ignoreAutoToast;
- (void)setIgnoreAutoToast:(BOOL)arg1;
- (void).cxx_destruct;
@end
