@interface MJCaptionReportInfo : NSObject
{
    NSString * _clientID; // +0x8
    NSString * _finderUserName; // +0x10
    NSString * _sessionID; // +0x18
    NSString * _postID; // +0x20
    NSString * _editID; // +0x28
    NSMutableDictionary * _assetInfoByIDs; // +0x30
    unsigned long long _userModifyTimeCost; // +0x38
}
- (id)init;
- (id)getOrCreateAssetInfoWithID:(id)arg1;
- (id)getAssetInfoWithID:(id)arg1;
- (void)removeAssetInfoWithID:(id)arg1;
- (void)addUserModifyTimeCost:(unsigned long long)arg1;
- (id)toReportInfoPB;
- (id)toSerializedData;
- (id)description;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)postID;
- (void)setPostID:(id)arg1;
- (id)editID;
- (void)setEditID:(id)arg1;
- (id)assetInfoByIDs;
- (unsigned long long)userModifyTimeCost;
- (void).cxx_destruct;
@end
