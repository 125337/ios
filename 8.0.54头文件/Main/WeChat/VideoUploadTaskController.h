@interface VideoUploadTaskController : NSObject <VideoUploadTaskDelegate>
{
    BOOL _bDisableHitCheck; // +0x8
    BOOL _isSendingMsg; // +0x9
    BOOL _bJustUploadDataWithoutMD5Hit; // +0xa
    BOOL _isUseCgiUpload; // +0xb
    BOOL _isRawDataUploadSucc; // +0xc
    BOOL _isCompressDataUploadSucc; // +0xd
    CMessageWrap * _msgWrap; // +0x10
    id <VideoUploadTaskControllerDelegate> _delegate; // +0x18
    MMAsset * _mmAsset; // +0x20
    RawVideoUploadTask * _rawUploadTask; // +0x28
    CompressVideoUploadTask * _uploadTask; // +0x30
    ThumbImageUploader * _thumbImageUploader; // +0x38
}
- (id)initWithMsgWrap:(id)arg1;
- (id)uploadTask;
- (id)rawUploadTask;
- (id)thumbImageUploader;
- (int)tryStartOccupySendTask;
- (void)stopTask;
- (BOOL)isHitMD5;
- (void)sendOccupyMessage:(id)arg1;
- (void)uploadThumbImage;
- (void)onSendOccupyMsgFail:(int)arg1;
- (void)onSendOccupyMessageSuccuss:(id)arg1;
- (void)tryStartDataUploadTask;
- (void)startDataUploadTask;
- (void)asyncUploadAsset;
- (void)caculateOriginSourceMD5WithUrl:(id)arg1;
- (id)genUploadVideoRequest;
- (void)sendFinishMessageRequest;
- (void)makeUploadFail:(int)arg1;
- (void)onExportAssetSuccess:(id)arg1;
- (BOOL)isAllDataUploadFinish;
- (void)onUploadTaskSuccess:(id)arg1;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)onUploadProgressUpdate;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)bDisableHitCheck;
- (void)setBDisableHitCheck:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mmAsset;
- (void)setMmAsset:(id)arg1;
- (void)setRawUploadTask:(id)arg1;
- (void)setUploadTask:(id)arg1;
- (void)setThumbImageUploader:(id)arg1;
- (BOOL)isUseCgiUpload;
- (void)setIsUseCgiUpload:(BOOL)arg1;
- (BOOL)isRawDataUploadSucc;
- (void)setIsRawDataUploadSucc:(BOOL)arg1;
- (BOOL)isCompressDataUploadSucc;
- (void)setIsCompressDataUploadSucc:(BOOL)arg1;
- (void).cxx_destruct;
@end

