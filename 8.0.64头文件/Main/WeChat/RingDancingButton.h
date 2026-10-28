@interface RingDancingButton : UIButton
{
     text; // +0x8
     imageWidth; // +0x18
     leftRigntMargin; // +0x20
     centerSpace; // +0x28
     textFont; // +0x30
     $__lazy_storage_$_textWidth; // +0x38
}
- (void)pauseAnimation;
- (void)resumeAnimation;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
