@interface WAJSEventHandler_openLiteApp : WAJSEventHandler_BaseEvent <MMLiteAppExt>
{
    BOOL _syncCheckUpdate; // +0x8
    BOOL _isHalfScreen; // +0x9
    BOOL _isTransparent; // +0xa
    BOOL _isOpenWithNewTab; // +0xb
    BOOL _isRedirect; // +0xc
    BOOL _isForbidRightGesture; // +0xd
    float _heightPercent; // +0x10
    NSMutableDictionary * _resultParam; // +0x18
    MMLiteAppInfoItem * _appInfo; // +0x20
    NSString * _page; // +0x28
    NSString * _query; // +0x30
    NSString * _appId; // +0x38
    NSString * _enterType; // +0x40
    double _delayTime; // +0x48
}
- (void)handleJSEvent:(id)arg1;
- (void)startLiteApp:(id)arg1 page:(id)arg2 query:(id)arg3 isHalfScreen:(BOOL)arg4 heightPercent:(float)arg5 enterType:(id)arg6 isTransparent:(BOOL)arg7 isOpenWithNewTab:(BOOL)arg8 isRedirect:(BOOL)arg9 isForbidRightGesture:(BOOL)arg10 delayTime:(double)arg11;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (BOOL)syncCheckUpdate;
- (void)setSyncCheckUpdate:(BOOL)arg1;
- (id)resultParam;
- (void)setResultParam:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (float)heightPercent;
- (void)setHeightPercent:(float)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isOpenWithNewTab;
- (void)setIsOpenWithNewTab:(BOOL)arg1;
- (BOOL)isRedirect;
- (void)setIsRedirect:(BOOL)arg1;
- (BOOL)isForbidRightGesture;
- (void)setIsForbidRightGesture:(BOOL)arg1;
- (double)delayTime;
- (void)setDelayTime:(double)arg1;
- (void).cxx_destruct;
@end

