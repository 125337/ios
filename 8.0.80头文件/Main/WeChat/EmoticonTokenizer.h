@interface EmoticonTokenizer : NSObject <ModelResourceExt>
{
    unique_ptr<EmoticonTokenizerCPP, std::default_delete<EmoticonTokenizerCPP>> tokenizer; // +0x8
    BOOL _hasPrepare; // +0x10
    BOOL _ready; // +0x11
    id <EmoticonRecommendDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)prepareTokenizer;
- (BOOL)isReady;
- (id)makeTokenizer:(id)arg1;
- (void)updateTokenizer;
- (BOOL)hasTokenizerResource;
- (id)resourceName;
- (id)tokenizerPath;
- (void)loadTokenResourceCompleted;
- (void)onResourceLoaded:(id)arg1;
- (id)loadTokenizerJson;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasPrepare;
- (void)setHasPrepare:(BOOL)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
