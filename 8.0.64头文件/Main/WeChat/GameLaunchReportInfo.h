@interface GameLaunchReportInfo : NSObject
{
    BOOL _useInstallUrl; // +0x8
    NSString * _appId; // +0x10
    NSString * _url; // +0x18
    NSDictionary * _channelReportExtInfo; // +0x20
}
+ (id)reportInfoWithAppId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)channelReportExtInfo;
- (void)setChannelReportExtInfo:(id)arg1;
- (BOOL)useInstallUrl;
- (void)setUseInstallUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end
