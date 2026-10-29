@interface MinimizationUtil : NSObject
+ (id)allTaskBizNameDefines;
+ (void)minimizationTapic;
+ (void)minimizationTapic:(BOOL)arg1;
+ (void)minimizationVoiceTic;
+ (id)addGradientLayer:(id)arg1 Color:(id)arg2;
+ (id)addShadowLayer:(id)arg1 WithPath:(id)arg2 ShadowRadius:(double)arg3 ShadowOffset:(CGSize)arg4 ShadowColor:(id)arg5;
+ (id)getShadowMaskPath:(CGRect)arg1 WithPath:(id)arg2 ShadowRadius:(double)arg3 ShadowOffset:(CGSize)arg4;
+ (void)animateShadowLayer:(id)arg1 ToView:(id)arg2 ToPath:(id)arg3 Duration:(double)arg4;
+ (void)resetShadowLayer:(id)arg1 ToView:(id)arg2 ToPath:(id)arg3;
+ (id)genShadowView:(CGRect)arg1 FinalPath:(id)arg2;
+ (void)animateSubLayer:(id)arg1 ToPath:(id)arg2 Duration:(double)arg3;
+ (void)animateSubLayer:(id)arg1 CornerRadius:(double)arg2 Duration:(double)arg3;
+ (id)genInnerTaskKey:(id)arg1 TaskBizKey:(id)arg2;
+ (id)genColorWithImage:(id)arg1;
+ (id)minimizeTaskDocumentDir;
+ (id)minimizeNormalTaskListPath;
+ (id)minimizeAdsorbFloatingViewInfoPath;
+ (BOOL)hasOuterContentTask:(id)arg1;
+ (BOOL)isAudioStateContentTask:(id)arg1;
+ (BOOL)isStateTask:(id)arg1;
+ (BOOL)isMultiOuterContentTask:(id)arg1;
+ (BOOL)hasStoredTask:(id)arg1 taskKey:(id)arg2;
+ (id)findAllInstanceOfClass:(Class)arg1 inView:(id)arg2;
@end
