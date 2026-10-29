@interface WCFinderVideoProducerCandidateAssetContext : NSObject
{
    BOOL _resolved; // +0x8
    NSArray * _assetInfoList; // +0x10
    NSArray * _OMJAssetInfoList; // +0x18
    NSSet * _editedImageFileNameSet; // +0x20
    NSDictionary * _assetPathIdentifierMap; // +0x28
    WCFinderVideoProducerDataManager * _owner; // +0x30
}
- (id)initWithOwner:(id)arg1 assetInfoList:(id)arg2 OMJAssetInfoList:(id)arg3 editedImageFileNameSet:(id)arg4 assetPathIdentifierMap:(id)arg5;
- (id)assetInfoList;
- (void)setAssetInfoList:(id)arg1;
- (id)OMJAssetInfoList;
- (void)setOMJAssetInfoList:(id)arg1;
- (id)editedImageFileNameSet;
- (void)setEditedImageFileNameSet:(id)arg1;
- (id)assetPathIdentifierMap;
- (void)setAssetPathIdentifierMap:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (BOOL)resolved;
- (void)setResolved:(BOOL)arg1;
- (void).cxx_destruct;
@end
