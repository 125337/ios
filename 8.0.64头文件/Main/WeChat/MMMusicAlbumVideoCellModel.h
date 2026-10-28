@interface MMMusicAlbumVideoCellModel : MMObject
{
    int _pos; // +0x8
    NSString * _uniqueId; // +0x10
    MMAsset * _asset; // +0x18
    double _duration; // +0x20
    NSString * _localPath; // +0x28
}
- (void)asyncGetDuration:(id /* block */)arg1;
- (void)asyncGetLocalPath:(id /* block */)arg1;
- (BOOL)isValidLocalVideoForPost;
- (BOOL)canSelectVideoWithMinDuration:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMMMusicAlbumVideoCellModel:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (int)pos;
- (void)setPos:(int)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (void).cxx_destruct;
@end
