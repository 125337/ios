@interface MagicBrushTouchEvent : NSObject
{
    unsigned long long _timestamp; // +0x8
    NSArray * _allTouches; // +0x10
    NSArray * _changedTouches; // +0x18
    long long _action; // +0x20
}
+ (id)fromUITouch:(id)arg1 withEvent:(id)arg2 andAction:(long long)arg3 inView:(id)arg4;
- (shared_ptr<magicbrush::MagicBrushTouchEvent>)toCppTouch;
- (id)description;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)allTouches;
- (void)setAllTouches:(id)arg1;
- (id)changedTouches;
- (void)setChangedTouches:(id)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (void).cxx_destruct;
@end
