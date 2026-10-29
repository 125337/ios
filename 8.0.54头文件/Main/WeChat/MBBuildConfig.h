@interface MBBuildConfig : NSObject <NSCopying>
{
    BOOL _useJitMode; // +0x8
    BOOL _isRollbackPresentBugfix; // +0x9
    BOOL _useMBNano; // +0xa
    BOOL _autoHighFreshRate; // +0xb
    id <IMBViewDelegate> _viewDelegate; // +0x10
    id <IMBExternalViewDelegate> _externalViewDelegate; // +0x18
    id <IMBPkgManagement> _pkgManagement; // +0x20
    id <IMBJsApiDelegate> _jsApiDelegate; // +0x28
    id <IMBVConsoleDelegate> _vConsoleDelegate; // +0x30
    id <IMBStorage> _storage; // +0x38
    id <IMBNetwork> _network; // +0x40
    id _context; // +0x48
    id <wxAudioFileLoaderDelegate> _wxAudioFileLoaderDelegate; // +0x50
    id <IMBBizInfoDelegate> _bizInfoDelegate; // +0x58
    MagicBrushBiz * _biz; // +0x60
    NSString * _jitDomain; // +0x68
    unsigned long long _reportSample; // +0x70
    id /* block */ _provideExtraInfo; // +0x78
    id <IMBProfilerDelegate> _profilerDelegate; // +0x80
    NSMutableArray * _jsapiBlackList; // +0x88
    NSMutableDictionary * _extJsApiInfoPool; // +0x90
    NSMutableDictionary * _jsApiPool; // +0x98
    NSDictionary * _extEnvContents; // +0xa0
}
- (id)init;
- (void)addMBJsApi:(id)arg1;
- (void)addMBJsApis:(id)arg1;
- (void)setJsApiBlackList:(id)arg1;
- (id)getJsApiBlackList;
- (void)addExtJsApis:(id)arg1;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(BOOL)arg3;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(BOOL)arg3 isRunOnMainThread:(BOOL)arg4;
- (void)addExtJsApiInfo:(id)arg1;
- (void)addExtJsApiInfo:(id)arg1 handler:(id)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)setExtraEnvContents:(id)arg1;
- (BOOL)isJsApiExist:(id)arg1;
- (id)getExtJsApiInfo:(id)arg1;
- (id)getApi:(id)arg1;
- (id)getAllMBJsApis;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)externalViewDelegate;
- (void)setExternalViewDelegate:(id)arg1;
- (id)pkgManagement;
- (void)setPkgManagement:(id)arg1;
- (id)jsApiDelegate;
- (void)setJsApiDelegate:(id)arg1;
- (id)vConsoleDelegate;
- (void)setVConsoleDelegate:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (id)network;
- (void)setNetwork:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)wxAudioFileLoaderDelegate;
- (void)setWxAudioFileLoaderDelegate:(id)arg1;
- (id)bizInfoDelegate;
- (void)setBizInfoDelegate:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (BOOL)useJitMode;
- (void)setUseJitMode:(BOOL)arg1;
- (id)jitDomain;
- (void)setJitDomain:(id)arg1;
- (unsigned long long)reportSample;
- (void)setReportSample:(unsigned long long)arg1;
- (BOOL)isRollbackPresentBugfix;
- (void)setIsRollbackPresentBugfix:(BOOL)arg1;
- (BOOL)useMBNano;
- (void)setUseMBNano:(BOOL)arg1;
- (BOOL)autoHighFreshRate;
- (void)setAutoHighFreshRate:(BOOL)arg1;
- (id /* block */)provideExtraInfo;
- (void)setProvideExtraInfo:(id /* block */)arg1;
- (id)profilerDelegate;
- (void)setProfilerDelegate:(id)arg1;
- (id)jsapiBlackList;
- (void)setJsapiBlackList:(id)arg1;
- (id)extJsApiInfoPool;
- (void)setExtJsApiInfoPool:(id)arg1;
- (id)jsApiPool;
- (void)setJsApiPool:(id)arg1;
- (id)extEnvContents;
- (void)setExtEnvContents:(id)arg1;
- (void).cxx_destruct;
@end

