@interface SwitchInfoExt : NSObject
{
    SwitchInfo * _switchInfo; // +0x8
    NSString * _bizDesc; // +0x10
    long long _bizId; // +0x18
}
- (id)switchInfo;
- (void)setSwitchInfo:(id)arg1;
- (id)bizDesc;
- (void)setBizDesc:(id)arg1;
- (long long)bizId;
- (void)setBizId:(long long)arg1;
- (void).cxx_destruct;
@end

