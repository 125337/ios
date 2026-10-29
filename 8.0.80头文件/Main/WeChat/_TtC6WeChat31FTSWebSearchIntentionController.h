@interface _TtC6WeChat31FTSWebSearchIntentionController : NSObject
{
    double localSearchBoxMinExposedHeight; // +0x8
     _cgiTriggerInterval; // +0x10
     referee; // +0x18
     webSearchIntentionCache; // +0x40
     $__lazy_storage_$_netProvider; // +0x48
}
+ (BOOL)enabled;
- (double)localSearchBoxMinExposedHeight;
- (void)setLocalSearchBoxMinExposedHeight:(double)arg1;
- (BOOL)hasWebSearchIntentionFor:(id)arg1;
- (BOOL)isWebSearchFirstMatchFor:(id)arg1;
- (BOOL)isWebSearchFirstMatchTest3For:(id)arg1;
- (void)addLocalSearchHistoryFor:(id)arg1;
- (void)insertSearchSugItemClickWithPrefix:(id)arg1 clickType:(unsigned int)arg2 isLocal:(BOOL)arg3;
- (void)insertSearchTextInputWithPrefix:(id)arg1;
- (id)getSearchClickHistory;
- (id)getLastPrefixLocalClickInfoWithPrefix:(id)arg1;
- (id)getSugPrefixSequence;
- (void)updateSearchIntentionDict;
- (id)init;
- (void).cxx_destruct;
@end
