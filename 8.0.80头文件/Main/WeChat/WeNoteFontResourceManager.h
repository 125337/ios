@interface WeNoteFontResourceManager : NSObject
{
    BOOL _hasRegisteredFont; // +0x8
}
+ (id)sharedInstance;
+ (id)hanyiXuanSongFontOfSize:(double)arg1;
- (id)getFontResourcePath;
- (void)checkAndUpdateFontResourceWithCompletion:(id /* block */)arg1;
- (int)getResourceVersion;
- (BOOL)isResourceExist;
- (BOOL)hasRegisteredFont;
- (void)setHasRegisteredFont:(BOOL)arg1;
@end
