@interface WCFinderStringHighlightTool : NSObject
+ (id)getMentionInputStopTakenList;
+ (id)mentionRegular;
+ (id)ignoreRegular;
+ (id)emojiRegular;
+ (void)delayLoadEmailTopHosts;
+ (id)convertAllMentionTextToHtmlATag:(id)arg1;
+ (id)covertAllMentionTextToWCLinkTag:(id)arg1 mentionCount:(long long *)arg2;
@end
