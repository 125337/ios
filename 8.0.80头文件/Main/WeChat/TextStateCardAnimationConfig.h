@interface TextStateCardAnimationConfig : NSObject
{
    double _initialTranslateY; // +0x8
    double _scale; // +0x10
}
+ (id)startFromTopConfig;
+ (id)startFromCenterConfig;
- (double)initialTranslateY;
- (void)setInitialTranslateY:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
@end
