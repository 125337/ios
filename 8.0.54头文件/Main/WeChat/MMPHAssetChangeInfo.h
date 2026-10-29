@interface MMPHAssetChangeInfo : NSObject
{
    NSArray * _additionAssetIds; // +0x8
    NSArray * _deleteAssetIds; // +0x10
    long long _latestNewAssetIndex; // +0x18
    long long _changeCount; // +0x20
}
- (id)additionAssetIds;
- (void)setAdditionAssetIds:(id)arg1;
- (id)deleteAssetIds;
- (void)setDeleteAssetIds:(id)arg1;
- (long long)latestNewAssetIndex;
- (void)setLatestNewAssetIndex:(long long)arg1;
- (long long)changeCount;
- (void)setChangeCount:(long long)arg1;
- (void).cxx_destruct;
@end

