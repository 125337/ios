@interface MMMusicNoDotSelectItemViewModel : MMObject
{
    NSString * _uniqueId; // +0x8
    MMAsset * _asset; // +0x10
    NSString * _assetLocalPath; // +0x18
    NSString * _tid; // +0x20
    NSString * _nonceId; // +0x28
    NSString * _finderCoverUrl; // +0x30
    double _duration; // +0x38
    WCFinderDataItem * _draftFinderDataItem; // +0x40
    MMMusicFinderVideoCellModel * _finderVideoCellModel; // +0x48
    unsigned long long _index; // +0x50
}
+ (id)modelFromMMMusicAlbumVideoCellModel:(id)arg1;
+ (id)modelFromMMMusicFinderVideoCellModel:(id)arg1;
+ (id)modelFromTid:(id)arg1 nonceId:(id)arg2;
- (void)preLoad;
- (id)genMMMusicMVTrackItemLocalVideo;
- (BOOL)isDraftItem;
- (id)genMMMusicMVTrackItemLocalPic;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMMMusicNoDotSelectItemViewModel:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)assetLocalPath;
- (void)setAssetLocalPath:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)finderCoverUrl;
- (void)setFinderCoverUrl:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)draftFinderDataItem;
- (void)setDraftFinderDataItem:(id)arg1;
- (id)finderVideoCellModel;
- (void)setFinderVideoCellModel:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

