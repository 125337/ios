@interface WADeviceVoipAuthDeviceItem : NSObject
{
    unsigned int _status; // +0x8
    NSString * _appId; // +0x10
    NSString * _modelId; // +0x18
    NSString * _sn; // +0x20
    NSString * _name; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)modelId;
- (void)setModelId:(id)arg1;
- (id)sn;
- (void)setSn:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
