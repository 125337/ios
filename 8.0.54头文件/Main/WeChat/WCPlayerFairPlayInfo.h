@interface WCPlayerFairPlayInfo : NSObject
{
    BOOL _drmCompatible; // +0x8
    NSString * _certificateUrl; // +0x10
    NSString * _contentKeyUrl; // +0x18
}
- (id)init;
- (id)certificateUrl;
- (void)setCertificateUrl:(id)arg1;
- (id)contentKeyUrl;
- (void)setContentKeyUrl:(id)arg1;
- (BOOL)drmCompatible;
- (void)setDrmCompatible:(BOOL)arg1;
- (void).cxx_destruct;
@end

