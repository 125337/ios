@interface TSInputTracker : NSObject <TSTouchMotionEventTracker>
{
    TSMotionTracker * _motionTracker; // +0x8
    UIView * _attachedView; // +0x10
    TSTouchTrackRecognizer * _trackRecognizer; // +0x18
}
- (id)findKeyboardWindow;
- (id)findViewInView:(id)arg1 ofClass:(Class)arg2;
- (id)findUIKBKeyplaneViewInView:(id)arg1;
- (id)findUIInputSetHostViewInView:(id)arg1;
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)motionTracker;
- (void)setMotionTracker:(id)arg1;
- (id)attachedView;
- (void)setAttachedView:(id)arg1;
- (id)trackRecognizer;
- (void)setTrackRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

