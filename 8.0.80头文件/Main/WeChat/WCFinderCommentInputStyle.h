@interface WCFinderCommentInputStyle : NSObject
+ (double)horizontalPadding;
+ (double)growTextViewOriginHeight;
+ (void)applyContentPaddingToGrowTextView:(id)arg1;
+ (void)alignDictationIconForGrowTextView:(id)arg1;
+ (id)nickname:(id)arg1 limitedToCharacters:(unsigned long long)arg2;
+ (double)placeholderWidthForGrowTextView:(id)arg1;
+ (id)placeholderForGrowTextView:(id)arg1 postNickname:(id)arg2 replyNickname:(id)arg3 maxNicknameLength:(unsigned long long)arg4 builder:(id /* block */)arg5;
+ (id)placeholder:(id)arg1 constrainedToWidth:(double)arg2;
@end
