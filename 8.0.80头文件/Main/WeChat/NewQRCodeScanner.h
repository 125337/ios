@interface NewQRCodeScanner : MMUIView <CameraScanOperateOptmizeDelegate, CameraScanParallelImageScannerDelegate, UINavigationControllerDelegate, CameraScannerViewDataDelegate, IUiUtilExt>
{
    BOOL oneDMode; // +0x8
    BOOL decoding; // +0x9
    BOOL hasInit; // +0xa
    CGRect cropRect; // +0x10
    NSString * _resultData; // +0x30
    NSString * _resultType; // +0x38
    char * _sendImage; // +0x40
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeData; // +0x48
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeType; // +0x60
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeCharset; // +0x78
    QBAR_REPORT_MSG _reportMsg; // +0x90
    QBar * _qbar; // +0x148
    timeval _startTime; // +0x150
    unsigned long long _matchNeedConfirmPrefixTimes; // +0x160
    CGRect _viewCropRect; // +0x168
    float _view2SampleBufferScaleRatio; // +0x188
    BOOL _enableParallelImageOpt; // +0x18c
    BOOL _hasCallbackResult; // +0x18d
    BOOL _enableAskAIQBarSnapshot; // +0x18e
    QBarSnapshot _latestQBarSnapshot; // +0x190
    BOOL _isPreScanImageRatioChanged; // +0x1b0
    BOOL _isResultFromParallelImageScan; // +0x1b1
    BOOL _hasCodeInDetection; // +0x1b2
    BOOL _enableCodeVerifier; // +0x1b3
    int scanCodeType; // +0x1b4
    unsigned int _totalFrames; // +0x1b8
    unsigned int _totalCostTime; // +0x1bc
    unsigned int _succCostTime; // +0x1c0
    unsigned int _retryTimes; // +0x1c4
    unsigned int _decodeStat; // +0x1c8
    unsigned int _dataLength; // +0x1cc
    unsigned int _qrCodeVersion; // +0x1d0
    unsigned int _pyramidLv; // +0x1d4
    unsigned int _isSupportWXCode; // +0x1d8
    unsigned int _resultCount; // +0x1dc
    unsigned int _possibleResultCount; // +0x1e0
    unsigned int _decodeScale; // +0x1e4
    unsigned int _detectTime; // +0x1e8
    unsigned int _srTime; // +0x1ec
    unsigned int _wxPreferCodeCount; // +0x1f0
    unsigned int _wxConfirmCodeCount; // +0x1f4
    unsigned int _qbarWaitingFrameCount; // +0x1f8
    unsigned int _parallelImageScanCostTime; // +0x1fc
    unsigned int _parallelImageScanExecuteCount; // +0x200
    unsigned int _parallelImageScanExecuteTotalTime; // +0x204
    float _rotateDegree; // +0x208
    id <NewQRCodeScannerDelegate> _delegate; // +0x210
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x218
    NSString * _resultSN; // +0x220
    NSString * _fileScanDebugString; // +0x228
    UIImage * _resultOriginalImage; // +0x230
    NSString * _resolutionRatio; // +0x238
    NSString * _typeName; // +0x240
    NSString * _charSet; // +0x248
    NSString * _binarizerMethod; // +0x250
    NSString * _qBarVersion; // +0x258
    NSString * _possibleProbs; // +0x260
    NSString * _scaleList; // +0x268
    CameraScanOperateReporter * _operateReporter; // +0x270
    NSString * _preset; // +0x278
    CameraScanParallelImageScanner * _parallelImageScanner; // +0x280
    CameraScanCodeVerifier * _codeVerifier; // +0x288
    CameraScanOperateOptmize * _operateOpimizer; // +0x290
    opaqueCMSampleBuffer * _currentSampleBuffer; // +0x298
    NSRecursiveLock * _variablesLock; // +0x2a0
    long long _currentSampleBufferOrientation; // +0x2a8
    CGPoint _markDotCenter; // +0x2b0
    CGRect _markDotRect; // +0x2c0
    QRCodeFrameParameters _frameParameters; // +0x2e0
}
- (void)LogScanSuccessInfo:(id)arg1;
- (id)initWithDelegate:(id)arg1 scannerParams:(id)arg2;
- (void)dealloc;
- (void)setCropRect:(CGRect)arg1;
- (void)onCameraPreviewLayoutChanged;
- (void)updateCropRect:(CGRect)arg1 updatePreviewLayout:(BOOL)arg2;
- (BOOL)isQRCodeType:(id)arg1;
- (BOOL)isWeAppCodeType:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)doScanCode:(char *)arg1 cvImageBuffer:(__CVBuffer *)arg2 Width:(int)arg3 Height:(int)arg4 cropRect:(CGRect)arg5 bufferWidth:(int)arg6 bufferHeight:(int)arg7 frameParameters:(const QRCodeFrameParameters *)arg8;
- (void)genReportDetailForFileOriginalResults:(vector<QBAR_RESULT, std::allocator<QBAR_RESULT>>)arg1 touchContext:(id)arg2;
- (void)calScanResultReportDetailData:(vector<QBAR_RESULT, std::allocator<QBAR_RESULT>>)arg1;
- (BOOL)scanOnePicture:(id)arg1;
- (BOOL)scanOnePicture:(id)arg1 context:(id)arg2;
- (BOOL)scanOnePictureForMultiCodes:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)tryScanOnePicture:(id)arg1;
- (BOOL)tryScanOnePicture:(id)arg1 context:(id)arg2;
- (BOOL)tryScanOnePicture:(id)arg1 context:(id)arg2 shouldRetMarkDotList:(BOOL)arg3 andRetMarkDotInfoList:(id *)arg4 isClipedQRCodeScanImage:(BOOL)arg5 logicParams:(id)arg6 scanFromRawScene:(long long)arg7;
- (BOOL)needCrashProtect:(id)arg1 fromRawScene:(long long)arg2;
- (void)showScanResult;
- (void)showScanResultWithMarkDotInfo:(id)arg1;
- (void)parallelImageScanner:(id)arg1 didFinishOneExecutionWithCostTime:(unsigned int)arg2;
- (void)parallelImageScanner:(id)arg1 didGetResults:(id)arg2;
- (void)applyParallelScanResult:(id)arg1;
- (void)startCapture;
- (void)startCaptureWithScanSession:(unsigned long long)arg1 uiSession:(unsigned int)arg2;
- (void)resetParallelImageScanStatus;
- (BOOL)shouldResetNewSessionWithScanSession:(unsigned long long)arg1 uiSession:(unsigned int)arg2;
- (void)stopCapture;
- (void)resetEngine:(unsigned long long)arg1;
- (id)convertQbarInfoList2MarkDotInfoList:(vector<QBAR_INFO, std::allocator<QBAR_INFO>>)arg1 viewScaleRatio:(float)arg2 viewCropPoint:(CGPoint)arg3 cropRect:(CGRect)arg4 bufferWidth:(int)arg5 bufferHeight:(int)arg6 imageBuffer:(__CVBuffer *)arg7 oriImage:(id)arg8;
- (CGPoint)getRealMarkDotCenterWithImageSize:(CGSize)arg1 detectResult:(QBAR_INFO)arg2;
- (void)setCurrentSampleBuffer:(opaqueCMSampleBuffer *)arg1 hasCodeInDetection:(BOOL)arg2 imageOrientation:(long long)arg3;
- (opaqueCMSampleBuffer *)getAndRetainCurrentSampleBuffer;
- (void)releaseCurrentSampleBuffer;
- (QBarSnapshot)latestQBarSnapshot;
- (void)clearLatestQBarSnapshot;
- (long long)cameraImageOrientation;
- (id)getCameraSnapshotContext;
- (id)getCameraSnapshotContextWithImageOrientation:(long long)arg1;
- (id)getCameraSnapshotContextWithImageOrientation:(long long)arg1 useFrameOrientation:(BOOL)arg2;
- (void)handleScanOpSnapshot:(QBarSnapshot)arg1;
- (void)handleScanOpSnapshotForDebug:(QBarSnapshot)arg1;
- (void)cameraFocusWithPoint:(CGPoint)arg1;
- (BOOL)isFocusSimpleMode;
- (id)resultData;
- (void)setResultData:(id)arg1;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (CGRect)cropRect;
- (int)scanCodeType;
- (BOOL)enableParallelImageOpt;
- (void)setEnableParallelImageOpt:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)resultSN;
- (void)setResultSN:(id)arg1;
- (id)fileScanDebugString;
- (void)setFileScanDebugString:(id)arg1;
- (id)resultOriginalImage;
- (void)setResultOriginalImage:(id)arg1;
- (unsigned int)totalFrames;
- (unsigned int)totalCostTime;
- (unsigned int)succCostTime;
- (id)resolutionRatio;
- (unsigned int)retryTimes;
- (unsigned int)decodeStat;
- (id)typeName;
- (unsigned int)dataLength;
- (id)charSet;
- (unsigned int)qrCodeVersion;
- (unsigned int)pyramidLv;
- (id)binarizerMethod;
- (unsigned int)isSupportWXCode;
- (id)qBarVersion;
- (unsigned int)resultCount;
- (unsigned int)possibleResultCount;
- (id)possibleProbs;
- (id)scaleList;
- (unsigned int)decodeScale;
- (unsigned int)detectTime;
- (unsigned int)srTime;
- (unsigned int)wxPreferCodeCount;
- (unsigned int)wxConfirmCodeCount;
- (unsigned int)qbarWaitingFrameCount;
- (void)setQbarWaitingFrameCount:(unsigned int)arg1;
- (BOOL)isPreScanImageRatioChanged;
- (void)setIsPreScanImageRatioChanged:(BOOL)arg1;
- (id)operateReporter;
- (void)setOperateReporter:(id)arg1;
- (id)preset;
- (void)setPreset:(id)arg1;
- (BOOL)isResultFromParallelImageScan;
- (void)setIsResultFromParallelImageScan:(BOOL)arg1;
- (unsigned int)parallelImageScanCostTime;
- (void)setParallelImageScanCostTime:(unsigned int)arg1;
- (unsigned int)parallelImageScanExecuteCount;
- (void)setParallelImageScanExecuteCount:(unsigned int)arg1;
- (unsigned int)parallelImageScanExecuteTotalTime;
- (void)setParallelImageScanExecuteTotalTime:(unsigned int)arg1;
- (id)parallelImageScanner;
- (void)setParallelImageScanner:(id)arg1;
- (id)codeVerifier;
- (void)setCodeVerifier:(id)arg1;
- (id)operateOpimizer;
- (void)setOperateOpimizer:(id)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)decodeData;
- (void)setDecodeData:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (float)rotateDegree;
- (void)setRotateDegree:(float)arg1;
- (CGPoint)markDotCenter;
- (void)setMarkDotCenter:(CGPoint)arg1;
- (CGRect)markDotRect;
- (void)setMarkDotRect:(CGRect)arg1;
- (opaqueCMSampleBuffer *)currentSampleBuffer;
- (void)setCurrentSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)variablesLock;
- (void)setVariablesLock:(id)arg1;
- (QRCodeFrameParameters)frameParameters;
- (void)setFrameParameters:(QRCodeFrameParameters)arg1;
- (long long)currentSampleBufferOrientation;
- (void)setCurrentSampleBufferOrientation:(long long)arg1;
- (BOOL)hasCodeInDetection;
- (void)setHasCodeInDetection:(BOOL)arg1;
- (BOOL)enableCodeVerifier;
- (void)setEnableCodeVerifier:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
