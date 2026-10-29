@interface WCBaseSectionModel : NSObject <NSCopying>
{
    NSString * _sectionId; // +0x8
    NSString * _sectionTitle; // +0x10
    NSMutableArray * _allCellModelList; // +0x18
}
- (id)initWithId:(id)arg1 sectionTitle:(id)arg2;
- (id)cellModelAtRow:(long long)arg1;
- (long long)rowOfCellModel:(id)arg1;
- (long long)cellCount;
- (void)enumerateCellModel:(id /* block */)arg1;
- (BOOL)contains:(id)arg1;
- (BOOL)contains:(id)arg1 forComparator:(id /* block */)arg2;
- (void)setCellModelList:(id)arg1;
- (BOOL)addCellModel:(id)arg1;
- (BOOL)insertCellModel:(id)arg1 atRow:(long long)arg2;
- (BOOL)removeCellModelAtRow:(long long)arg1;
- (void)clear;
- (id)allCellModelList;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sectionId;
- (void)setSectionId:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (void)setAllCellModelList:(id)arg1;
- (void).cxx_destruct;
@end

