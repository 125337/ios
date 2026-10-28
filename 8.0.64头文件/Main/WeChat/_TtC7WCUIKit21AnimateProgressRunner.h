@interface _TtC7WCUIKit21AnimateProgressRunner : NSObject
{
     complete; // +0x8
     updateProgress; // +0x18
     timePassed; // +0x28
     duration; // +0x30
     isReversed; // +0x38
     displayLink; // +0x40
}
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id /* block */)updateProgress;
- (void)setUpdateProgress:(id /* block */)arg1;
- (void)displayUpdate:(id)arg1;
- (void)startWithTimePassed:(double)arg1 totalTime:(double)arg2 reverse:(BOOL)arg3;
- (id)init;
- (void).cxx_destruct;
@end
