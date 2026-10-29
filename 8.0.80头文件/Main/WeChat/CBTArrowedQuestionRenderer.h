@interface CBTArrowedQuestionRenderer : NSObject
+ (id)gluePunctuationCharacterSet;
+ (BOOL)isGluePunctuationUnit:(id)arg1;
+ (id)textAttributesWithFont:(id)arg1 lineHeight:(double)arg2;
+ (id)arrowAttachmentWithFont:(id)arg1 lineHeight:(double)arg2 arrowSize:(double)arg3 arrowImage:(id)arg4;
+ (void)appendText:(id)arg1 arrowAttr:(id)arg2 attributes:(id)arg3 to:(id)arg4;
+ (CGSize)sizeForAttributedString:(id)arg1 maxWidth:(double)arg2;
+ (id)horizontallyFlippedImage:(id)arg1;
+ (id)defaultTextColor;
+ (id)resolvedColorWithTraitCollection:(id)arg1 dynamicColor:(id)arg2;
+ (double)effectiveLineHeightForFont:(id)arg1 multiplier:(double)arg2;
+ (double)arrowIconSizeForFont:(id)arg1 multiplier:(double)arg2;
+ (id)arrowImageForFont:(id)arg1 multiplier:(double)arg2 color:(id)arg3;
+ (id)attributedStringWithText:(id)arg1 font:(id)arg2 multiplier:(double)arg3 arrowImage:(id)arg4 textColor:(id)arg5;
+ (struct)measureLayoutForText:(id)arg1 font:(id)arg2 totalWidth:(double)arg3 config:(struct)arg4;
+ (id)displayTextForText:(id)arg1 font:(id)arg2 multiplier:(double)arg3 maxWidth:(double)arg4 maxLines:(long long)arg5 arrowImage:(id)arg6;
@end
