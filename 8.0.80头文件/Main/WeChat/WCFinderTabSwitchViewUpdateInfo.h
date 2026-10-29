@interface WCFinderTabSwitchViewUpdateInfo : NSObject
{
    long long _index; // +0x8
    id _view; // +0x10
    unsigned long long _state; // +0x18
    double * _sprogress; // +0x20
    UIFont * _font; // +0x28
    UIColor * _color; // +0x30
    UIEdgeInsets * _barInset; // +0x38
}
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double *)sprogress;
- (void)setSprogress:(double *)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (UIEdgeInsets *)barInset;
- (void)setBarInset:(UIEdgeInsets *)arg1;
- (void).cxx_destruct;
@end
