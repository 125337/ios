@interface WAPageSheetAdapter : MMPageSheetAdapter
{
    CGSize _superViewSize; // +0x8
}
+ (id)adapterWithViewController:(id)arg1 height:(double)arg2;
+ (id)adatperWithView:(id)arg1 height:(double)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (double)pageSheetContentWidth;
- (CGSize)superViewSize;
- (void)setSuperViewSize:(CGSize)arg1;
@end
