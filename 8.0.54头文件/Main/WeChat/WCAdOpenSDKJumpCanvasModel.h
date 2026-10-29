@interface WCAdOpenSDKJumpCanvasModel : WCAdChannelReportExtendInfoModel
{
    NSString * _appId; // +0x8
    NSString * _canvasId; // +0x10
    NSString * _uxInfo; // +0x18
    unsigned long long _subKey; // +0x20
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned long long)subKey;
- (void)setSubKey:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

