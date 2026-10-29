@interface WAPrivacyUsageRecordData : NSObject
{
    unsigned int _timestamp; // +0x8
    NSString * _fromPluginNickName; // +0x10
    NSString * _desc; // +0x18
}
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (id)fromPluginNickName;
- (void)setFromPluginNickName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

