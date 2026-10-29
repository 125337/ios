@interface MMPageSheetFinderHalfHelper : NSObject <WCFinderHalfScreenProtocol>
+ (id)finderHalfScreenViewControllerFromVC:(id)arg1;
+ (BOOL)canBindFinderHalfScreenFromViewController:(id)arg1;
+ (id)finderMediaPlayObjectFromViewController:(id)arg1;
+ (void)monitorAnimationProgressFromVC:(id)arg1 toHalfContainer:(id)arg2;
+ (void)bindFinderHalfScreenFromVC:(id)arg1 toHalfContainer:(id)arg2;
+ (void)handleTTSReadEnabled:(BOOL)arg1 forHalfContainer:(id)arg2;
+ (void)handleHalfScreenDidDismissForHalfContainer:(id)arg1;
@end
