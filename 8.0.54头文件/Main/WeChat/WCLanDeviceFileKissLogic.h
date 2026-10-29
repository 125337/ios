@interface WCLanDeviceFileKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * m_sendTaskMap; // +0x8
    WCLanDeviceData * m_deviceData; // +0x10
    NSMutableArray * m_deviceWaitingUploadArray; // +0x18
    CdnUploadTaskInfo * m_uploadInfo; // +0x20
    BOOL m_isUploading; // +0x28
    unsigned int m_uploadProgress; // +0x2c
}
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (void)dealloc;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(BOOL)arg2 fileInfo:(id)arg3 uploadInfo:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(BOOL)arg3 ErrCode:(int)arg4;
- (void)uploadDeviceData;
- (BOOL)stopUploadWithDevice:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1;
- (void)onKissDeviceProgressResponeWithProgressInfo:(id)arg1;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (void).cxx_destruct;
@end

