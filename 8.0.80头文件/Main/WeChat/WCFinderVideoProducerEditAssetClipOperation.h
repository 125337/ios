@interface WCFinderVideoProducerEditAssetClipOperation : WCFinderVideoProducerBaseOperation
{
    MMAssetInfo * _assetInfo; // +0x8
    long long _assetIndex; // +0x10
    OMJClipSegment * _clipSegment; // +0x18
    long long _editAssetClipType; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (long long)assetIndex;
- (void)setAssetIndex:(long long)arg1;
- (id)clipSegment;
- (void)setClipSegment:(id)arg1;
- (long long)editAssetClipType;
- (void)setEditAssetClipType:(long long)arg1;
- (void).cxx_destruct;
@end
