@interface SearchHelpDataItem : NSObject
{
    BOOL _isMultiKeyword; // +0x8
    BOOL _hasAllContactLoaded; // +0x9
    NSDictionary * _dicCacheLabelItem; // +0x10
    NSDictionary * _dicCacheZoneItem; // +0x18
    NSDictionary * _dicCacheContact; // +0x20
    NSDictionary * _dicTopHitMMGroupMember; // +0x28
    NSMutableDictionary * _dicMultiKeywordMatchFlag; // +0x30
    ContactSearchMonitor * _monitor; // +0x38
}
- (id)init;
- (id)dicCacheLabelItem;
- (void)setDicCacheLabelItem:(id)arg1;
- (id)dicCacheZoneItem;
- (void)setDicCacheZoneItem:(id)arg1;
- (id)dicCacheContact;
- (void)setDicCacheContact:(id)arg1;
- (id)dicTopHitMMGroupMember;
- (void)setDicTopHitMMGroupMember:(id)arg1;
- (BOOL)isMultiKeyword;
- (void)setIsMultiKeyword:(BOOL)arg1;
- (BOOL)hasAllContactLoaded;
- (void)setHasAllContactLoaded:(BOOL)arg1;
- (id)dicMultiKeywordMatchFlag;
- (void)setDicMultiKeywordMatchFlag:(id)arg1;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (void).cxx_destruct;
@end
