@interface _TtC9WeAppCore18WASiderbarItemData : NSObject
{
    void * username; // +0x8
     appId; // +0x18
     appNickName; // +0x28
     appIconUrl; // +0x38
    unsigned long long debugMode; // +0x48
     referText; // +0x50
     extraData; // +0x60
    long long updateTime; // +0x70
    unsigned int appServiceType; // +0x78
}
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (id)init;
- (void).cxx_destruct;
@end
