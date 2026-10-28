@interface WCFinderHalfScreenHelper : NSObject
+ (id)animatedCtx;
+ (void)setAnimatedCtx:(id)arg1;
+ (void)beginAnimatedWithCtx:(id)arg1 block:(id /* block */)arg2;
+ (void)bindListenAnimProgressFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)getBindObjectModelFromVC:(id)arg1;
+ (id)getBindObjectModelFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)getBindCellModelFromVC:(id)arg1;
+ (BOOL)enableBindHalfByMediaSize:(CGSize)arg1;
+ (BOOL)halfScreenIsDownByLastProgress:(double)arg1 curProgress:(double)arg2;
+ (double)getHalfScreenHeightPercentByMediaWidHeightRatio:(double)arg1;
+ (void)bindHalfMiniAppFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3 handlerWraper:(id)arg4;
+ (void)bindHalfMiniStoreFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3;
+ (id)handleMiniAppEventVCWith:(id)arg1;
@end
