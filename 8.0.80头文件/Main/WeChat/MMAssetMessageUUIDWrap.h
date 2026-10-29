@interface MMAssetMessageUUIDWrap : NSObject <PBCoding>
{
    NSString * _assetID; // +0x8
    NSString * _messageUUID; // +0x10
}
+ (void)PBArrayAdd_assetID;
+ (void)PBArrayAdd_messageUUID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (id)messageUUID;
- (void)setMessageUUID:(id)arg1;
- (void).cxx_destruct;
@end
