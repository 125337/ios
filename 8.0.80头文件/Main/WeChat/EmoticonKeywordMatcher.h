@interface EmoticonKeywordMatcher : NSObject <EmoticonRecommendDelegate, ModelResourceExt>
{
    BOOL _hasPrepare; // +0x8
    BOOL _ready; // +0x9
    id <EmoticonRecommendDelegate> _delegate; // +0x10
    NSSet * _keywords; // +0x18
    EmoticonTokenizer * _tokenizer; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)prepareMatching;
- (BOOL)prepareKeywordList;
- (BOOL)isReady;
- (id)makeTokenizer:(id)arg1;
- (id)matchKeywords:(id)arg1;
- (BOOL)isInKeywordList:(id)arg1;
- (void)loadKeywordResourceCompleted;
- (void)updateKeywords;
- (id)parseKeyWords:(id)arg1;
- (id)resourceName;
- (BOOL)hasKeywordResource;
- (id)keywordPath;
- (id)loadKeywordResource;
- (void)onResourceLoaded:(id)arg1;
- (id)getWorkerQueue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasPrepare;
- (void)setHasPrepare:(BOOL)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (id)tokenizer;
- (void)setTokenizer:(id)arg1;
- (void).cxx_destruct;
@end
