@interface WCAdDynamicCanvasPackageUpdateReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned long long _errorCode; // +0x8
    NSString * _currentVersion; // +0x10
}
- (unsigned long long)errorCode;
- (void)setErrorCode:(unsigned long long)arg1;
- (id)currentVersion;
- (void)setCurrentVersion:(id)arg1;
- (void).cxx_destruct;
@end

