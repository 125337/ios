@interface LOTMaskContainer : CALayer
{
    NSArray * _masks; // +0x8
    NSNumber * _currentFrame; // +0x10
}
- (id)initWithMasks:(id)arg1;
- (void)setCurrentFrame:(id)arg1;
- (id)currentFrame;
- (void).cxx_destruct;
@end
