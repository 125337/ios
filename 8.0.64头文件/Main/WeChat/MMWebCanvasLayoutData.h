@interface MMWebCanvasLayoutData : MMObject <PBCoding>
{
    NSString * _layoutStr; // +0x8
    CGRect _frame; // +0x10
}
+ (void)PBArrayAdd_frame;
+ (void)PBArrayAdd_layoutStr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (id)layoutStr;
- (void)setLayoutStr:(id)arg1;
- (void).cxx_destruct;
@end
