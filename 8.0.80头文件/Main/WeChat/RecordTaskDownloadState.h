@interface RecordTaskDownloadState : RecordTaskBaseState <MsgDataDownloadDelegate>
{
    BOOL _isFromFav; // +0x8
    NSString * _downloadKey; // +0x10
    NSString * _downloadMiddleKey; // +0x18
    CMessageWrap * _sourceMsgWrap; // +0x20
    MsgDataDownloadLogic * _downloadLogic; // +0x28
}
- (id)initWithContext:(id)arg1 isFromFav:(BOOL)arg2;
- (id)downloadLogic;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)checkDownloadState;
- (void)transformToDownloadFailState:(int)arg1;
- (void)downloadCompressVideo;
- (void)downloadData;
- (C2CDownloadRequest)getThumbDataDownloadRequest;
- (C2CDownloadRequest)getMiddleDataDownloadRequest;
- (C2CDownloadRequest)getDownloadRequest:(BOOL)arg1;
- (void)startDownloadThumbData;
- (void)startDownloadMiddleData;
- (void)startDownloadData;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (id)downloadKey;
- (void)setDownloadKey:(id)arg1;
- (id)downloadMiddleKey;
- (void)setDownloadMiddleKey:(id)arg1;
- (id)sourceMsgWrap;
- (void)setSourceMsgWrap:(id)arg1;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
