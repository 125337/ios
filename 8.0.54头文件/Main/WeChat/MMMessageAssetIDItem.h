@interface MMMessageAssetIDItem : NSObject <WCTTableCoding>
{
    long long _messageSvrID; // +0x8
    NSString * _chatName; // +0x10
    NSString * _assetID; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)messageSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_messageSvrID;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)assetID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_assetID;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (long long)messageSvrID;
- (void)setMessageSvrID:(long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (void).cxx_destruct;
@end

