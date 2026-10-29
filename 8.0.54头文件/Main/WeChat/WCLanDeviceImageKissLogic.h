@interface WCLanDeviceImageKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary * m_sendTaskMap; // +0x8
    WCLanDeviceData * m_deviceData; // +0x10
    CdnUploadTaskInfo * m_uploadInfo; // +0x18
    NSMutableArray * m_deviceWaitingUploadArray; // +0x20
    BOOL m_isUploading; // +0x28
    BOOL m_isDownloading; // +0x29
    NSMutableArray * m_deviceWaitingDownloadArray; // +0x30
    unsigned long long m_nonceNum; // +0x38
}
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (void)dealloc;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(BOOL)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(BOOL)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4 encKey:(id)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)startDownloadImage;
- (BOOL)stopDownloadImage:(id)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(BOOL)arg3 ErrCode:(int)arg4;
- (void)uploadDeviceData;
- (id)getEncryptImagePath:(id)arg1;
- (id)encryptImageBuffer:(id)arg1;
- (BOOL)stopUploadWithDevice:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (id)genTimeLineEncrptUrl;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1 queueType:(unsigned long long)arg2;
- (void)onKissDeviceProgressResponeWithProgress:(double)arg1 queueType:(unsigned long long)arg2;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (unsigned long long)getRandNumber;
- (void).cxx_destruct;
@end

