@interface WeDropReceiveEventSharedData : WeDropEventSharedData
{
    NSString * _qrContent; // +0x8
    NSString * _taskId; // +0x10
    NSData * _encryptKey; // +0x18
    NSData * _authHello; // +0x20
    unsigned long long _version; // +0x28
    WeDropPrepareSendRequest * _metadata; // +0x30
    UIImage * _thumbnail; // +0x38
    MigrateMsgDeviceInfo * _deviceInfoSelf; // +0x40
    MigrateMsgDeviceInfo * _deviceInfoRemoteAndroid; // +0x48
    NSString * _hotspotSSID; // +0x50
    MigrateMsgUserInfo * _peerInfo; // +0x58
}
- (id)init;
- (id)qrContent;
- (void)setQrContent:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)authHello;
- (void)setAuthHello:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)deviceInfoSelf;
- (void)setDeviceInfoSelf:(id)arg1;
- (id)deviceInfoRemoteAndroid;
- (void)setDeviceInfoRemoteAndroid:(id)arg1;
- (id)hotspotSSID;
- (void)setHotspotSSID:(id)arg1;
- (id)peerInfo;
- (void)setPeerInfo:(id)arg1;
- (void).cxx_destruct;
@end
