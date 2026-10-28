@interface TextStateRecentIconList : NSObject <PBCoding>
{
    NSMutableArray * _iconIdList; // +0x8
}
+ (void)PBArrayAdd_iconIdList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)iconIdList;
- (void)setIconIdList:(id)arg1;
- (void).cxx_destruct;
@end
