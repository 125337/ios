@interface MMMultiButton : MMUIButton
{
    long long _multiButtonState; // +0x8
    UIView * _normalView; // +0x10
    UIView * _touchDownView; // +0x18
}
+ (id /* block */)zz_create;
- (id)zz_setup;
- (id)initWithFrame:(CGRect)arg1;
- (void)initEvents;
- (void)removeControlEvents:(unsigned long long)arg1;
- (void)setTouchDownView:(id)arg1 constraints:(id /* block */)arg2;
- (void)setNormalView:(id)arg1 constraints:(id /* block */)arg2;
- (void)setNormalView:(id)arg1;
- (void)setTouchDownView:(id)arg1;
- (long long)multiButtonState;
- (void)setMultiButtonState:(long long)arg1;
- (id)normalView;
- (id)touchDownView;
- (void).cxx_destruct;
@end

