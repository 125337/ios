@interface CustomRotorElement : UIControl
{
    int _index; // +0x8
    NSString * _nsUrl; // +0x10
    id /* block */ _handler; // +0x18
    CGRect _myFrame; // +0x20
}
- (CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityActivate;
- (int)index;
- (void)setIndex:(int)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (CGRect)myFrame;
- (void)setMyFrame:(CGRect)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

