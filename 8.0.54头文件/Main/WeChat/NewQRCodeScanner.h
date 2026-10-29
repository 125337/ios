@interface NewQRCodeScanner : MMUIView <UINavigationControllerDelegate, CameraScannerViewDelegate, IUiUtilExt>
{
    BOOL oneDMode; // +0x8
    BOOL decoding; // +0x9
    BOOL hasInit; // +0xa
    BOOL _rotateImage; // +0xb
    CGRect cropRect; // +0x10
    NSString * _resultData; // +0x30
    NSString * _resultType; // +0x38
    char * _sendImage; // +0x40
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeData; // +0x48
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeType; // +0x60
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeCharset; // +0x78
    QBAR_REPORT_MSG _reportMsg; // +0x90
    QBar * _qbar; // +0x138
    timeval _startTime; // +0x140
    unsigned long long _matchNeedConfirmPrefixTimes; // +0x150
    CGRect _viewCropRect; // +0x158
    float _view2SampleBufferScaleRatio; // +0x178
    BOOL _isUseSmallCropArea; // +0x17c
    BOOL _isPreScanImageRatioChanged; // +0x17d
    int scanCodeType; // +0x180
    unsigned int _totalFrames; // +0x184
    unsigned int _totalCostTime; // +0x188
    unsigned int _succCostTime; // +0x18c
    unsigned int _retryTimes; // +0x190
    unsigned int _decodeStat; // +0x194
    unsigned int _dataLength; // +0x198
    unsigned int _qrCodeVersion; // +0x19c
    unsigned int _pyramidLv; // +0x1a0
    unsigned int _isSupportWXCode; // +0x1a4
    unsigned int _resultCount; // +0x1a8
    unsigned int _possibleResultCount; // +0x1ac
    unsigned int _decodeScale; // +0x1b0
    unsigned int _detectTime; // +0x1b4
    unsigned int _srTime; // +0x1b8
    unsigned int _wxPreferCodeCount; // +0x1bc
    unsigned int _wxConfirmCodeCount; // +0x1c0
    unsigned int _qbarWaitingFrameCount; // +0x1c4
    float _rotateDegree; // +0x1c8
    id <NewQRCodeScannerDelegate> _delegate; // +0x1d0
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x1d8
    NSString * _resultSN; // +0x1e0
    NSString * _fileScanDebugString; // +0x1e8
    UIImage * _resultOriginalImage; // +0x1f0
    NSString * _resolutionRatio; // +0x1f8
    NSString * _typeName; // +0x200
    NSString * _charSet; // +0x208
    NSString * _binarizerMethod; // +0x210
    NSString * _qBarVersion; // +0x218
    NSString * _possibleProbs; // +0x220
    NSString * _scaleList; // +0x228
    opaqueCMSampleBuffer * _currentSampleBuffer; // +0x230
    NSRecursiveLock * _variablesLock; // +0x238
    CGPoint _markDotCenter; // +0x240
}
+ (id)imageFromLockedCVImageBuffer:(__CVBuffer *)arg1;
- (id)initWithDelegate:(id)arg1 scannerParams:(id)arg2;
- (void)dealloc;
- (void)setCropRect:(CGRect)arg1;
- (BOOL)isQRCodeType:(id)arg1;
- (BOOL)isWeAppCodeType:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)doScanCode:(char *)arg1 cvImageBuffer:(__CVBuffer *)arg2 Width:(int)arg3 Height:(int)arg4 bufferWidth:(int)arg5 bufferHeight:(int)arg6;
- (void)genReportDetailForFileOriginalResults:(vector<QBAR_RESULT, std::allocator<QBAR_RESULT>>)arg1 touchContext:(id)arg2;
- (void)calScanResultReportDetailData:(vector<QBAR_RESULT, std::allocator<QBAR_RESULT>>)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (BOOL)scanOnePicture:(id)arg1;
- (BOOL)scanOnePicture:(id)arg1 context:(id)arg2;
- (BOOL)tryScanOnePicture:(id)arg1;
- (BOOL)tryScanOnePicture:(id)arg1 context:(id)arg2;
- (BOOL)tryScanOnePicture:(id)arg1 context:(id)arg2 shouldRetMarkDotList:(BOOL)arg3 andRetMarkDotInfoList:(id *)arg4 isClipedQRCodeScanImage:(BOOL)arg5 logicParams:(id)arg6 scanFromRawScene:(long long)arg7;
- (BOOL)needCrashProtect:(id)arg1 fromRawScene:(long long)arg2;
- (void)showScanResult;
- (void)showScanResultWithMarkDotInfo:(id)arg1;
- (void)startCapture;
- (void)stopCapture;
- (void)resetEngine;
- (id)converQbarResultList2MarkDotInfoList:(vector<QBAR_RESULT, std::allocator<QBAR_RESULT>>)arg1;
- (id)convertQbarInfoList2MarkDotInfoList:(vector<QBAR_INFO, std::allocator<QBAR_INFO>>)arg1 viewScaleRatio:(float)arg2 viewCropPoint:(CGPoint)arg3;
- (CGPoint)getRealMarkDotCenterWithImageSize:(CGSize)arg1 detectResult:(QBAR_RESULT)arg2;
- (void)setCurrentSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)getAndRetainCurrentSampleBuffer;
- (void)releaseCurrentSampleBuffer;
- (id)getCameraSnapshotImage;
- (id)resultData;
- (void)setResultData:(id)arg1;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (CGRect)cropRect;
- (int)scanCodeType;
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
- (BOOL)isUseSmallCropArea;
- (void)setIsUseSmallCropArea:(BOOL)arg1;
- (BOOL)isPreScanImageRatioChanged;
- (void)setIsPreScanImageRatioChanged:(BOOL)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)decodeData;
- (void)setDecodeData:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (float)rotateDegree;
- (void)setRotateDegree:(float)arg1;
- (CGPoint)markDotCenter;
- (void)setMarkDotCenter:(CGPoint)arg1;
- (opaqueCMSampleBuffer *)currentSampleBuffer;
- (id)variablesLock;
- (void)setVariablesLock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

