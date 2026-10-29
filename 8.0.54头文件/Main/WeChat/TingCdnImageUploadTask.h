@interface TingCdnImageUploadTask : NSObject
{
    BOOL _startCdnUpload; // +0x8
    BOOL _uploadCDNSuccessful; // +0x9
    int _retCode; // +0xc
    NSString * _clientID; // +0x10
    NSString * _uploadLocalImageURL; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _coverMd5; // +0x28
}
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)uploadLocalImageURL;
- (void)setUploadLocalImageURL:(id)arg1;
- (BOOL)startCdnUpload;
- (void)setStartCdnUpload:(BOOL)arg1;
- (BOOL)uploadCDNSuccessful;
- (void)setUploadCDNSuccessful:(BOOL)arg1;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverMd5;
- (void)setCoverMd5:(id)arg1;
- (void).cxx_destruct;
@end

