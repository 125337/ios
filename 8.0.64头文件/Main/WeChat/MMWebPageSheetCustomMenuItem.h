@interface MMWebPageSheetCustomMenuItem : NSObject
{
    NSString * _title; // +0x8
    UIImage * _iconImage; // +0x10
    id /* block */ _actionBlock; // +0x18
}
- (id)initWithIcon:(id)arg1 title:(id)arg2 actionBlock:(id /* block */)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
