@interface AddAvatarUploadImageTask : NSObject <PBMessageObserverDelegate, ICdnComMgrExt>
{
    unsigned int _state; // +0x8
    id <AddAvatarUploadImageTaskDelegate> _delegate; // +0x10
    NSString * _appId; // +0x18
    UIImage * _uploadImage; // +0x20
    NSString * _uploadFileName; // +0x28
    NSString * _tmpFilePath; // +0x30
    NSString * _imageCdnUrl; // +0x38
    NSString * _imageCdnFileId; // +0x40
}
- (void)dealloc;
- (id)initWithAppId:(id)arg1;
- (BOOL)startUploadByImage:(id)arg1;
- (BOOL)startUploadByImageCdnUrl:(id)arg1;
- (void)cancelUpload;
- (void)setState:(unsigned int)arg1;
- (void)reset;
- (void)OnCdnUpload:(id)arg1;
- (void)sendAddAvatarHeadImageReq;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAddAvatarHeadImgResp:(id)arg1;
- (unsigned int)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)uploadImage;
- (void)setUploadImage:(id)arg1;
- (id)uploadFileName;
- (void)setUploadFileName:(id)arg1;
- (id)tmpFilePath;
- (void)setTmpFilePath:(id)arg1;
- (id)imageCdnUrl;
- (void)setImageCdnUrl:(id)arg1;
- (id)imageCdnFileId;
- (void)setImageCdnFileId:(id)arg1;
- (void).cxx_destruct;
@end

