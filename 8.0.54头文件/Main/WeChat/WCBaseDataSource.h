@interface WCBaseDataSource : NSObject <NSCopying>
{
    NSMutableArray * _allSectionModelList; // +0x8
}
- (id)initWithSectionModel:(id)arg1;
- (id)sectionModelAtIndex:(long long)arg1;
- (id)sectionModelOfId:(id)arg1;
- (long long)indexOfSectionModelForId:(id)arg1;
- (long long)indexOfSectionModel:(id)arg1;
- (id)cellModelAtIndex:(id)arg1;
- (id)indexPathOfCellModel:(id)arg1;
- (long long)sectionCount;
- (long long)cellCount;
- (long long)cellCountByIndexPath:(id)arg1;
- (void)enumerateCellModel:(id /* block */)arg1;
- (BOOL)contains:(id)arg1;
- (BOOL)contains:(id)arg1 forComparator:(id /* block */)arg2;
- (BOOL)addSectionModel:(id)arg1;
- (BOOL)safeInsertSectionModel:(id)arg1 toIndex:(long long)arg2;
- (id)ensureSectionModelById:(id)arg1 withTitle:(id)arg2;
- (void)setSectionModelList:(id)arg1;
- (BOOL)addCellModel:(id)arg1 toSectionAtIndex:(long long)arg2 createWithId:(id)arg3 title:(id)arg4;
- (BOOL)addCellModel:(id)arg1 toSectionOfId:(id)arg2 createWithTitle:(id)arg3;
- (BOOL)insertCellModel:(id)arg1 atRow:(long long)arg2 toSectionAtIndex:(long long)arg3 createWithId:(id)arg4 title:(id)arg5;
- (BOOL)insertCellModel:(id)arg1 atRow:(long long)arg2 toSectionOfId:(id)arg3 title:(id)arg4;
- (BOOL)concatDataSourceFrom:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)removeSectionOfId:(id)arg1;
- (void)clear;
- (id)describeCount;
- (id)description;
- (id)allSectionModelList;
- (id)ensureSectionModelByIndex:(long long)arg1 withId:(id)arg2 title:(id)arg3;
- (id)findSectionModelById:(id)arg1;
- (void)setAllSectionModelList:(id)arg1;
- (void).cxx_destruct;
@end

