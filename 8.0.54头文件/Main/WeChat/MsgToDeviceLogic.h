@interface MsgToDeviceLogic : NSObject
{
    BOOL _cancelSendingDevice; // +0x8
    int _state; // +0xc
    id <MsgToDeviceDelegate> _delegate; // +0x10
    ILinkDeviceData * _deviceData; // +0x18
    NSMutableArray * _waitingDevices; // +0x20
    NSString * _fileKey; // +0x28
    HwClientEncryptFileInfo * _clienEncryptFileInfo; // +0x30
}
- (id)initWithMsg:(id)arg1;
- (void)forwardToDevice:(id)arg1;
- (void)forwardCdnMsgToDevice:(id)arg1;
- (id)encryptMsgAndSave;
- (BOOL)checkFileSize:(unsigned long long)arg1;
- (void)cancelForwardToDevice:(id)arg1;
- (void)cancelForward;
- (BOOL)hasForwardTask;
- (void)uploadMsgToCDN:(id)arg1;
- (void)startWaitingTask;
- (void)startNetworkRequest:(id)arg1;
- (void)startNetworkRequest:(id)arg1 withDevice:(id)arg2;
- (void)startCompressRawVideo:(id)arg1 complete:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)deviceData;
- (void)setDeviceData:(id)arg1;
- (id)waitingDevices;
- (void)setWaitingDevices:(id)arg1;
- (BOOL)cancelSendingDevice;
- (void)setCancelSendingDevice:(BOOL)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)clienEncryptFileInfo;
- (void)setClienEncryptFileInfo:(id)arg1;
- (void).cxx_destruct;
@end

