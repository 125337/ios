@interface ImageMsgDataDownloader : NSObject <MsgDataDownloadDelegate>
{
    CMessageWrap * _msgWrap; // +0x8
    id /* block */ _completeHandler; // +0x10
    MsgDataDownloadLogic * _downloadLogic; // +0x18
}
- (id)initWithMsgWrap:(id)arg1;
- (id)downloadLogic;
- (BOOL)startDownloadImageDataWithCompleteHandler:(id /* block */)arg1;
- (void)tryStartDownloadLiveVideo;
- (void)downloadLiveVideo;
- (void)onDownloadAnyFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id /* block */)completeHandler;
- (void)setCompleteHandler:(id /* block */)arg1;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
