@interface MMFavCardStarLayout : NSObject
+ (double)selectableSizeBoxStarSlotWidth;
+ (void)removeStarIconFromCardView:(id)arg1 textCom:(id)arg2;
+ (void)layoutStarForHost:(id)arg1 cardView:(id)arg2 showStarIcon:(BOOL)arg3;
+ (BOOL)layoutStarOnTextTitleRow:(id)arg1 starIcon:(id)arg2 host:(id)arg3 cardView:(id)arg4;
+ (CGRect)computeStarFrameForHost:(id)arg1 cardView:(id)arg2;
+ (CGRect)mediaFrameInCard:(id)arg1 host:(id)arg2;
+ (BOOL)hasRightMediaInCardView:(id)arg1 host:(id)arg2;
+ (void)clampTitleRowStarForPureTextCard:(id)arg1 textCom:(id)arg2 cardView:(id)arg3 host:(id)arg4;
+ (CGRect)clampTextStarFrameInCard:(id)arg1 frame:(CGRect)arg2 hasRightMedia:(BOOL)arg3;
+ (CGRect)clampInsideCard:(id)arg1 frame:(CGRect)arg2;
+ (CGPoint)starOffsetForFavType:(long long)arg1;
@end
