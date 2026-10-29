@interface WCFinderProfileCoverUploadTask : NSObject
{
    NSString * _mediaUrl; // +0x8
    NSString * _mediaMd5; // +0x10
    NSString * _clientID; // +0x18
    NSString * _uploadMediaLocalURL; // +0x20
}
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)mediaMd5;
- (void)setMediaMd5:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)uploadMediaLocalURL;
- (void)setUploadMediaLocalURL:(id)arg1;
- (void).cxx_destruct;
@end

