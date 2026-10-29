@interface MMLiveObjectManipulationViewCustomCornerAction : NSObject <MMLiveObjectManipulationViewCornerAction>
{
    UIImage * _icon; // +0x8
    UIColor * _backgroundColor; // +0x10
    NSObject * _accessibilityDescriptor; // +0x18
    id /* block */ _action; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)accessibilityDescriptor;
- (void)setAccessibilityDescriptor:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
