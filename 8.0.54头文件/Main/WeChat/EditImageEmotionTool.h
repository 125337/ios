@interface EditImageEmotionTool : EditImageWidgetTool
{
    double _imgWidth; // +0x68
    double _imgHeight; // +0x70
    UIImageView * _imageView; // +0x78
    double _zoomScaleWhenInit; // +0x80
    BOOL _animatable; // +0x88
    NSString * _emotionMd5; // +0x90
    NSString * _emotionSearchKey; // +0x98
}
+ (id)generateWidgetFromState:(id)arg1;
- (void)didSelectEmotion:(id)arg1 withCenterPoint:(CGPoint)arg2 md5:(id)arg3;
- (void)_removeAnimateFromImageView;
- (void)_genAnimateForImageView;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (void)freezeWidget;
- (void)reviveWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)resetWidget;
- (id)exportAnimatedLayer;
- (id)exportWidgetStateForEditorFrame:(CGRect)arg1 assetPreviewFrame:(CGRect)arg2;
- (id)emotionMd5;
- (void)setEmotionMd5:(id)arg1;
- (id)emotionSearchKey;
- (void)setEmotionSearchKey:(id)arg1;
- (BOOL)animatable;
- (void)setAnimatable:(BOOL)arg1;
- (void).cxx_destruct;
@end

