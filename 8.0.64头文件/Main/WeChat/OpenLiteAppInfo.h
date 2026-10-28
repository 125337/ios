@interface OpenLiteAppInfo : NSObject
{
    BOOL _isTransparent; // +0x8
    BOOL _waitDownload; // +0x9
    BOOL _checkUpdate; // +0xa
    BOOL _syncCheck; // +0xb
    BOOL _forbidRightGesture; // +0xc
    BOOL _openWithNewTab; // +0xd
    BOOL _enableDragToCloseInHalfScreen; // +0xe
    BOOL _enableDragToFullScreenInHalfScreen; // +0xf
    BOOL _useOpenInfoDeviceHW; // +0x10
    BOOL _withDownloadLoading; // +0x11
    BOOL _forbidAutoresizingMask; // +0x12
    BOOL _ignoreAlive; // +0x13
    BOOL _isPipMode; // +0x14
    BOOL _sizeChangeSnapshot; // +0x15
    BOOL _presentsWithTransaction; // +0x16
    int _keepAliveSeconds; // +0x18
    unsigned int _fromLiteAppUuid; // +0x1c
    NSString * _appId; // +0x20
    NSString * _page; // +0x28
    NSString * _query; // +0x30
    NSString * _checkMode; // +0x38
    unsigned long long _openType; // +0x40
    unsigned long long _timeout; // +0x48
    double _height; // +0x50
    double _deviceHeight; // +0x58
    double _deviceWidth; // +0x60
    id /* block */ _whenClosed; // +0x68
    id <MMLiteAppHalfScreenStatusChangeListener> _halfScreenStatusChangeListener; // +0x70
    NSString * _minVersion; // +0x78
    double _delayTime; // +0x80
    LiteAppReferrerInfo * _referrerInfo; // +0x88
    LiteAppStore * _store; // +0x90
    NSDictionary * _storeData; // +0x98
    long long _keepAliveGroup; // +0xa0
    MMUIViewController * _sourceViewController; // +0xa8
    unsigned long long _fromLitePageId; // +0xb0
}
- (id)initWithAppUrl:(id)arg1;
- (id)init:(id)arg1 page:(id)arg2 query:(id)arg3;
- (id)initEmbedView:(id)arg1 page:(id)arg2 query:(id)arg3;
- (id)initHalfScreen:(id)arg1 page:(id)arg2 query:(id)arg3 height:(double)arg4;
- (id)initWithType:(unsigned long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)checkMode;
- (void)setCheckMode:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)waitDownload;
- (void)setWaitDownload:(BOOL)arg1;
- (BOOL)checkUpdate;
- (void)setCheckUpdate:(BOOL)arg1;
- (BOOL)syncCheck;
- (void)setSyncCheck:(BOOL)arg1;
- (BOOL)forbidRightGesture;
- (void)setForbidRightGesture:(BOOL)arg1;
- (BOOL)openWithNewTab;
- (void)setOpenWithNewTab:(BOOL)arg1;
- (unsigned long long)openType;
- (void)setOpenType:(unsigned long long)arg1;
- (BOOL)enableDragToCloseInHalfScreen;
- (void)setEnableDragToCloseInHalfScreen:(BOOL)arg1;
- (BOOL)enableDragToFullScreenInHalfScreen;
- (void)setEnableDragToFullScreenInHalfScreen:(BOOL)arg1;
- (unsigned long long)timeout;
- (void)setTimeout:(unsigned long long)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (BOOL)useOpenInfoDeviceHW;
- (void)setUseOpenInfoDeviceHW:(BOOL)arg1;
- (double)deviceHeight;
- (void)setDeviceHeight:(double)arg1;
- (double)deviceWidth;
- (void)setDeviceWidth:(double)arg1;
- (id /* block */)whenClosed;
- (void)setWhenClosed:(id /* block */)arg1;
- (id)halfScreenStatusChangeListener;
- (void)setHalfScreenStatusChangeListener:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (BOOL)withDownloadLoading;
- (void)setWithDownloadLoading:(BOOL)arg1;
- (double)delayTime;
- (void)setDelayTime:(double)arg1;
- (BOOL)forbidAutoresizingMask;
- (void)setForbidAutoresizingMask:(BOOL)arg1;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)storeData;
- (void)setStoreData:(id)arg1;
- (int)keepAliveSeconds;
- (void)setKeepAliveSeconds:(int)arg1;
- (long long)keepAliveGroup;
- (void)setKeepAliveGroup:(long long)arg1;
- (BOOL)ignoreAlive;
- (void)setIgnoreAlive:(BOOL)arg1;
- (BOOL)isPipMode;
- (void)setIsPipMode:(BOOL)arg1;
- (BOOL)sizeChangeSnapshot;
- (void)setSizeChangeSnapshot:(BOOL)arg1;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (unsigned int)fromLiteAppUuid;
- (void)setFromLiteAppUuid:(unsigned int)arg1;
- (unsigned long long)fromLitePageId;
- (void)setFromLitePageId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
