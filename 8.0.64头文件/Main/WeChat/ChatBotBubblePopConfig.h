@interface ChatBotBubblePopConfig : NSObject
{
    NSString * _contentText; // +0x8
    UIImage * _image; // +0x10
    UIColor * _bubbleColor; // +0x18
    UIColor * _viewBackgroundColor; // +0x20
    double _viewDiameter; // +0x28
    double _imageDiameter; // +0x30
    double _cornerRadius; // +0x38
    double _contentTextLeft; // +0x40
    UIColor * _contentTextColor; // +0x48
    double _contentTextSize; // +0x50
    double _expansionFactor; // +0x58
    double _popAnimationDuration; // +0x60
    double _disMissAnimationDelay; // +0x68
    double _disMissAnimationDuration; // +0x70
}
- (id)init;
- (id)contentText;
- (void)setContentText:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)bubbleColor;
- (void)setBubbleColor:(id)arg1;
- (id)viewBackgroundColor;
- (void)setViewBackgroundColor:(id)arg1;
- (double)viewDiameter;
- (void)setViewDiameter:(double)arg1;
- (double)imageDiameter;
- (void)setImageDiameter:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)contentTextLeft;
- (void)setContentTextLeft:(double)arg1;
- (id)contentTextColor;
- (void)setContentTextColor:(id)arg1;
- (double)contentTextSize;
- (void)setContentTextSize:(double)arg1;
- (double)expansionFactor;
- (void)setExpansionFactor:(double)arg1;
- (double)popAnimationDuration;
- (void)setPopAnimationDuration:(double)arg1;
- (double)disMissAnimationDelay;
- (void)setDisMissAnimationDelay:(double)arg1;
- (double)disMissAnimationDuration;
- (void)setDisMissAnimationDuration:(double)arg1;
- (void).cxx_destruct;
@end
