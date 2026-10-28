@interface WAJSContextPlugin_Font : WAJSContextPluginBase
{
    NSMutableDictionary * _fontFamilyDic; // +0x8
    NSMutableArray * _loadedFonts; // +0x10
}
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)loadFontWithFamily:(id)arg1 fontData:(id)arg2 desc:(id)arg3 errMsg:(id *)arg4;
- (BOOL)validateFont:(CGFont *)arg1 withDescriptor:(id)arg2;
- (void)unloadAllFont;
- (id)getRealFontFamilyForKey:(id)arg1;
- (void).cxx_destruct;
@end
