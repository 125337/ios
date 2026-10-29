@interface WCFinderStringHighlightTool : NSObject
+ (id)getMentionInputStopTakenList;
+ (id)highlightAttrStrWithString:(id)arg1 pattern:(id)arg2 ignore:(id)arg3 font:(id)arg4 normalColor:(id)arg5 highlightColor:(id)arg6 customAttrRester:(id /* block */)arg7;
+ (id)linkStringWithString:(id)arg1 pattern:(id)arg2 ignore:(id)arg3;
+ (id)linkStringWithString:(id)arg1 pattern:(id)arg2 ignoreRegex:(id)arg3;
+ (id)mentionRegular;
+ (id)ignoreRegular;
+ (id)emojiRegular;
+ (id)customLinkMentionStringWithText:(id)arg1 mentionCount:(unsigned long long *)arg2;
+ (id)highlightArrayWithString:(id)arg1 pattern:(id)arg2;
@end

