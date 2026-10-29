@interface _TtC6WeChat22GlobalSearchDataSource : NSObject
{
     displayedResults; // +0x8
     delegate; // +0x10
     config; // +0x18
     searchIntentionController; // +0x20
     query; // +0x28
     topHits; // +0x38
     singleContact; // +0x40
     groupContact; // +0x48
     brandContact; // +0x50
     feature; // +0x58
     message; // +0x60
     fav; // +0x68
     finderContact; // +0x70
     weapp; // +0x78
     searchContact; // +0x80
     webSearch; // +0x88
     kfContact; // +0x90
     refreshPageSubject; // +0x98
     searchDoneSubject; // +0xa0
     subscriptions; // +0xa8
     sortedSections; // +0xb0
     $__lazy_storage_$_hasWebSearchIntention; // +0xb8
}
- (long long)sectionIndexOf:(unsigned long long)arg1;
- (id)sugContext;
- (BOOL)allSectionsHasResult;
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

