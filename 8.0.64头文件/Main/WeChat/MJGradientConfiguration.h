@interface MJGradientConfiguration : NSObject
{
    NSArray * _colors; // +0x8
    NSArray * _locations; // +0x10
    CGPoint _startPoint; // +0x18
    CGPoint _endPoint; // +0x28
}
+ (id)horizontalGradientWithColors:(id)arg1;
+ (id)verticalGradientWithColors:(id)arg1;
- (id)init;
- (id)initWithColors:(id)arg1 locations:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;
- (id)colors;
- (id)locations;
- (CGPoint)startPoint;
- (CGPoint)endPoint;
- (void).cxx_destruct;
@end
