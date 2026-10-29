@interface EcsInfoItem : MMObject
{
    int _cardType; // +0x8
    int _cardVersion; // +0xc
    int _fetchAndPreloadFlags; // +0x10
    NSString * _realAppId; // +0x18
    unsigned long long _activityId; // +0x20
    unsigned long long _bulkId; // +0x28
    NSString * _ecsJumpInfoBase64; // +0x30
    NSString * _frontendJumpInfoBase64; // +0x38
    NSString * _ecmsgSignature; // +0x40
    NSString * _sceneNote; // +0x48
    NSString * _reportData; // +0x50
    NSString * _bizReportData; // +0x58
    NSString * _friendReceiveTitle; // +0x60
    NSString * _friendReceiveDesc; // +0x68
    NSString * _friendReceiveSourceName; // +0x70
    NSString * _friendReceiveImageUrl; // +0x78
    NSString * _passBuffer; // +0x80
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)isBulkBuy;
- (BOOL)isFriendReceiveCard;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (int)cardVersion;
- (void)setCardVersion:(int)arg1;
- (id)realAppId;
- (void)setRealAppId:(id)arg1;
- (unsigned long long)activityId;
- (void)setActivityId:(unsigned long long)arg1;
- (unsigned long long)bulkId;
- (void)setBulkId:(unsigned long long)arg1;
- (id)ecsJumpInfoBase64;
- (void)setEcsJumpInfoBase64:(id)arg1;
- (id)frontendJumpInfoBase64;
- (void)setFrontendJumpInfoBase64:(id)arg1;
- (id)ecmsgSignature;
- (void)setEcmsgSignature:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)bizReportData;
- (void)setBizReportData:(id)arg1;
- (id)friendReceiveTitle;
- (void)setFriendReceiveTitle:(id)arg1;
- (id)friendReceiveDesc;
- (void)setFriendReceiveDesc:(id)arg1;
- (id)friendReceiveSourceName;
- (void)setFriendReceiveSourceName:(id)arg1;
- (id)friendReceiveImageUrl;
- (void)setFriendReceiveImageUrl:(id)arg1;
- (id)passBuffer;
- (void)setPassBuffer:(id)arg1;
- (int)fetchAndPreloadFlags;
- (void)setFetchAndPreloadFlags:(int)arg1;
- (void).cxx_destruct;
@end
