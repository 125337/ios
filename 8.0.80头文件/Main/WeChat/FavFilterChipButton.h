@interface FavFilterChipButton : MMUIButton
{
    BOOL _chipSelected; // +0x8
    BOOL _representsTag; // +0x9
}
+ (double)preferredWidthForTitle:(id)arg1;
+ (id)chipWithTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setChipSelected:(BOOL)arg1;
- (void)applyChipSelectedStyle:(BOOL)arg1;
- (BOOL)isChipSelected;
- (BOOL)representsTag;
- (void)setRepresentsTag:(BOOL)arg1;
@end
