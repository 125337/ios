@interface PendantPreviewView : UIView
{
    EditImageAnimatedTextTool * _textView; // +0x8
    long long _previewType; // +0x10
    EmoticonLensDynamicTipView * _actionTipView; // +0x18
    UIImageView * _placeholderImageView; // +0x20
    CAShapeLayer * _maskLayer; // +0x28
    CALayer * _previewLayer; // +0x30
    CGSize _videoSize; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setText:(id)arg1 textColor:(id)arg2 strokeColor:(id)arg3;
- (void)showLensActionTips:(id)arg1;
- (void)setupPreviewLayer:(id)arg1;
- (void)showPlaceholderImage:(id)arg1;
- (void)updateTextPosition;
- (void)updateMaskLayerWithVisiableFrame:(CGRect)arg1 radius:(double)arg2;
- (void)switchScene:(long long)arg1;
- (CGRect)visiableAreaForScene:(long long)arg1;
- (void)setVideoSize:(CGSize)arg1;
- (id)actionTipView;
- (id)textView;
- (void)setTextView:(id)arg1;
- (long long)previewType;
- (void)setPreviewType:(long long)arg1;
- (void)setActionTipView:(id)arg1;
- (id)placeholderImageView;
- (void)setPlaceholderImageView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (CGSize)videoSize;
- (void).cxx_destruct;
@end

