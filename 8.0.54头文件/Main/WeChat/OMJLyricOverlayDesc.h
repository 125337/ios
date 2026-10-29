@interface OMJLyricOverlayDesc : OMJOverlayDesc
{
    NSArray * _lyricInfos; // +0x8
    double _maximumWidth; // +0x10
    NSDictionary * _textStyles; // +0x18
    NSDictionary * _layerStyles; // +0x20
}
- (id)initWithLyricInfos:(id)arg1 maximumWidth:(double)arg2 textStyles:(id)arg3 layerStyles:(id)arg4 spatialInfo:(id)arg5;
- (id)lyricInfos;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;
- (id)textStyles;
- (void)setTextStyles:(id)arg1;
- (id)layerStyles;
- (void)setLayerStyles:(id)arg1;
- (void).cxx_destruct;
@end

