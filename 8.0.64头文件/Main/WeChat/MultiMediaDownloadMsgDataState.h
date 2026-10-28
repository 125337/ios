@interface MultiMediaDownloadMsgDataState : MultiMediaUploadBaseState <MsgDataDownloadDelegate>
{
    BOOL _haveCheckedCdn; // +0x8
    NSString * _downloadKey; // +0x10
    NSString * _downloadMiddleKey; // +0x18
    CMessageWrap * _sourceMsgWrap; // +0x20
    MsgDataDownloadLogic * _downloadLogic; // +0x28
}
- (id)downloadLogic;
- (BOOL)isAllDataDownload;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)checkDownloadState;
- (BOOL)checkIfCanTryHitUpload;
- (BOOL)checkIfCanTryHitUploadMiddleData;
- (BOOL)checkIfCanTryHitUploadThumbData;
- (void)transformToNextState;
- (void)transformToDownloadFailState:(int)arg1;
- (void)downloadData;
- (void)downloadThumbData;
- (void)downloadMiddleData;
- (void)startDownloadMsgData;
- (C2CDownloadRequest)getDownloadRequest:(BOOL)arg1;
- (void)startDownloadMediaData;
- (C2CDownloadRequest)getThumbDataDownloadRequest;
- (C2CDownloadRequest)getMiddleDataDownloadRequest;
- (void)startDownloadMiddleData;
- (void)startDownloadThumbData;
- (void)confirmSourcePath;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (BOOL)haveCheckedCdn;
- (void)setHaveCheckedCdn:(BOOL)arg1;
- (id)downloadKey;
- (void)setDownloadKey:(id)arg1;
- (id)downloadMiddleKey;
- (void)setDownloadMiddleKey:(id)arg1;
- (id)sourceMsgWrap;
- (void)setSourceMsgWrap:(id)arg1;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
