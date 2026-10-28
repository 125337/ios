@interface WAThemeProxy : NSObject <IWAThemeService>
+ (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
+ (id)getRuleSetForSeletor:(id)arg1;
+ (id)getColorByName:(id)arg1;
+ (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 alpha:(double)arg2;
+ (id)imageHighlightNamed:(id)arg1;
+ (id)imageDisableNamed:(id)arg1;
+ (id)imageFromColor:(id)arg1;
+ (id)svgImageFromData:(id)arg1;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2;
+ (id)svgImageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (id)svgImageHighlightNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (id)svgImageDisableNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (id)getImageName:(id)arg1;
+ (id)pathOfResNamed:(id)arg1;
+ (void)reloadCssForMultiTaskingIfNeed;
@end
