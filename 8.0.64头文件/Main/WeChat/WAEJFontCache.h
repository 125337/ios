@interface WAEJFontCache : NSObject
{
    NSMutableDictionary * fonts; // +0x8
    NSMutableDictionary * gfxFonts; // +0x10
    NSThread * thread; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doClearFonts;
- (id)fontWithDescriptor:(id)arg1 contentScale:(float)arg2 isWgfxMode:(BOOL)arg3;
- (id)outlineFontWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3 isWgfxMode:(BOOL)arg4;
- (id)fontWithDescriptor:(id)arg1 contentScale:(float)arg2;
- (id)outlineFontWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3;
@end
