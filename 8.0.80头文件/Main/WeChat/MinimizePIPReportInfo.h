@interface MinimizePIPReportInfo : NSObject
{
    long long _pipBiz; // +0x8
    NSString * _mediaId; // +0x10
    NSString * _appId; // +0x18
}
- (long long)pipBiz;
- (void)setPipBiz:(long long)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
