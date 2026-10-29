@interface ContactTableUtil : NSObject
+ (id)genContactTableSectionHeaderView:(double)arg1 title:(id)arg2 image:(id)arg3;
+ (id)genContactTableSectionHeaderView:(double)arg1 title:(id)arg2 image:(id)arg3 colorProxy:(id)arg4;
+ (id)genContactTableSectionHeaderView:(double)arg1 title:(id)arg2 secondTitle:(id)arg3;
+ (id)genContactTableMoreView:(double)arg1 description:(id)arg2 rightImage:(id)arg3;
+ (id)genContactTableMoreViewLabelStye:(double)arg1 description:(id)arg2 rightImage:(id)arg3;
+ (id)genTokenPickNoResultViewForKeyword:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (id)getWCOutsiderCellTitle:(unsigned int)arg1;
+ (id)getWCAddBlacklistCellTitle:(unsigned int)arg1;
+ (id)getNewWCOutsiderCellTitle:(unsigned int)arg1;
+ (id)getNewWCAddBlacklistCellTitle:(unsigned int)arg1;
+ (id)getOpenIMWCAddBlacklistCellTitle:(unsigned int)arg1;
+ (id)getSeperateLineViewWithWidth:(double)arg1 andContentInsets:(UIEdgeInsets)arg2;
@end
