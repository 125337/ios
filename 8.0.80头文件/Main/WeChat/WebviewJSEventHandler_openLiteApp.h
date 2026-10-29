@interface WebviewJSEventHandler_openLiteApp : WebviewJSEventHandlerBase <MMLiteAppExt>
{
    BOOL _syncCheckUpdate; // +0x8
    BOOL _isHalfScreen; // +0x9
    BOOL _isTransparent; // +0xa
    BOOL _isForbidRightGesture; // +0xb
    BOOL _isRedirect; // +0xc
    NSMutableDictionary * _resultParam; // +0x10
    JSEvent * _jsEvent; // +0x18
    MMLiteAppInfoItem * _appInfo; // +0x20
    NSString * _page; // +0x28
    NSString * _query; // +0x30
    NSString * _appId; // +0x38
    NSString * _sessionId; // +0x40
    LiteAppHalfScreenConfig * _halfScreenConfig; // +0x48
    NSString * _enterType; // +0x50
    double _delayTime; // +0x58
    NSArray * _enableActions; // +0x60
    NSArray * _enableViews; // +0x68
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)openLiteAppViaLegacy:(id)arg1 store:(id)arg2 sourceAppId:(id)arg3;
- (void)callbackJSEvent:(id)arg1;
- (BOOL)syncCheckUpdate;
- (void)setSyncCheckUpdate:(BOOL)arg1;
- (id)resultParam;
- (void)setResultParam:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (id)halfScreenConfig;
- (void)setHalfScreenConfig:(id)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isForbidRightGesture;
- (void)setIsForbidRightGesture:(BOOL)arg1;
- (double)delayTime;
- (void)setDelayTime:(double)arg1;
- (id)enableActions;
- (void)setEnableActions:(id)arg1;
- (id)enableViews;
- (void)setEnableViews:(id)arg1;
- (BOOL)isRedirect;
- (void)setIsRedirect:(BOOL)arg1;
- (void).cxx_destruct;
@end
