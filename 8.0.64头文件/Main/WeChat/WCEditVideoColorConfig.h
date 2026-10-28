@interface WCEditVideoColorConfig : NSObject
{
    NSDictionary * _colorMap; // +0x8
}
+ (id)getColorArray;
- (void)setupColorMapForEmotion;
- (id)init;
- (id)stokeStyleTextColorWithMainColor:(id)arg1;
- (id)stokeStyleLayerColorWithMainColor:(id)arg1;
- (void)setupDefaultColorMap;
- (id)colorMap;
- (void)setColorMap:(id)arg1;
- (void).cxx_destruct;
@end
