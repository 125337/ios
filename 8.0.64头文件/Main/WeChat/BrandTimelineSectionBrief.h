@interface BrandTimelineSectionBrief : NSObject
{
    long long _rowCount; // +0x8
    NSString * _sectionClassName; // +0x10
    NSString * _briefDescription; // +0x18
    unsigned long long _m_n64MesSvrId; // +0x20
    long long _arrReaderWrapCount; // +0x28
    long long _arrItemViewModelCount; // +0x30
    long long _itemShowCount; // +0x38
}
- (id)initWithBaseSectionData:(id)arg1 andRowCount:(long long)arg2;
- (id)description;
- (long long)rowCount;
- (void)setRowCount:(long long)arg1;
- (id)sectionClassName;
- (void)setSectionClassName:(id)arg1;
- (id)briefDescription;
- (void)setBriefDescription:(id)arg1;
- (unsigned long long)m_n64MesSvrId;
- (void)setM_n64MesSvrId:(unsigned long long)arg1;
- (long long)arrReaderWrapCount;
- (void)setArrReaderWrapCount:(long long)arg1;
- (long long)arrItemViewModelCount;
- (void)setArrItemViewModelCount:(long long)arg1;
- (long long)itemShowCount;
- (void)setItemShowCount:(long long)arg1;
- (void).cxx_destruct;
@end
