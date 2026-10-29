@interface WCAdDynamicFeedCommonUtil : NSObject
+ (id)getValueForOriValue:(id)arg1 fromAdInfo:(id)arg2;
+ (id)substringFor:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
+ (id)invokeGetValueFor:(id)arg1 fromAdInfo:(id)arg2;
+ (id)invokeGetFirstNotBlankValueFor:(id)arg1 fromAdInfo:(id)arg2;
+ (id)getValueForParams:(id)arg1 fromAdInfo:(id)arg2;
+ (id)getDisplayTypeForOriValue:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
+ (id)getLocalImageWithResource:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
+ (CGSize)calculateMediaSizeWithMediaItem:(id)arg1 dataItem:(id)arg2;
+ (CGSize)calculateCardMediaSize;
+ (void)parseAdjustedValues:(id)arg1 dataItem:(id)arg2;
+ (id)calculateAdjustedLength:(id)arg1 dataItem:(id)arg2;
+ (id)calculateAdjustedMargin:(id)arg1 dataItem:(id)arg2;
+ (id)generateLayoutWithDataItem:(id)arg1 animationHandler:(id /* block */)arg2;
+ (id)appendViewWithElementInfo:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3 isLayoutContainer:(BOOL *)arg4;
+ (BOOL)needToGenEmptyLayoutWithElementInfo:(id)arg1;
+ (BOOL)shouldKeepOutOfLayoutForElement:(id)arg1;
+ (BOOL)shouldViewEnabledUserInteractionForElementInfo:(id)arg1 adInfo:(id)arg2;
+ (void)appendLayoutWithContainer:(id)arg1 flex:(void *)arg2 dataItem:(id)arg3 elementInfo:(id)arg4 animationHandler:(id /* block */)arg5;
+ (void)appendLayoutWithContainer:(id)arg1 flex:(void *)arg2 dataItem:(id)arg3 index:(unsigned long long)arg4 elementInfo:(id)arg5 animationHandler:(id /* block */)arg6;
+ (void)layoutCommonItemWithFlex:(void *)arg1 elementInfo:(id)arg2;
+ (id)genLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 lineSpacing:(double)arg4 numberOfLines:(long long)arg5 textAlign:(long long)arg6;
+ (id)genTextViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genImageViewWithElementInfo:(id)arg1 adInfo:(id)arg2 dataItem:(id)arg3 index:(unsigned long long)arg4;
+ (id)genButtonViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genEasyBuyViewWithElementInfo:(id)arg1;
+ (id)genTagViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genSeparatorViewWithElementInfo:(id)arg1;
+ (id)genGridViewWithElementInfo:(id)arg1 adInfo:(id)arg2 dataItem:(id)arg3;
+ (id)genSpecialContainerViewWithElementInfo:(id)arg1;
+ (id)fetchTextFontWithInfo:(id)arg1;
+ (id)fetchTextFontWithInfo:(id)arg1 defaultFontSize:(double)arg2;
+ (double)fetchDynamicCornerRadiusForView:(id)arg1;
+ (void)setAllDynamicCornersToView:(id)arg1 recursive:(BOOL)arg2;
+ (CGSize)calcMediaSizeForMediaItem:(id)arg1 dataItem:(id)arg2 elementInfo:(id)arg3 fitSize:(CGSize)arg4;
+ (BOOL)shouldProcessHitTest:(CGPoint)arg1 withEvent:(id)arg2 forView:(id)arg3;
@end

