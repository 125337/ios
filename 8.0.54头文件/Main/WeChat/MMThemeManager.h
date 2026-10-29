@interface MMThemeManager : MMRootService <WCLazyInitObjectProtocol, MMServiceProtocol>
{
    MMTheme * m_currentTheme; // +0x8
    MMColor * m_colorList; // +0x10
    NSCache * m_imageCache; // +0x18
    MMRuleSetList * m_ruleSetList; // +0x20
    int m_ipadCssStyleType; // +0x28
    BOOL haveLazyInit; // +0x2c
    BOOL _hasRegisterLazyInit; // +0x2d
}
+ (id)CheckMark;
+ (id)CheckMarkDisabled;
+ (int)getIpadStyleType;
+ (BOOL)useiPadCss;
+ (BOOL)useiPhone6CssForIpadCompact;
- (void)setImageCacheObject:(id)arg1 forKey:(id)arg2;
- (void)clearImageCache;
- (id)getImageCacheObjectForKey:(id)arg1;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)loadSimpleRuleSets;
- (void)loadRuleSets;
- (BOOL)loadCSSFromPath:(id)arg1 IntoRuleSetList:(id)arg2;
- (void)loadColors;
- (void)reloadThemeResource;
- (BOOL)loadUserPreferedTheme;
- (id)pathOfResNamed:(id)arg1;
- (id)getImageName:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 warnIfNotFound:(BOOL)arg2;
- (id)svgImageNamed:(id)arg1 color:(id)arg2 ignoreNotFound:(BOOL)arg3;
- (id)svgImageNamed:(id)arg1 color:(id)arg2;
- (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
- (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 angle:(int)arg4;
- (id)svgImageDisableNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
- (id)svgImageHighlightNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
- (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4;
- (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5 ignoreNotFound:(BOOL)arg6;
- (id)createSvgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)cacheKeyOfSvgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 angle:(int)arg5;
- (id)imageHighlightNamed:(id)arg1;
- (id)imageDisableNamed:(id)arg1;
- (id)imageNamed:(id)arg1 alpha:(double)arg2;
- (id)imageNamed:(id)arg1 Alpha:(float)arg2 Suffix:(id)arg3;
- (id)imageFromColor:(id)arg1;
- (id)getRuleSetForSeletor:(id)arg1;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2 isAdapt:(BOOL)arg3;
- (id)imageFromSelfCreateImagePath:(id)arg1;
- (void)saveImage:(id)arg1 ToSelfCreateImagePath:(id)arg2;
- (void)clearSelfCreateImage;
- (void)onFirstRun;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (BOOL)returnAsRawService;
- (void)reloadCssForMultiTaskingIfNeed;
- (id)currentTheme;
- (void)setCurrentTheme:(id)arg1;
- (id)colorList;
- (void)setColorList:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)ruleSetList;
- (void)setRuleSetList:(id)arg1;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (BOOL)hasRegisterLazyInit;
- (void)setHasRegisterLazyInit:(BOOL)arg1;
- (void).cxx_destruct;
@end

