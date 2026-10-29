@interface WCFinderSearchStatReportShim : NSObject <WCFinderStatReportShim>
{
    list<InfoItem, std::allocator<InfoItem>> _recards; // +0x8
    __list_iterator<InfoItem, void *> _cursor; // +0x20
    map<NSString *, std::__list_iterator<InfoItem, void *>, RecardEqualID, std::allocator<std::pair<NSString *const, std::__list_iterator<InfoItem, void *>>>> _iterMap; // +0x28
    NSString * _currentTid; // +0x40
}
- (id)init;
- (id)initWithCount:(long long)arg1;
- (void *)recards;
- (void *)cursor;
- (void *)iterMap;
- (void)onUpdateStatMetaModel:(id)arg1;
- (BOOL)filterShouldRecardStatMetaModel:(id)arg1;
- (id)collectReadInfoJsonString;
- (void)reset;
- (void)updateCurrentTid:(id)arg1;
- (id)currentTid;
- (void)setCurrentTid:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

