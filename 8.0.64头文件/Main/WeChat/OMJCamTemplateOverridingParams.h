@interface OMJCamTemplateOverridingParams : NSObject
{
    OMJBeautyAdjustmentDesc * _beautyDesc; // +0x8
    OMJCamFilterDesc * _filterDesc; // +0x10
    OMJCamMusicDesc * _musicDesc; // +0x18
    NSDictionary * _assetInfosByKey; // +0x20
}
- (id)beautyDesc;
- (void)setBeautyDesc:(id)arg1;
- (id)filterDesc;
- (void)setFilterDesc:(id)arg1;
- (id)musicDesc;
- (void)setMusicDesc:(id)arg1;
- (id)assetInfosByKey;
- (void)setAssetInfosByKey:(id)arg1;
- (void).cxx_destruct;
@end
