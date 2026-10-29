@interface MMFinderLiveUploadMediaItemBase : NSObject
{
    NSString * _uploadTaskId; // +0x8
    NSString * _mediaId; // +0x10
    CdnUploadTaskInfo * _uploadInfo; // +0x18
    NSString * _requestHeader; // +0x20
    unsigned long long _headerParamsType; // +0x28
    unsigned long long _uploadCdnAppType; // +0x30
}
- (id)initWithUploadTaskId:(id)arg1 mediaId:(id)arg2;
- (BOOL)checkFileExist;
- (BOOL)checkCdnUploadEnable;
- (C2CUploadRequest)getCdnUploadHeader;
- (void)setNewUploadInfo:(id)arg1;
- (BOOL)isMediaUploadSuccess;
- (id)uploadTaskId;
- (void)setUploadTaskId:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)uploadInfo;
- (void)setUploadInfo:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (unsigned long long)headerParamsType;
- (void)setHeaderParamsType:(unsigned long long)arg1;
- (unsigned long long)uploadCdnAppType;
- (void)setUploadCdnAppType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
