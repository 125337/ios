@interface WASourceWeappInfo : NSObject
{
    unsigned int _showSourceView; // +0x8
    unsigned int _versionType; // +0xc
    NSString * _appId; // +0x10
    NSString * _nickname; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _enterPath; // +0x28
    NSString * _forwardSceneNote; // +0x30
    unsigned long long _timestamp; // +0x38
}
+ (id)fromXML:(void *)arg1;
- (id)toXML;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (id)forwardSceneNote;
- (void)setForwardSceneNote:(id)arg1;
- (unsigned int)showSourceView;
- (void)setShowSourceView:(unsigned int)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
