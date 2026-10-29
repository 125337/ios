@interface WeDropSendEventSharedData : WeDropEventSharedData
{
    int _remoteDevicePlatform; // +0x8
    NSString * _qrContent; // +0x10
    MigrateMsgDeviceInfo * _remoteDeviceInfo; // +0x18
    NSString * _taskId; // +0x20
    NSData * _encryptKey; // +0x28
    NSData * _authHello; // +0x30
    unsigned long long _version; // +0x38
    MigrateMsgUserInfo * _userInfoRemote; // +0x40
    NSString * _hotspotSSID; // +0x48
    NSString * _startLocalNetworkTaskId; // +0x50
    NSMutableArray * _selectedFiles; // +0x58
    NSData * _thumbnailData; // +0x60
    unsigned long long _totalBytesNeedsToSend; // +0x68
}
- (id)init;
- (id)qrContent;
- (void)setQrContent:(id)arg1;
- (id)remoteDeviceInfo;
- (void)setRemoteDeviceInfo:(id)arg1;
- (int)remoteDevicePlatform;
- (void)setRemoteDevicePlatform:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)authHello;
- (void)setAuthHello:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)userInfoRemote;
- (void)setUserInfoRemote:(id)arg1;
- (id)hotspotSSID;
- (void)setHotspotSSID:(id)arg1;
- (id)startLocalNetworkTaskId;
- (void)setStartLocalNetworkTaskId:(id)arg1;
- (id)selectedFiles;
- (void)setSelectedFiles:(id)arg1;
- (id)thumbnailData;
- (void)setThumbnailData:(id)arg1;
- (unsigned long long)totalBytesNeedsToSend;
- (void)setTotalBytesNeedsToSend:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
