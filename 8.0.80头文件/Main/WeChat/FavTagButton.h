@interface FavTagButton : MMUIButton
{
    BOOL _isChosen; // +0x8
    double _preferredWidth; // +0x10
}
- (BOOL)isChosen;
- (void)setIsChosen:(BOOL)arg1;
- (double)preferredWidth;
- (void)setPreferredWidth:(double)arg1;
@end
