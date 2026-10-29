@interface EmoticonRecommendRequestBuilder : NSObject <EmoticonRecommendDelegate>
{
    NSObject<OS_dispatch_queue> * _tokenizerQueue; // +0x8
    EmoticonTokenizer * _tokenizer; // +0x10
    EmoticonKeywordMatcher * _keywordMatcher; // +0x18
}
- (id)init;
- (id)getWorkerQueue;
- (id)buildForChatName:(id)arg1 candidates:(id)arg2 useLocalModel:(BOOL)arg3;
- (BOOL)prepareLocalTokenization;
- (id)tokenizeText:(id)arg1 outModelTokens:(id *)arg2;
- (id)referTitleFromMessage:(id)arg1;
- (id)fallbackItemsFromCandidates:(id)arg1;
- (void)appendMd5s:(id)arg1 toItems:(id)arg2;
- (id)fallbackLogItemsFromCandidates:(id)arg1;
- (void)appendLogItems:(id)arg1 md5s:(id)arg2 reason:(unsigned long long)arg3;
- (id)tokenizerQueue;
- (void)setTokenizerQueue:(id)arg1;
- (id)tokenizer;
- (void)setTokenizer:(id)arg1;
- (id)keywordMatcher;
- (void)setKeywordMatcher:(id)arg1;
- (void).cxx_destruct;
@end
