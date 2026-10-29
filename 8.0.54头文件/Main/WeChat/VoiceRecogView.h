@interface VoiceRecogView : UIView
{
    BOOL mIsRecording; // +0x8
    id <NSObject> begin_targetor; // +0x10
    SEL begin_selector; // +0x18
    id <NSObject> end_targetor; // +0x20
    SEL end_selector; // +0x28
    BOOL isEndTipAnimation; // +0x30
    int mode; // +0x34
    UIImageView * mBkgView; // +0x38
    UIImageView * mIconView; // +0x40
    UIImageView * mVolumeAnimationView; // +0x48
    NSArray * mLowVolumeImages; // +0x50
    NSArray * mHighVolumeImages; // +0x58
    NSArray * mMiddleVolumeImages; // +0x60
    UIImageView * mRecogAnimationView; // +0x68
}
+ (unsigned int)WidthWithMode:(int)arg1;
+ (unsigned int)HeightWithMode:(int)arg1;
- (BOOL)checkTouchPoint:(CGPoint)arg1 IfInView:(id)arg2;
- (void)normal;
- (void)highlight;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)addBeginRecordTarget:(id)arg1 action:(SEL)arg2;
- (void)addEndRecordTarget:(id)arg1 action:(SEL)arg2;
- (void)touchOnce;
- (void)genVoiceRecogView;
- (void)endTipAnimation;
- (void)startVolumeAnimation;
- (void)stopVolumeAnimation;
- (void)stopVolumeAnimationShouldResetImage:(BOOL)arg1;
- (void)updateVolume:(float)arg1;
- (void)startRecogAnimation;
- (void)stopRecogAnimation;
- (void)stopRecogAnimationShouldResetImage:(BOOL)arg1;
- (void)stopAnimation;
- (void)stopAnimationShouldResetImage:(BOOL)arg1;
- (void)rollbackRecordingStatus;
- (int)mode;
- (void)setMode:(int)arg1;
- (id)mBkgView;
- (void)setMBkgView:(id)arg1;
- (id)mIconView;
- (void)setMIconView:(id)arg1;
- (id)mVolumeAnimationView;
- (void)setMVolumeAnimationView:(id)arg1;
- (id)mLowVolumeImages;
- (void)setMLowVolumeImages:(id)arg1;
- (id)mHighVolumeImages;
- (void)setMHighVolumeImages:(id)arg1;
- (id)mMiddleVolumeImages;
- (void)setMMiddleVolumeImages:(id)arg1;
- (id)mRecogAnimationView;
- (void)setMRecogAnimationView:(id)arg1;
- (void).cxx_destruct;
@end

