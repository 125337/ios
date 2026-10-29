@interface CControlUtil : NSObject
+ (unsigned long long)labelNumberOfLines:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (unsigned long long)labelNumberOfLines:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4;
+ (double)labelLineHeight:(id)arg1;
+ (double)labelWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelHeight:(id)arg1;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4 lineSpacing:(double)arg5;
+ (double)labelWordBreakWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelWordBreakHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelWordBreakHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 lineSpacing:(double)arg4;
+ (CGSize)labelSizeOfLabel:(id)arg1;
+ (CGSize)labelSizeOfLabel:(id)arg1 maxWidth:(double)arg2;
+ (double)enterpriseChatNameLabelMinWidth:(id)arg1;
+ (CGRect)autoFitRectForLable:(id)arg1;
+ (CGRect)autoFitRectForLableAllowMultipleLines:(id)arg1;
+ (BOOL)pointInRect:(CGRect)arg1 point:(CGPoint)arg2 error:(double)arg3;
+ (id)fitString:(id)arg1 Width:(double)arg2 font:(id)arg3 tailString:(id)arg4;
@end

