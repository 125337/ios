@interface WACameraScanScanner : NSObject <IUiUtilExt>
{
    char * _sendImage; // +0x8
    int _sendImageBufferSize; // +0x10
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeData; // +0x18
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeType; // +0x30
    basic_string<char, std::char_traits<char>, std::allocator<char>> _decodeCharset; // +0x48
    QBAR_REPORT_MSG _reportMsg; // +0x60
    QBar * _qbar; // +0x118
    int _scanCodeType; // +0x120
    NSObject<OS_dispatch_queue> * _scanQueue; // +0x128
    unsigned int _scanIndex; // +0x130
    id <WACameraQRCodeScannerDelegate> _delegate; // +0x138
    NSString * _resultData; // +0x140
    NSString * _resultType; // +0x148
    double _scanFreq; // +0x150
    double _lastScanTime; // +0x158
    CGRect _cropRegion; // +0x160
    CGRect _scanRegion; // +0x180
    CGRect _cameraViewRect; // +0x1a0
}
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;
- (void)willOutputSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)internalProcessSampleBuffer_iOS174:(opaqueCMSampleBuffer *)arg1;
- (void)internalProcessSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (BOOL)doScanCode:(char *)arg1 outSize:(CGSize)arg2 scanRect:(CGRect)arg3 scanOffset:(CGPoint)arg4 angel:(double)arg5;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)notifyGotScanResult:(id)arg1;
- (void)dealloc;
- (CGRect)getImageRectBySearchResult:(vector<QBAR_POINT, std::allocator<QBAR_POINT>>)arg1 outSize:(CGSize)arg2 angel:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)resultData;
- (void)setResultData:(id)arg1;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (CGRect)cropRegion;
- (void)setCropRegion:(CGRect)arg1;
- (CGRect)scanRegion;
- (void)setScanRegion:(CGRect)arg1;
- (double)scanFreq;
- (void)setScanFreq:(double)arg1;
- (CGRect)cameraViewRect;
- (void)setCameraViewRect:(CGRect)arg1;
- (unsigned int)scanIndex;
- (void)setScanIndex:(unsigned int)arg1;
- (double)lastScanTime;
- (void)setLastScanTime:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
