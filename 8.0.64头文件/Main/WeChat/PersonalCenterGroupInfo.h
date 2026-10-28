@interface PersonalCenterGroupInfo : NSObject
{
    NSArray * _cellList; // +0x8
}
+ (id)makeWithCellList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)cellList;
- (void)setCellList:(id)arg1;
- (void).cxx_destruct;
@end
