@interface GoodsScanner : MMUIView <CNetworkStatusExt, LocationRetrieveDelegate, IScanGoodsServiceExt, CameraScannerViewDelegate>
{
    float _scaleRatio; // +0x8
    CGPoint _cropInputOrigin; // +0x10
    BOOL _isDecoding; // +0x20
    BOOL _isUseAlbumSnapshot; // +0x21
    BOOL _isSvrRespDetectFail; // +0x22
    BOOL _hasReportWhenOpenHalfScreenPage; // +0x23
    int _albumFrameID; // +0x24
    unsigned int _clearFrameWidth; // +0x28
    unsigned int _clearFrameHeight; // +0x2c
    unsigned int _tabSessionIDForReport; // +0x30
    unsigned int _scanSessionIDForReport; // +0x34
    id <GoodsScannerDelegate> _delegate; // +0x38
    unsigned long long _sessionID; // +0x40
    long long _businessType; // +0x48
    long long _businessSubType; // +0x50
    CameraScanGoodsAdInfo * _adInfo; // +0x58
    void * _focusEngine; // +0x60
    NSObject<OS_dispatch_queue> * _engineQueue; // +0x68
    NSString * _configVersion; // +0x70
    NSMutableSet * _requestIDSet; // +0x78
    char * _clearFrameData; // +0x80
    opaqueCMSampleBuffer * _currentSampleBuffer; // +0x88
    NSRecursiveLock * _variablesLock; // +0x90
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x98
    CameraScanGoodsJSAPIInfo * _jsapiInfo; // +0xa0
    LocationRetriever * _locationRetriever; // +0xa8
}
+ (id)calcuatePhashMemInfoForPicture:(id)arg1 confStr:(id)arg2;
- (id)initWithCameraScannerViewWrapper:(id)arg1 businessType:(long long)arg2 businessSubType:(long long)arg3 adInfo:(id)arg4 jsapiInfo:(id)arg5;
- (void)dealloc;
- (BOOL)isRequestIDInSet:(id)arg1;
- (void)addRequestIDToSet:(id)arg1;
- (void)removeRequestIDFromSet:(id)arg1;
- (void)removeAllRequestIDFromSet;
- (void)setCurrentSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)getAndRetainCurrentSampleBuffer;
- (void)releaseCurrentSampleBuffer;
- (void)setupEngineQueue;
- (void)setupFocusEngine;
- (void)deallocFocusEngine;
- (void)cancelAllCallback;
- (void)start;
- (void)stop;
- (BOOL)scanOnePicture:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)handleRotatedImageBuffer:(Mat)arg1;
- (id)getCameraSnapshotImage;
- (id)getImageBySampleBufferref:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)onFetchScanConfigureSuccess:(id)arg1 confVersion:(id)arg2;
- (void)onFetchScanConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onFetchDynamicWordingSuccess:(id)arg1;
- (void)onFetchDynamicWordingFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onSendImageInfoSuccess:(id)arg1;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(BOOL)arg4;
- (id)requestIDForSessionID:(unsigned long long)arg1 frameID:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)setFocusEngineNetworkType;
- (void)recordTabSessionID:(unsigned int)arg1 scanSessionID:(unsigned int)arg2;
- (void)reportAIEngineInfoWhenDetectSuccess;
- (void)reportAIEngineInfoWithResultAction:(long long)arg1 tabSessionID:(unsigned int)arg2 scanSessionID:(unsigned int)arg3;
- (void)setupLocationRetriever;
- (void)tryRetrieveLocationIfNeed;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)getInfoTextForCurrentLanguage;
- (unsigned int)getInfoTextUpdateTime;
- (id)memoryMappedKV;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg1;
- (long long)businessType;
- (void)setBusinessType:(long long)arg1;
- (long long)businessSubType;
- (void)setBusinessSubType:(long long)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (void *)focusEngine;
- (void)setFocusEngine:(void *)arg1;
- (id)engineQueue;
- (void)setEngineQueue:(id)arg1;
- (BOOL)isDecoding;
- (void)setIsDecoding:(BOOL)arg1;
- (BOOL)isUseAlbumSnapshot;
- (void)setIsUseAlbumSnapshot:(BOOL)arg1;
- (id)configVersion;
- (void)setConfigVersion:(id)arg1;
- (id)requestIDSet;
- (void)setRequestIDSet:(id)arg1;
- (int)albumFrameID;
- (void)setAlbumFrameID:(int)arg1;
- (BOOL)isSvrRespDetectFail;
- (void)setIsSvrRespDetectFail:(BOOL)arg1;
- (unsigned int)clearFrameWidth;
- (void)setClearFrameWidth:(unsigned int)arg1;
- (unsigned int)clearFrameHeight;
- (void)setClearFrameHeight:(unsigned int)arg1;
- (char *)clearFrameData;
- (void)setClearFrameData:(char *)arg1;
- (opaqueCMSampleBuffer *)currentSampleBuffer;
- (id)variablesLock;
- (void)setVariablesLock:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)jsapiInfo;
- (void)setJsapiInfo:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (BOOL)hasReportWhenOpenHalfScreenPage;
- (void)setHasReportWhenOpenHalfScreenPage:(BOOL)arg1;
- (unsigned int)tabSessionIDForReport;
- (void)setTabSessionIDForReport:(unsigned int)arg1;
- (unsigned int)scanSessionIDForReport;
- (void)setScanSessionIDForReport:(unsigned int)arg1;
- (void).cxx_destruct;
@end

