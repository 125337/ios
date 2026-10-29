@interface ODSTouchDelegate : NSObject
{
    void * _touchManager; // +0x8
}
- (id)initWithTouchManager:(void *)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@end

