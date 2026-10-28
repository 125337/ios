@interface GameCenterMsgAppInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _appName; // +0x10
    NSString * _entranceText; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _downloadUrl; // +0x28
}
+ (id)parseFromXml:(XmlReaderNode_t *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)entranceText;
- (void)setEntranceText:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (void).cxx_destruct;
@end
