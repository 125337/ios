@interface TingURTingImageUtilsCpp : UnitRCObjcBaseProxyClass <TingURTingImageUtils>
+ (id)sharedInstance;
- (void)generatePlayerBackground:(id)arg1 imageInfo:(id)arg2 isMusic:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)generateMinibarBackground:(id)arg1 imageInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)imageColorsAsync:(id)arg1 imageInfo:(id)arg2 callback:(id /* block */)arg3;
@end
