@interface TAVAVAssetTrackResource : TAVResource
{
    AVAsset * _asset; // +0x8
}
- (id)initWithAsset:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)tracksForType:(id)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void).cxx_destruct;
@end
