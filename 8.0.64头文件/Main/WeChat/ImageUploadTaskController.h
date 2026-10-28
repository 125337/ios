@interface ImageUploadTaskController : NSObject <IMsgExt, ImageUploadTaskProcessorDelegate>
{
    BOOL _isJustUploadDataWithoutMD5Hit; // +0x8
    BOOL _isCheckExistOnly; // +0x9
    BOOL _hadTryCalcPHash; // +0xa
    BOOL _isDisableHitCheck; // +0xb
    BOOL _isDisableWxam; // +0xc
    BOOL _isWxamIllegal; // +0xd
    BOOL _isHeicIllegal; // +0xe
    BOOL _isUseCgi; // +0xf
    BOOL _isTaskStopped; // +0x10
    BOOL _isUploadingImageData; // +0x11
    BOOL _isSendingImageMsg; // +0x12
    BOOL _hadCaculateOriginSourceMD5; // +0x13
    int _failReason; // +0x14
    int _errorCode; // +0x18
    int _cgiRetryCount; // +0x1c
    NSString * _taskID; // +0x20
    NSString * _taskKey; // +0x28
    NSString * _chatName; // +0x30
    CMessageWrap * _msgWrap; // +0x38
    MMCommonUploadResult * _result; // +0x40
    CdnUploadTaskInfo * _taskInfo; // +0x48
    UploadMsgImgResponse * _response; // +0x50
    id <ImageUploadTaskControllerDelegate> _delegate; // +0x58
    MMAsset * _asset; // +0x60
    ImageUploadTaskProcessor * _uploadTask; // +0x68
}
- (id)initWithMsgWrap:(id)arg1 delegate:(id)arg2;
- (id)desc;
- (id)uploadTask;
- (BOOL)isTaskCanStart;
- (void)start;
- (void)stop;
- (void)sendImageMsg;
- (BOOL)onImageSendCGIConnectFail:(id)arg1;
- (void)onImageMsgSendFail:(id)arg1;
- (void)onTaskFail;
- (void)onImageMsgSendSucc:(id)arg1;
- (void)updateTaskKey;
- (id)getMD5;
- (BOOL)isEnableWxamUpload;
- (BOOL)tryCaculateOriginSourceMD5;
- (void)onImageUploadTaskFail:(id)arg1 failReason:(int)arg2 errorCode:(int)arg3;
- (void)onImageUploadTaskSucc:(id)arg1;
- (void)onImageUploadTaskModMsg:(id)arg1;
- (void)onImageUploadTask:(id)arg1 modifyMessageWithBitSet:(unsigned int)arg2;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)isJustUploadDataWithoutMD5Hit;
- (void)setIsJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (BOOL)isCheckExistOnly;
- (void)setIsCheckExistOnly:(BOOL)arg1;
- (BOOL)hadTryCalcPHash;
- (void)setHadTryCalcPHash:(BOOL)arg1;
- (BOOL)isDisableHitCheck;
- (void)setIsDisableHitCheck:(BOOL)arg1;
- (BOOL)isDisableWxam;
- (void)setIsDisableWxam:(BOOL)arg1;
- (BOOL)isWxamIllegal;
- (void)setIsWxamIllegal:(BOOL)arg1;
- (BOOL)isHeicIllegal;
- (void)setIsHeicIllegal:(BOOL)arg1;
- (BOOL)isUseCgi;
- (void)setIsUseCgi:(BOOL)arg1;
- (BOOL)isTaskStopped;
- (void)setIsTaskStopped:(BOOL)arg1;
- (BOOL)isUploadingImageData;
- (void)setIsUploadingImageData:(BOOL)arg1;
- (BOOL)isSendingImageMsg;
- (void)setIsSendingImageMsg:(BOOL)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)setUploadTask:(id)arg1;
- (BOOL)hadCaculateOriginSourceMD5;
- (void)setHadCaculateOriginSourceMD5:(BOOL)arg1;
- (int)failReason;
- (void)setFailReason:(int)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (int)cgiRetryCount;
- (void)setCgiRetryCount:(int)arg1;
- (void).cxx_destruct;
@end
