@interface WCSearchCTRInfo : NSObject
{
    BOOL _hasSearchDone; // +0x8
    BOOL _hasSearchResult; // +0x9
    BOOL _isVoiceInput; // +0xa
    unsigned long long _start; // +0x10
    unsigned long long _end; // +0x18
    long long _si64SessionId; // +0x20
    long long _si64SearchId; // +0x28
    NSString * _query; // +0x30
    NSMutableArray * _arrClickType; // +0x38
    NSMutableDictionary * _dicItemStatus; // +0x40
    NSMutableDictionary * _dicSectionCount; // +0x48
    NSMutableSet * _disableSectionSet; // +0x50
    NSString * _pardusDocId; // +0x58
}
- (void)countSectionItems;
- (id)sortedStatusKeys;
- (void)showSection:(unsigned int)arg1 index:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 itemUserName:(id)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 subType:(unsigned int)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 subType:(unsigned int)arg3 itemUserName:(id)arg4;
- (void)disableSection:(unsigned int)arg1;
- (void)doClick:(unsigned int)arg1;
- (void)finishAllSearch;
- (id)genLogString;
- (id)safeKVString:(id)arg1;
- (BOOL)isDisabledItemKey:(id)arg1;
- (unsigned long long)start;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)end;
- (void)setEnd:(unsigned long long)arg1;
- (long long)si64SessionId;
- (void)setSi64SessionId:(long long)arg1;
- (long long)si64SearchId;
- (void)setSi64SearchId:(long long)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)arrClickType;
- (void)setArrClickType:(id)arg1;
- (id)dicItemStatus;
- (void)setDicItemStatus:(id)arg1;
- (id)dicSectionCount;
- (void)setDicSectionCount:(id)arg1;
- (id)disableSectionSet;
- (void)setDisableSectionSet:(id)arg1;
- (BOOL)hasSearchDone;
- (void)setHasSearchDone:(BOOL)arg1;
- (BOOL)hasSearchResult;
- (void)setHasSearchResult:(BOOL)arg1;
- (BOOL)isVoiceInput;
- (void)setIsVoiceInput:(BOOL)arg1;
- (id)pardusDocId;
- (void)setPardusDocId:(id)arg1;
- (void).cxx_destruct;
@end

