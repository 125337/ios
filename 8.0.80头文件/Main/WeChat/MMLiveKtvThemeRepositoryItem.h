@interface MMLiveKtvThemeRepositoryItem : NSObject
{
    MMLiveKtvThemeItem * _themeItem; // +0x8
    NSMutableArray * _callbacks; // +0x10
}
- (id)themeItem;
- (void)setThemeItem:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (void).cxx_destruct;
@end
