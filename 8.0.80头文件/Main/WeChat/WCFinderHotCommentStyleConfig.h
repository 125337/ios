@interface WCFinderHotCommentStyleConfig : NSObject
{
    BOOL _containerMasksToBounds; // +0x8
    double _containerHorMargin; // +0x10
    double _contentHorPadding; // +0x18
    double _contentVerPadding; // +0x20
    double _hotwordLabelTrailing; // +0x28
    UIColor * _containerBackgroundColor; // +0x30
    double _containerCornerRadius; // +0x38
    UIColor * _hotwordLabelBackgroundColor; // +0x40
    UIColor * _textColor; // +0x48
    UIColor * _textShadowColor; // +0x50
    UIColor * _hotwordLabelTextColor; // +0x58
}
- (double)containerHorMargin;
- (void)setContainerHorMargin:(double)arg1;
- (double)contentHorPadding;
- (void)setContentHorPadding:(double)arg1;
- (double)contentVerPadding;
- (void)setContentVerPadding:(double)arg1;
- (double)hotwordLabelTrailing;
- (void)setHotwordLabelTrailing:(double)arg1;
- (id)containerBackgroundColor;
- (void)setContainerBackgroundColor:(id)arg1;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg1;
- (id)hotwordLabelBackgroundColor;
- (void)setHotwordLabelBackgroundColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)textShadowColor;
- (void)setTextShadowColor:(id)arg1;
- (id)hotwordLabelTextColor;
- (void)setHotwordLabelTextColor:(id)arg1;
- (BOOL)containerMasksToBounds;
- (void)setContainerMasksToBounds:(BOOL)arg1;
- (void).cxx_destruct;
@end
