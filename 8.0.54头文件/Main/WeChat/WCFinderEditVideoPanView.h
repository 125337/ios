@interface WCFinderEditVideoPanView : UIView
{
    unsigned long long _type; // +0x8
    unsigned long long _index; // +0x10
    UIView * _line; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setup;
- (id)line;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)type;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLine:(id)arg1;
- (void).cxx_destruct;
@end

