@interface MMFavBaselineComponentData : MMComponentData
{
    BOOL _bShowDataSize; // +0x8
    BOOL _shouldHideSourceNameLabel; // +0x9
    unsigned int _uiFavUpDateTime; // +0xc
    unsigned int _usedTimes; // +0x10
    unsigned long long _cellStyle; // +0x18
    NSString * _authorName; // +0x20
    NSString * _nameId; // +0x28
    unsigned long long _dataSize; // +0x30
    NSArray * _tagList; // +0x38
    FavoritesItem * _item; // +0x40
    UIImage * _logoImage; // +0x48
    NSString * _nameTailContent; // +0x50
}
- (void)fixComponentWidth;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (unsigned int)uiFavUpDateTime;
- (void)setUiFavUpDateTime:(unsigned int)arg1;
- (id)authorName;
- (void)setAuthorName:(id)arg1;
- (id)nameId;
- (void)setNameId:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned int)usedTimes;
- (void)setUsedTimes:(unsigned int)arg1;
- (BOOL)bShowDataSize;
- (void)setBShowDataSize:(BOOL)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)logoImage;
- (void)setLogoImage:(id)arg1;
- (id)nameTailContent;
- (void)setNameTailContent:(id)arg1;
- (BOOL)shouldHideSourceNameLabel;
- (void)setShouldHideSourceNameLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end

