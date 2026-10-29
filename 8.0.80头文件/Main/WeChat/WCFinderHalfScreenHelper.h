@interface WCFinderHalfScreenHelper : NSObject
+ (id)standardOverlayHalfScreenViewControllerFromVC:(id)arg1;
+ (id)animatedCtx;
+ (void)setAnimatedCtx:(id)arg1;
+ (void)beginAnimatedWithCtx:(id)arg1 block:(id /* block */)arg2;
+ (void)bindListenAnimProgressFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)_bindObjectModelFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (void)_notifyHalfScreenMoveProgressWithModel:(id)arg1 progress:(double)arg2;
+ (void)notifyHalfScreenShowStateWithModel:(id)arg1 isShow:(BOOL)arg2 eventType:(unsigned long long)arg3;
+ (void)_notifyHalfScreenShowStateWithModel:(id)arg1 isShow:(BOOL)arg2 eventType:(unsigned long long)arg3 requiredOption:(unsigned long long)arg4;
+ (void)notifyLiteAppHalfScreenVisibleHeightChangedFromVC:(id)arg1 toHalfVC:(id)arg2 currentHeight:(double)arg3 baseHeight:(double)arg4;
+ (void)notifyLiteAppHalfScreenDidCloseFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)getBindObjectModelFromVC:(id)arg1;
+ (id)getBindObjectModelFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)getBindCellModelFromVC:(id)arg1;
+ (BOOL)halfScreenIsDownByLastProgress:(double)arg1 curProgress:(double)arg2;
+ (double)getHalfScreenHeightPercentByMediaWidHeightRatio:(double)arg1;
+ (double)getHalfScreenHeightPercentByMediaWidHeightRatio:(double)arg1 containerSize:(CGSize)arg2;
+ (void)bindHalfMiniAppFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3 handlerWraper:(id)arg4 param:(id)arg5;
+ (void)bindHalfMiniStoreFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3;
+ (id)handleMiniAppEventVCWith:(id)arg1;
@end
