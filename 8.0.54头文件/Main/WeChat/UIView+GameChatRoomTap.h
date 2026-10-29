@interface UIView (GameChatRoomTap)
+ (id)gcSvgImgWithData:(id)arg1 color:(id)arg2 size:(CGSize)arg3 dynamicImg:(BOOL)arg4;
- (id)gcAddTapGestureWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)gcAddTapGesture:(id)arg1;
- (id)gcAddTapGestureWithBlock:(id /* block */)arg1;
- (void)setViewAlphaGradientToPosition:(double)arg1 topAlpha:(double)arg2 bottomAlpha:(double)arg3 color:(id)arg4;
- (void)darkenWithImageTopAlpha:(double)arg1 bottomAlpha:(double)arg2;
- (void)configureChatRoomDarkStyleForIsCustomImg:(BOOL)arg1;
- (void)removeChatRoomDarkStyle;
- (BOOL)gcIsViewVisible:(id)arg1;
- (double)verticalAlignVisibleSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3;
- (id)verticalAlignLayoutConfigWithSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3 left:(double)arg4 maxWidth:(double)arg5;
- (double)verticalAlignVisibleSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3 left:(double)arg4 maxWidth:(double)arg5;
- (double)verticalAlignVisibleSubViewWithConfig:(id)arg1;
- (void)expandSubviewWidthToFill;
- (double)gcMinLayoutWidth;
- (double)gcFelxibleLayoutWidth;
- (id)fixPointWidthArrayFromViewArray:(id)arg1;
- (id)flexiblePointWidthArrayFromViewArray:(id)arg1;
- (double)totalNumFrom:(id)arg1;
- (void)shrinkSubViews:(id)arg1 maxWidth:(double)arg2 space:(double)arg3;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 fromLeft:(double)arg4;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 fromLeft:(double)arg4 lineSpace:(double)arg5 alignStrategy:(unsigned long long)arg6;
- (id)gcVisibleSubViewsForViewArray:(id)arg1;
- (id)gcVisibleSubViews;
- (void)horiAlignWithLayoutConfig:(id)arg1;
- (id)gcSvgImgWithStr:(id)arg1;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 size:(CGSize)arg3;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 dynamicImg:(BOOL)arg3;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 size:(CGSize)arg3 dynamicImg:(BOOL)arg4;
- (id)gcSvgImgWithStr:(id)arg1 darkModeStr:(id)arg2;
- (id)gcEmoticonImg;
- (id)gcLightAndDarkImgNamed:(id)arg1;
- (void)gcAddSubviews:(id)arg1;
@end

