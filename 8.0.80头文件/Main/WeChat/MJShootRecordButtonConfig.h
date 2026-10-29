@interface MJShootRecordButtonConfig : NSObject
{
    double _borderViewInitialWidth; // +0x8
    double _middleViewInitialWidth; // +0x10
    double _borderViewProcessingWidth; // +0x18
    double _middleViewProcessingWidth; // +0x20
    double _layerBorderInitialWidth; // +0x28
    double _layerBorderProcessingWidth; // +0x30
    UIColor * _borderViewInitialColor; // +0x38
    UIColor * _borderViewProcessingColor; // +0x40
    UIColor * _middleViewColor; // +0x48
}
+ (id)mjConfig;
+ (id)wcConfig;
+ (id)build;
- (double)borderViewInitialWidth;
- (void)setBorderViewInitialWidth:(double)arg1;
- (double)middleViewInitialWidth;
- (void)setMiddleViewInitialWidth:(double)arg1;
- (double)borderViewProcessingWidth;
- (void)setBorderViewProcessingWidth:(double)arg1;
- (double)middleViewProcessingWidth;
- (void)setMiddleViewProcessingWidth:(double)arg1;
- (double)layerBorderInitialWidth;
- (void)setLayerBorderInitialWidth:(double)arg1;
- (double)layerBorderProcessingWidth;
- (void)setLayerBorderProcessingWidth:(double)arg1;
- (id)borderViewInitialColor;
- (void)setBorderViewInitialColor:(id)arg1;
- (id)borderViewProcessingColor;
- (void)setBorderViewProcessingColor:(id)arg1;
- (id)middleViewColor;
- (void)setMiddleViewColor:(id)arg1;
- (void).cxx_destruct;
@end
