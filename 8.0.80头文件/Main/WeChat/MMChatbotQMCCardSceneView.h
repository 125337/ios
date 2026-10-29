@interface MMChatbotQMCCardSceneView : UIView <MMChatbotCardSceneBusiness, QMCCardDelegate, UIGestureRecognizerDelegate, IMMFontMgrExt>
{
    BOOL _readyReported; // +0x8
    BOOL _locationAuthRequesting; // +0x9
    BOOL _cardLoaded; // +0xa
    MMChatbotCardSceneContext * _sceneCtx; // +0x10
    NSString * _resourceId; // +0x18
    NSString * _titleText; // +0x20
    NSString * _expandAppId; // +0x28
    NSString * _expandPagePath; // +0x30
    QMCCard * _card; // +0x38
    QMCCardView * _cardView; // +0x40
}
- (id)initWithSceneContext:(id)arg1;
- (void)dealloc;
- (void)onUpdate:(id)arg1;
- (void)applyPayload:(id)arg1 source:(id)arg2;
- (void)buildContent;
- (void)layoutSubviews;
- (id)userLocationForQMCCard:(id)arg1;
- (id)cacheDirectoryForQMCCard:(id)arg1;
- (void)qmcCard:(id)arg1 routeNavigationDidTapWithParams:(id)arg2;
- (void)getExpandUrlWithCompletion:(id /* block */)arg1;
- (void)qmcCardDidLoad:(id)arg1;
- (void)qmcCard:(id)arg1 didFailWithError:(id)arg2;
- (void)qmcCard:(id)arg1 didChangeState:(long long)arg2 fromState:(long long)arg3;
- (void)qmcCard:(id)arg1 didChangeLifecycleWithCardID:(id)arg2 state:(long long)arg3;
- (void)qmcCard:(id)arg1 didLog:(id)arg2 level:(long long)arg3;
- (void)QMCCard:(id)arg1 didClickUI:(id)arg2 params:(id)arg3;
- (void)onFontSizeChange;
- (void)requestLocationAuthIfNeeded;
- (id)cachedUserLocation;
- (void)reportReady;
- (void)reportErrorWithCode:(unsigned long long)arg1 message:(id)arg2;
- (id)stringFromObject:(id)arg1;
- (id)sceneCtx;
- (void)setSceneCtx:(id)arg1;
- (BOOL)readyReported;
- (void)setReadyReported:(BOOL)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)expandAppId;
- (void)setExpandAppId:(id)arg1;
- (id)expandPagePath;
- (void)setExpandPagePath:(id)arg1;
- (id)card;
- (void)setCard:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (BOOL)locationAuthRequesting;
- (void)setLocationAuthRequesting:(BOOL)arg1;
- (BOOL)cardLoaded;
- (void)setCardLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
