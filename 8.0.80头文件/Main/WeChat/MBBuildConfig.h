@interface MBBuildConfig : NSObject <NSCopying>
{
    BOOL _useJitMode; // +0x8
    BOOL _enableJitNativeRender; // +0x9
    BOOL _jitEnableHighFPS; // +0xa
    BOOL _jitEnableSAB; // +0xb
    BOOL _jitEnableEarlyOMGOptimization; // +0xc
    BOOL _autoHighFreshRate; // +0xd
    BOOL _enableRenderEngine; // +0xe
    BOOL _enableCodeCache; // +0xf
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
    UIView * _jitNativeRenderContainer; // +0x68
    NSString * _jitDomain; // +0x70
    unsigned long long _jitLiteMode; // +0x78
    unsigned long long _reportSample; // +0x80
    id /* block */ _provideExtraInfo; // +0x88
    id <IMBProfilerDelegate> _profilerDelegate; // +0x90
    NSMutableArray * _jsapiBlackList; // +0x98
    NSMutableArray * _imageDecoders; // +0xa0
    NSMutableArray * _imageRequestDecorators; // +0xa8
    NSMutableDictionary * _extJsApiInfoPool; // +0xb0
    NSMutableDictionary * _jsApiPool; // +0xb8
    NSDictionary * _extEnvContents; // +0xc0
}
- (id)init;
- (void)addMBJsApi:(id)arg1;
- (void)addMBJsApis:(id)arg1;
- (void)setJsApiBlackList:(id)arg1;
- (id)getJsApiBlackList;
- (void)addImageDecoder:(id)arg1;
- (id)getImageDecoders;
- (void)addImageRequestDecorator:(id)arg1;
- (id)getImageRequestDecorators;
- (void)addExtJsApis:(id)arg1;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(BOOL)arg3;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(BOOL)arg3 isRunOnMainThread:(BOOL)arg4;
- (void)addExtJsApiInfo:(id)arg1;
- (void)addExtJsApiInfo:(id)arg1 handler:(id)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)setExtraEnvContents:(id)arg1;
- (void)appendExtraEnvContents:(id)arg1;
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
- (BOOL)enableJitNativeRender;
- (void)setEnableJitNativeRender:(BOOL)arg1;
- (id)jitNativeRenderContainer;
- (void)setJitNativeRenderContainer:(id)arg1;
- (id)jitDomain;
- (void)setJitDomain:(id)arg1;
- (unsigned long long)jitLiteMode;
- (void)setJitLiteMode:(unsigned long long)arg1;
- (BOOL)jitEnableHighFPS;
- (void)setJitEnableHighFPS:(BOOL)arg1;
- (BOOL)jitEnableSAB;
- (void)setJitEnableSAB:(BOOL)arg1;
- (BOOL)jitEnableEarlyOMGOptimization;
- (void)setJitEnableEarlyOMGOptimization:(BOOL)arg1;
- (unsigned long long)reportSample;
- (void)setReportSample:(unsigned long long)arg1;
- (BOOL)autoHighFreshRate;
- (void)setAutoHighFreshRate:(BOOL)arg1;
- (BOOL)enableRenderEngine;
- (void)setEnableRenderEngine:(BOOL)arg1;
- (id /* block */)provideExtraInfo;
- (void)setProvideExtraInfo:(id /* block */)arg1;
- (id)profilerDelegate;
- (void)setProfilerDelegate:(id)arg1;
- (BOOL)enableCodeCache;
- (void)setEnableCodeCache:(BOOL)arg1;
- (id)jsapiBlackList;
- (void)setJsapiBlackList:(id)arg1;
- (id)imageDecoders;
- (void)setImageDecoders:(id)arg1;
- (id)imageRequestDecorators;
- (void)setImageRequestDecorators:(id)arg1;
- (id)extJsApiInfoPool;
- (void)setExtJsApiInfoPool:(id)arg1;
- (id)jsApiPool;
- (void)setJsApiPool:(id)arg1;
- (id)extEnvContents;
- (void)setExtEnvContents:(id)arg1;
- (void).cxx_destruct;
@end
