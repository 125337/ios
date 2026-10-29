@interface ScanBookMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    unsigned int _scanBookId; // +0x8
    unsigned int _sessionId; // +0xc
    unsigned int _opCode; // +0x10
    NSData * _dataToSend; // +0x18
    unsigned int _totalLen; // +0x20
    unsigned int _offset; // +0x24
    unsigned int _lastPackLen; // +0x28
    int _imageType; // +0x2c
    int _uploadAction; // +0x30
    BOOL _isUploading; // +0x34
    MMTimer * _uploadTimer; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)getProductItemById:(id)arg1 Scence:(unsigned int)arg2 QRCodeUrl:(id)arg3;
- (void)start;
- (void)stop;
- (void)checkUpload;
- (id)getLocalProductItemById:(id)arg1;
- (void)saveProductItem:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
