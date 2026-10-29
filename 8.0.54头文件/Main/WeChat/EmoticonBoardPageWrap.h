@interface EmoticonBoardPageWrap : MMObject
{
    unsigned long long _pageType; // +0x8
    NSString * _pid; // +0x10
    NSString * _packageName; // +0x18
    unsigned long long _packEmoticonCount; // +0x20
    EmoticonTabRecommendItem * _recommendItem; // +0x28
    OrderedDictionary * _packedIPDictionary; // +0x30
}
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (unsigned long long)packEmoticonCount;
- (void)setPackEmoticonCount:(unsigned long long)arg1;
- (id)recommendItem;
- (void)setRecommendItem:(id)arg1;
- (id)packedIPDictionary;
- (void)setPackedIPDictionary:(id)arg1;
- (void).cxx_destruct;
@end

