@interface MJImageLayerViewModel : NSObject
{
    OMJImageLayer * _layer; // +0x8
    id /* block */ _didUpdateHandler; // +0x10
}
- (id)initWithLayer:(id)arg1;
- (id)identifier;
- (unsigned long long)type;
- (BOOL)isRemovable;
- (BOOL)isEditable;
- (id)materialID;
- (BOOL)updateMaterialID:(id)arg1;
- (id)text;
- (BOOL)updateText:(id)arg1;
- (id)placeholder;
- (id)timestamp;
- (id)geoInfo;
- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)arg1;
- (BOOL)updateLocationWithGeoInfo:(id)arg1;
- (CGPoint)layerPosition;
- (void)updateLayerPosition:(CGPoint)arg1;
- (float)layerScale;
- (void)updateLayerScale:(float)arg1;
- (float)layerRotation;
- (void)updateLayerRotation:(float)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)layer;
- (id /* block */)didUpdateHandler;
- (void)setDidUpdateHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
