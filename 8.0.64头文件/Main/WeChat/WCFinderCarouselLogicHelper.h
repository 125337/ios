@interface WCFinderCarouselLogicHelper : NSObject
+ (void)enumerateCarouselTypeWithPriorityUsingBlock:(id /* block */)arg1;
+ (BOOL)canShowCarouselWithConfig:(id)arg1;
+ (BOOL)canShowHotCommentWithConfig:(id)arg1;
+ (BOOL)canShowJumpCarouselGuideWithConfig:(id)arg1;
+ (BOOL)canShowMediaCommentWithConfig:(id)arg1;
+ (BOOL)canShowMultiImageCommentWithConfig:(id)arg1;
+ (BOOL)canShowRingToneGuideWithConfig:(id)arg1;
+ (BOOL)_clientCanShowRingtoneGuideWithConfig:(id)arg1;
+ (BOOL)enableShowTargetCarouselView:(unsigned long long)arg1 logicEnable:(BOOL)arg2 checkShowCarouselFlag:(BOOL)arg3 config:(id)arg4;
+ (unsigned long long)getResultCarouselTypeWithContentVMWithConfig:(id)arg1;
+ (unsigned long long)getCurrentCarouselTypeWithContentVMWithConfig:(id)arg1;
+ (unsigned long long)getCarouselViewShowTypeWithConfig:(id)arg1 checkShowCarouselFlag:(BOOL)arg2;
@end
