@interface WAScreenshotContextInfo : NSObject <PBCoding>
{
    unsigned int _showSourceView; // +0x8
    unsigned int _versionType; // +0xc
    NSString * _assetId; // +0x10
    NSString * _appId; // +0x18
    NSString * _nickname; // +0x20
    NSString * _iconUrl; // +0x28
    NSString * _enterPath; // +0x30
    NSString * _forwardSceneNote; // +0x38
    unsigned long long _timestamp; // +0x40
    NSData * _imageData; // +0x48
    NSString * _imageKey; // +0x50
    id _weakUserInfo; // +0x58
}
+ (void)PBArrayAdd_assetId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_enterPath;
+ (void)PBArrayAdd_forwardSceneNote;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_showSourceView;
+ (void)PBArrayAdd_versionType;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)toXML;
- (id)description;
- (void)setForwardSceneNote:(id)arg1;
- (id)assetId;
- (void)setAssetId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (id)forwardSceneNote;
- (unsigned int)showSourceView;
- (void)setShowSourceView:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)imageKey;
- (void)setImageKey:(id)arg1;
- (id)weakUserInfo;
- (void)setWeakUserInfo:(id)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

