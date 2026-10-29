@interface WCAdRandomSelectCardUtils : NSObject
+ (double)calcScaledLengthWith:(double)arg1 maxWidth:(double)arg2;
+ (double)calcScaledFloatWith:(double)arg1 maxWidth:(double)arg2;
+ (double)calcFontSizeWith:(double)arg1 maxWidth:(double)arg2;
+ (double)calcScaleRatio:(double)arg1;
+ (double)calcBannerViewHeightWith:(id)arg1 maxWidth:(double)arg2;
+ (long long)fetchImageContentMode;
+ (id)fetchImageViewWithUrl:(id)arg1;
+ (id)fetchImageViewWithUrl:(id)arg1 darkUrl:(id)arg2;
+ (id)fetchLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (BOOL)updateLabel:(id)arg1 withNewWording:(id)arg2;
+ (id)fetchKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2 timingFunctions:(id)arg3 values:(id)arg4 keyTimes:(id)arg5;
+ (id)fetchOpacityAnimationFrom:(double)arg1 to:(double)arg2 duration:(double)arg3;
@end
