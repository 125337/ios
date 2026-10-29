@interface WCSessionUBAUnitConfigModel : MMObject <PBCoding>
{
    NSString * _pageName; // +0x8
    NSMutableArray * _businessParams; // +0x10
}
+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_businessParams;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithPageName:(id)arg1;
- (id)toString;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)businessParams;
- (void)setBusinessParams:(id)arg1;
- (void).cxx_destruct;
@end
