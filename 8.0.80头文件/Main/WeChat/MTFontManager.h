@interface MTFontManager : NSObject
{
    NSMutableDictionary * _nameToFontMap; // +0x8
}
+ (id)fontManager;
- (id)init;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)latinModernFontWithSize:(double)arg1;
- (id)defaultFont;
- (id)nameToFontMap;
- (void)setNameToFontMap:(id)arg1;
- (void).cxx_destruct;
@end
