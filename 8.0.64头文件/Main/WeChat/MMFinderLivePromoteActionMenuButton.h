@interface MMFinderLivePromoteActionMenuButton : MenuButton
{
    UIButton * _deleteButton; // +0x8
}
+ (double)preferWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDeleteButton;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setTag:(long long)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (void).cxx_destruct;
@end
