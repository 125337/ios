@interface WAPackageDownloadParams : NSObject
{
    BOOL _needGzip; // +0x8
    BOOL _enableDownloadResumption; // +0x9
    NSURL * _downloadUrl; // +0x10
    NSString * _appId; // +0x18
    unsigned long long _version; // +0x20
    unsigned long long _downloadScene; // +0x28
}
- (id)init;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)downloadScene;
- (void)setDownloadScene:(unsigned long long)arg1;
- (BOOL)needGzip;
- (void)setNeedGzip:(BOOL)arg1;
- (BOOL)enableDownloadResumption;
- (void)setEnableDownloadResumption:(BOOL)arg1;
- (void).cxx_destruct;
@end
