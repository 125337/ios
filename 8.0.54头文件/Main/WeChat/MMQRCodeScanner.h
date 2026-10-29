@interface MMQRCodeScanner : MMObject
{
    int m_inputWidth; // +0x8
    int m_inputHeight; // +0xc
    char * m_scanBuffer; // +0x10
    QBar * _qbar; // +0x18
    BOOL _active; // +0x20
    NSObject<MMQRCodeScannerDelegate> * _delegate; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)startQRScan;
- (void)stopQRScan;
- (void)scanVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)printArray:(vector<QBAR_POINT, std::allocator<QBAR_POINT>>)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

