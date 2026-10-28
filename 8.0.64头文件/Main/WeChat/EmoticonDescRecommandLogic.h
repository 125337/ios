@interface EmoticonDescRecommandLogic : NSObject <MMEmoticonResExt, IEmoticonMgrExt, EmoticonInputRecommendMgrExt>
{
    BOOL _needRebuildDesc; // +0x8
    BOOL _needLoadCustomEmotionDesc; // +0x9
    unsigned int _maxIndexCount; // +0xc
    int _cacheVersion; // +0x10
    unsigned int _maxLengthForCustomDesc; // +0x14
    id <EmoticonDescRecommandLogicDelegate> _delegate; // +0x18
    NSOperationQueue * _configQueue; // +0x20
    NSOperationQueue * _searchQueue; // +0x28
    NSString * _waitToSearchKeyword; // +0x30
    MMAsyncBlockOperation * _lastSearchOperation; // +0x38
    NSDictionary * _emoticonDescToMd5Cache; // +0x40
    NSDictionary * _packageIndex; // +0x48
    NSDictionary * _descAliasDic; // +0x50
    NSDictionary * _descToCustomMd5Cache; // +0x58
}
+ (id)asyncSearchForKeyword:(id)arg1 descToMd5Cache:(id)arg2 cacheVersion:(int)arg3 packageIndex:(id)arg4 descAliasDic:(id)arg5 descToCustomMd5Cache:(id)arg6 maxLengthForCustomDesc:(unsigned int)arg7;
+ (id)filterNoImageEmoticons:(id)arg1;
+ (id)filterNotInDBEmoticons:(id)arg1;
+ (id)adjustedStringWithDesc:(id)arg1;
+ (void)showCustomEmoticonMeaningDebugViewInVC:(id)arg1;
- (id)init;
- (void)loadDataIfNeeded;
- (void)reloadDataAndNeedClearCache:(BOOL)arg1;
- (void)setNeedsReloadCustomEmoticonDesc;
- (void)loadCustonEmoticonDescWithCompletionBlock:(id /* block */)arg1;
- (void)asyncLoadDescAliasConfigDir:(id)arg1;
- (void)loadDescAliasConfigDir:(id)arg1;
- (void)searchEmoticonWithKeyword:(id)arg1;
- (BOOL)isInWordList:(id)arg1;
- (BOOL)hasLoadMd5Cache;
- (void)rebuildDescToMd5CacheWithCompletionBlock:(id /* block */)arg1;
- (void)updateDescToMd5Cache:(id)arg1 FromEmoticonPackageDesc:(id)arg2;
- (void)continueSearchIfNeeded;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)onLocalRecommendLocalEmojiOcrResultUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)maxIndexCount;
- (void)setMaxIndexCount:(unsigned int)arg1;
- (id)configQueue;
- (void)setConfigQueue:(id)arg1;
- (id)searchQueue;
- (void)setSearchQueue:(id)arg1;
- (id)waitToSearchKeyword;
- (void)setWaitToSearchKeyword:(id)arg1;
- (id)lastSearchOperation;
- (void)setLastSearchOperation:(id)arg1;
- (BOOL)needRebuildDesc;
- (void)setNeedRebuildDesc:(BOOL)arg1;
- (id)emoticonDescToMd5Cache;
- (void)setEmoticonDescToMd5Cache:(id)arg1;
- (id)packageIndex;
- (void)setPackageIndex:(id)arg1;
- (id)descAliasDic;
- (void)setDescAliasDic:(id)arg1;
- (int)cacheVersion;
- (void)setCacheVersion:(int)arg1;
- (BOOL)needLoadCustomEmotionDesc;
- (void)setNeedLoadCustomEmotionDesc:(BOOL)arg1;
- (unsigned int)maxLengthForCustomDesc;
- (void)setMaxLengthForCustomDesc:(unsigned int)arg1;
- (id)descToCustomMd5Cache;
- (void)setDescToCustomMd5Cache:(id)arg1;
- (void).cxx_destruct;
@end
