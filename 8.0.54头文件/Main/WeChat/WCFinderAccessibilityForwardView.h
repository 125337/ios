@interface WCFinderAccessibilityForwardView : UIView
{
    id _target; // +0x8
    SEL _labelGenerator; // +0x10
}
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)labelGenerator;
- (void)setLabelGenerator:(SEL)arg1;
- (void).cxx_destruct;
@end

