@interface OMJImageLayer : NSObject
{
    OMJImageScene * _imageScene; // +0x8
    OMJID * _layerID; // +0x10
    unsigned long long _animatedImageEncoderType; // +0x18
    SharedPtr<XMJImageLayer> _xmjLayer; // +0x20
}
- (id)initWithLayerID:(id)arg1 imageScene:(id)arg2;
- (void)dealloc;
- (SharedPtr<XISSegment>)backingSegment;
- (unsigned long long)layerType;
- (id)materialID;
- (id)title;
- (id)subtitle;
- (id)placeholder;
- (BOOL)updateStyleWithMaterialID:(id)arg1;
- (BOOL)updateTitle:(id)arg1;
- (BOOL)updateSubtitle:(id)arg1;
- (id)animatedImageFilePath;
- (unsigned long long)animatedImageDecoderType;
- (unsigned long long)timingFillMode;
- (BOOL)replaceEmoticonWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3;
- (id)timestamp;
- (id)geoInfo;
- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)arg1;
- (BOOL)updateLocationWithGeoInfo:(id)arg1;
- (rect2)_renderViewBounds;
- (CGPoint)layerPosition;
- (BOOL)updateLayerPosition:(CGPoint)arg1;
- (float)layerScale;
- (BOOL)updateLayerScale:(float)arg1;
- (float)layerRotation;
- (BOOL)updateLayerRotation:(float)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)imageScene;
- (id)layerID;
- (unsigned long long)animatedImageEncoderType;
- (SharedPtr<XMJImageLayer>)xmjLayer;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
