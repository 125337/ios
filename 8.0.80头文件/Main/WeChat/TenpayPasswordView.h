@interface TenpayPasswordView : UIView
{
    UIView *[6] RoundCell; // +0x8
    long long CurrentInputNum; // +0x38
    UIColor * FillColor; // +0x40
    UIColor * EmptyColor; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 bgImage:(id)arg2;
- (id)RoundCell:(int)arg1;
- (void)SetFillColor:(id)arg1 emptyColor:(id)arg2;
- (void)SetInputNum:(long long)arg1;
- (void)dealloc;
@end
