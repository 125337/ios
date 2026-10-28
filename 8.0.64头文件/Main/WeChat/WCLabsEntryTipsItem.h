@interface WCLabsEntryTipsItem : NSObject
{
    WCLabsEntryTipsConfigItem * _config; // +0x8
}
- (id)initWithConfig:(id)arg1;
- (id)tips;
- (id)jumpPluginInfo;
- (id)packetName;
- (int)installPriority;
- (int)installState;
- (void)onShow;
- (long long)compare:(id)arg1;
- (id)description;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
