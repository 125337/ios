@interface EmoticonXiaoweiSearchReporter : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _aiEmojiSessionId; // +0x10
    unsigned long long _exposeTime; // +0x18
}
+ (id)generateSessionId;
+ (id)generateAiEmojiSessionId;
+ (void)reportXiaoweiHalfScreenExitWithType:(unsigned long long)arg1 emojiSearchSessionId:(id)arg2 aiEmojiSessionId:(id)arg3;
- (id)initWithSessionId:(id)arg1;
- (void)reportSearchIconClick;
- (void)reportSearchPanelExposeWithHasAiFindStickerEntry:(BOOL)arg1;
- (void)reportFeaturedEntryExpose;
- (void)reportSearchWithSearchQuery:(id)arg1 searchQueryId:(id)arg2 searchSource:(unsigned long long)arg3;
- (void)reportFeaturedClickWithSearchState:(unsigned long long)arg1;
- (void)reportAskButtonExposeWithSearchQuery:(id)arg1 searchState:(unsigned long long)arg2;
- (void)reportAskButtonClickWithSearchQuery:(id)arg1 searchState:(unsigned long long)arg2;
- (void)reportAskButtonHoldingWithSearchQuery:(id)arg1 searchState:(unsigned long long)arg2 sayContent:(id)arg3 holdingState:(unsigned long long)arg4;
- (void)reportXiaoweiHalfScreenExpose;
- (void)reportXiaoweiHalfScreenExitWithType:(unsigned long long)arg1 startTime:(unsigned long long)arg2;
- (id)baseParamsWithViewId:(id)arg1;
- (void)reportEventId:(id)arg1 params:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)aiEmojiSessionId;
- (void)setAiEmojiSessionId:(id)arg1;
- (unsigned long long)exposeTime;
- (void)setExposeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
