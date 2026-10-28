@interface TPDataTransportManagerProxyDelegate : NSObject <TPProxyPlayDelegate>
{
    id <TPProxyPlayDelegate> _outerDelegate; // +0x8
    TPPlayerEventPublisher * _publisher; // +0x10
}
- (int)getCurrentPlayClipNo;
- (long long)getCurrentPlayOffset;
- (long long)getCurrentPosition;
- (id)getPlayInfo:(id)arg1;
- (long long)getPlayerBufferLength;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extraInfo:(id)arg5;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (id)onPlayCallbackWithMessageType:(unsigned long long)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (id)outerDelegate;
- (void)setOuterDelegate:(id)arg1;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (void).cxx_destruct;
@end
