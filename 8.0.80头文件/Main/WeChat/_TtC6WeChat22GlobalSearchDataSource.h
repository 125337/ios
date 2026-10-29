@interface _TtC6WeChat22GlobalSearchDataSource : NSObject
{
    void * displayedResults; // +0x8
     delegate; // +0x10
    _TtC6WeChat28GlobalSearchDataSourceConfig * config; // +0x18
     searchIntentionController; // +0x20
     query; // +0x28
     topHits; // +0x38
     singleContact; // +0x40
     groupContact; // +0x48
     brandContact; // +0x50
     feature; // +0x58
     message; // +0x60
     featureMessage; // +0x68
     fav; // +0x70
     finderContact; // +0x78
     weapp; // +0x80
     searchContact; // +0x88
     webSearch; // +0x90
     kfContact; // +0x98
     minimizeTask; // +0xa0
     brandServiceContact; // +0xa8
     brandMergeContact; // +0xb0
     brandStickerContact; // +0xb8
     weshop; // +0xc0
     setting; // +0xc8
     aihistory; // +0xd0
     refreshPageSubject; // +0xd8
     searchDoneSubject; // +0xe0
     subscriptions; // +0xe8
     sortedSections; // +0xf0
     sugShouldAvoid; // +0xf8
     $__lazy_storage_$_hasWebSearchIntention; // +0xf9
     $__lazy_storage_$_isWebSearchFirstMatch; // +0xfa
}
- (long long)sectionIndexOf:(unsigned long long)arg1;
- (id)sugContext;
- (BOOL)onlyHasWebResult;
- (BOOL)hasResult;
- (BOOL)allSectionsHasResult;
- (BOOL)hasSectionWaitDisplay;
- (id)displayedResults;
- (void)setDisplayedResults:(id)arg1;
- (id)config;
- (id)initWithDelegate:(id)arg1 config:(id)arg2;
- (id)getConfig;
- (void)updateSection:(unsigned long long)arg1 data:(id)arg2;
- (void)finishSearchOf:(unsigned long long)arg1 data:(id)arg2;
- (void)sortSections;
- (id)init;
- (void).cxx_destruct;
@end
