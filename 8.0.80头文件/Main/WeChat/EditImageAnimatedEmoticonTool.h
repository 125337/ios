@interface EditImageAnimatedEmoticonTool : EditImageAnimatedWidgetTool
{
    UIImageView * m_imageView; // +0x68
    NSString * m_emoticonMd5; // +0x70
    double _imageScale; // +0x78
}
- (void)didSelectEmoticonMd5:(id)arg1;
- (void)resetToFirstFrame;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (id)accessibilityLabel;
- (id)emoticonMd5;
- (double)imageScale;
- (void)setImageScale:(double)arg1;
- (void).cxx_destruct;
@end
