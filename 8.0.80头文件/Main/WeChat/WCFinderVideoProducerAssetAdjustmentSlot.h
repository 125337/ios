@interface WCFinderVideoProducerAssetAdjustmentSlot : NSObject
{
    NSString * _slotToken; // +0x8
    MMAssetInfo * _originalAssetInfo; // +0x10
    MMAssetInfo * _stagedReplacementAssetInfo; // +0x18
}
+ (id)slotWithOriginalAssetInfo:(id)arg1;
- (id)initWithOriginalAssetInfo:(id)arg1;
- (id)effectiveAssetInfo;
- (BOOL)isReplacementDirty;
- (id)description;
- (id)slotToken;
- (void)setSlotToken:(id)arg1;
- (id)originalAssetInfo;
- (void)setOriginalAssetInfo:(id)arg1;
- (id)stagedReplacementAssetInfo;
- (void)setStagedReplacementAssetInfo:(id)arg1;
- (void).cxx_destruct;
@end
