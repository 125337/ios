@interface MessageNodeComponentHelper : NSObject
+ (id)getSourceViewWithTitle:(id)arg1 fixedColor:(id)arg2 titleColor:(id)arg3 iconImage:(id)arg4 iconImageUrlString:(id)arg5 maxWidth:(double)arg6 tailIconUrl:(id)arg7 withTailTag:(id)arg8 taiDesc:(id)arg9 bubbleType:(unsigned long long)arg10 separatorColor:(id)arg11 extraParams:(id)arg12;
+ (id)getSourceViewWithTitle:(id)arg1 fixedColor:(id)arg2 titleColor:(id)arg3 iconImage:(id)arg4 iconImageUrlString:(id)arg5 maxWidth:(double)arg6 withTailTag:(id)arg7 bubbleType:(unsigned long long)arg8 extraParams:(id)arg9;
+ (id)getSourceViewWithTitle:(id)arg1 iconImage:(id)arg2 iconImageUrlString:(id)arg3 maxWidth:(double)arg4 withTailTag:(id)arg5 bubbleType:(unsigned long long)arg6 extraParams:(id)arg7;
+ (double)getMessageBackgroundWidth:(id)arg1;
+ (double)getMessageBackgroundShorterWidth:(id)arg1;
+ (double)getTextMessageNodeWidth:(id)arg1;
+ (double)getChatViewControllerWidth:(id)arg1;
+ (double)getMessageCssFloatValue:(id)arg1 component:(id)arg2;
@end
