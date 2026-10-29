@interface WCTimeLineAdFlipCardUtils : NSObject
+ (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (id)generateImageViewWithSize:(CGSize)arg1 url:(id)arg2;
+ (double)calcIntroduceViewHeightForCardInfo:(id)arg1;
+ (double)fetchCardWidthWithScene:(unsigned long long)arg1 fixMediaSize:(CGSize)arg2;
+ (double)fetchMediaHeightWithScene:(unsigned long long)arg1 fixMediaSize:(CGSize)arg2;
+ (double)fetchHeightForDataItem:(id)arg1 withScene:(unsigned long long)arg2 fixMediaSize:(CGSize)arg3;
+ (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2 timingFunctions:(id)arg3 values:(id)arg4 keyTimes:(id)arg5;
+ (void)updateViewWidth:(id)arg1 maxWidth:(double)arg2;
@end
