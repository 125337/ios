@interface WCSpecialPVPageConfig : MMObject <PBCoding>
{
    NSString * _prePageID; // +0x8
    NSString * _pageID; // +0x10
}
+ (void)PBArrayAdd_prePageID;
+ (void)PBArrayAdd_pageID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)prePageID;
- (void)setPrePageID:(id)arg1;
- (id)pageID;
- (void)setPageID:(id)arg1;
- (void).cxx_destruct;
@end

