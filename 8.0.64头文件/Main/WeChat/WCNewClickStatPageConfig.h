@interface WCNewClickStatPageConfig : MMObject <PBCoding>
{
    BOOL _bNeedAction; // +0x8
    NSString * _pageID; // +0x10
}
+ (void)PBArrayAdd_pageID;
+ (void)PBArrayAdd_bNeedAction;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)pageID;
- (void)setPageID:(id)arg1;
- (BOOL)bNeedAction;
- (void)setBNeedAction:(BOOL)arg1;
- (void).cxx_destruct;
@end
