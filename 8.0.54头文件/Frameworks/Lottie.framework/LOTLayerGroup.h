@interface LOTLayerGroup : NSObject
{
    NSDictionary * _modelMap; // +0x8
    NSDictionary * _referenceIDMap; // +0x10
    NSArray * _layers; // +0x18
}
- (id)initWithLayerJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (id)layerModelForID:(id)arg1;
- (id)layerForReferenceID:(id)arg1;
- (id)layers;
- (void).cxx_destruct;
@end

