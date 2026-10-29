@interface QBBeaconMixDataUploader : NSObject
{
    BOOL isUploading; // +0x8
    NSString * uploadUrl; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)setMaxSizeDataListener:(id)arg1;
- (BOOL)doUpload;
- (id)getUploadPkg:(long long)arg1 cleanData:(BOOL)arg2;
- (BOOL)deleteUploadData:(id)arg1;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void).cxx_destruct;
- (id)uploadUrl;
- (void)setUploadUrl:(id)arg1;
- (BOOL)isUploading;
- (void)setIsUploading:(BOOL)arg1;
@end

