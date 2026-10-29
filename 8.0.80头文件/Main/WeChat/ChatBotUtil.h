@interface ChatBotUtil : NSObject
+ (BOOL)createAndShowChatBotBrandVoIPViewController:(id)arg1 roomInfo:(id)arg2;
+ (id)formatRelativeTimeFromTimestamp:(double)arg1;
+ (id)formatRelativeTimeFromTimestamp:(double)arg1 needShowSeconds:(BOOL)arg2;
+ (id)textDigestForCardWrap:(id)arg1;
+ (id)stringByTrimmingLeadingNewlines:(id)arg1;
+ (void)reportAction:(int)arg1 msgType:(int)arg2 extraInfo:(id)arg3;
+ (id)firstTextOutputExtraInfoWithIsUserASR:(BOOL)arg1 textLength:(unsigned long long)arg2;
+ (int)uninitChatbotEngine;
+ (id)linkErrorToastTextWithErrorCode:(int)arg1;
+ (id)linkErrorToastTextWithErrorCode:(int)arg1 includeFilteredErrorCode:(BOOL)arg2;
+ (id)linkErrorLogTextWithErrorCode:(int)arg1;
+ (void)showToastWithErrorCode:(int)arg1;
+ (void)reportLinkErrorCode:(int)arg1 systemErrCode:(int)arg2 extraInfo:(id)arg3;
+ (void)reportLinkErrorCode:(int)arg1;
+ (void)updateHasLocAuth;
@end
