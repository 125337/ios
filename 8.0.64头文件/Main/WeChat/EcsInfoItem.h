@interface EcsInfoItem : MMObject
{
    int _cardType; // +0x8
    NSString * _realAppId; // +0x10
    unsigned long long _activityId; // +0x18
    unsigned long long _bulkId; // +0x20
    NSString * _ecsJumpInfoBase64; // +0x28
    NSString * _ecmsgSignature; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)isBulkBuy;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (id)realAppId;
- (void)setRealAppId:(id)arg1;
- (unsigned long long)activityId;
- (void)setActivityId:(unsigned long long)arg1;
- (unsigned long long)bulkId;
- (void)setBulkId:(unsigned long long)arg1;
- (id)ecsJumpInfoBase64;
- (void)setEcsJumpInfoBase64:(id)arg1;
- (id)ecmsgSignature;
- (void)setEcmsgSignature:(id)arg1;
- (void).cxx_destruct;
@end
