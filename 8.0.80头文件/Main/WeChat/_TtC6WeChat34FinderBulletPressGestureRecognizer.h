@interface _TtC6WeChat34FinderBulletPressGestureRecognizer : UIGestureRecognizer
{
     minimumPressDuration; // +0x8
     duration; // +0x10
     isLongPress; // +0x18
     isBlockedTouch; // +0x19
     shouldBlockTouch; // +0x20
     touch; // +0x30
     startLocation; // +0x38
     startTimestamp; // +0x48
     confirmationTimer; // +0x50
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void).cxx_destruct;
@end
