@interface EditImageWidgetState : NSObject <NSCoding, NSCopying>
{
    unsigned long long _widgetEditImageUIStyle; // +0x8
    UIColor * _widgetBackgroundColor; // +0x10
    UIColor * _widgetShadowColor; // +0x18
    double _widgetOpacity; // +0x20
    double _widgetViewRadius; // +0x28
    CGPoint _widgetCenter; // +0x30
    CGPoint _widgetAnchor; // +0x40
    CGSize _widgetShadowOffset; // +0x50
    CGRect _canvasFrame; // +0x60
    CGRect _widgetFrame; // +0x80
    CGAffineTransform _widgetTransform; // +0xa0
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (CGRect)canvasFrame;
- (void)setCanvasFrame:(CGRect)arg1;
- (unsigned long long)widgetEditImageUIStyle;
- (void)setWidgetEditImageUIStyle:(unsigned long long)arg1;
- (CGRect)widgetFrame;
- (void)setWidgetFrame:(CGRect)arg1;
- (CGPoint)widgetCenter;
- (void)setWidgetCenter:(CGPoint)arg1;
- (CGPoint)widgetAnchor;
- (void)setWidgetAnchor:(CGPoint)arg1;
- (CGAffineTransform)widgetTransform;
- (void)setWidgetTransform:(CGAffineTransform)arg1;
- (id)widgetBackgroundColor;
- (void)setWidgetBackgroundColor:(id)arg1;
- (id)widgetShadowColor;
- (void)setWidgetShadowColor:(id)arg1;
- (CGSize)widgetShadowOffset;
- (void)setWidgetShadowOffset:(CGSize)arg1;
- (double)widgetOpacity;
- (void)setWidgetOpacity:(double)arg1;
- (double)widgetViewRadius;
- (void)setWidgetViewRadius:(double)arg1;
- (void).cxx_destruct;
@end

