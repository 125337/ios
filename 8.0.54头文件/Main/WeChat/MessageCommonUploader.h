@interface MessageCommonUploader : NSObject <MMCommonCgiUploaderDelegate, MsgDataDownloadDelegate, MMAppAttachFileMgrExt>
{
    BOOL _useWxam; // +0x8
    BOOL _hasCheckBigFile; // +0x9
    id <MessageCommonUploaderDelegate> _delegate; // +0x10
    CMessageWrap * _messageWrap; // +0x18
    long long _scene; // +0x20
    long long _fileType; // +0x28
    NSString * _bigFileSignature; // +0x30
    NSString * _bigFileAesKey; // +0x38
    NSString * _uploadMd5; // +0x40
    double _progress; // +0x48
    NSString * _thumbFileId; // +0x50
    NSString * _thumbAesKey; // +0x58
    NSString * _midFileId; // +0x60
    NSString * _midFileAesKey; // +0x68
    MMCommonCgiUploader * _fileUploader; // +0x70
    long long _currUploadFileType; // +0x78
    MsgDataDownloadLogic * _msgDownloadLogic; // +0x80
    unsigned long long _uploadTotalSize; // +0x88
    long long _midFileType; // +0x90
}
- (id)initWithMessageWrap:(id)arg1;
- (void)startUpload;
- (void)stopUpload;
- (void)startUploadWithCheckDownload:(BOOL)arg1;
- (void)startUploadFileType:(long long)arg1;
- (void)uploadThumbImg;
- (void)uploadMidImg;
- (void)uploadBigImg;
- (void)uploadVideoFile;
- (void)uploadNormalFile;
- (void)onCheckBigFileUploadResult:(BOOL)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)callbackSuccessWithResult:(id)arg1;
- (void)callbackFailureWithUploadId:(id)arg1;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)startDownloadMsgResource;
- (BOOL)isMsgResourceExist;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)fileType;
- (void)setFileType:(long long)arg1;
- (BOOL)useWxam;
- (void)setUseWxam:(BOOL)arg1;
- (id)bigFileSignature;
- (void)setBigFileSignature:(id)arg1;
- (id)bigFileAesKey;
- (void)setBigFileAesKey:(id)arg1;
- (id)uploadMd5;
- (void)setUploadMd5:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)thumbFileId;
- (void)setThumbFileId:(id)arg1;
- (id)thumbAesKey;
- (void)setThumbAesKey:(id)arg1;
- (id)midFileId;
- (void)setMidFileId:(id)arg1;
- (id)midFileAesKey;
- (void)setMidFileAesKey:(id)arg1;
- (id)fileUploader;
- (void)setFileUploader:(id)arg1;
- (long long)currUploadFileType;
- (void)setCurrUploadFileType:(long long)arg1;
- (BOOL)hasCheckBigFile;
- (void)setHasCheckBigFile:(BOOL)arg1;
- (id)msgDownloadLogic;
- (void)setMsgDownloadLogic:(id)arg1;
- (unsigned long long)uploadTotalSize;
- (void)setUploadTotalSize:(unsigned long long)arg1;
- (long long)midFileType;
- (void)setMidFileType:(long long)arg1;
- (void).cxx_destruct;
@end

