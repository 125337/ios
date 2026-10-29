@interface TPDrmMediaAsset : NSObject <ITPMediaAsset>
{
    TPMediaAssetExtraParam * extraParams; // +0x8
    NSDictionary * httpHeader; // +0x10
    long long _drmType; // +0x18
    NSString * _videoUrl; // +0x20
    NSString * _certificateUrl; // +0x28
    NSString * _contentKeyUrl; // +0x30
    NSString * _cacheDir; // +0x38
    NSString * _drmPropertyUseL1; // +0x40
    NSString * _drmPropertyGuid; // +0x48
    NSString * _drmPropertyPlatform; // +0x50
    NSString * _drmPropertyAppVersion; // +0x58
    NSString * _drmPropertyCookie; // +0x60
}
- (long long)mediaType;
- (id)url;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (long long)drmType;
- (void)setDrmType:(long long)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)certificateUrl;
- (void)setCertificateUrl:(id)arg1;
- (id)contentKeyUrl;
- (void)setContentKeyUrl:(id)arg1;
- (id)cacheDir;
- (void)setCacheDir:(id)arg1;
- (id)drmPropertyUseL1;
- (void)setDrmPropertyUseL1:(id)arg1;
- (id)drmPropertyGuid;
- (void)setDrmPropertyGuid:(id)arg1;
- (id)drmPropertyPlatform;
- (void)setDrmPropertyPlatform:(id)arg1;
- (id)drmPropertyAppVersion;
- (void)setDrmPropertyAppVersion:(id)arg1;
- (id)drmPropertyCookie;
- (void)setDrmPropertyCookie:(id)arg1;
- (void).cxx_destruct;
@end
