@interface WCPagePathUnitConfigModel : MMObject <PBCoding>
{
    NSString * _pageName; // +0x8
    NSMutableArray * _businessParams; // +0x10
    NSMutableArray * _viewOperations; // +0x18
}
+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_businessParams;
+ (void)PBArrayAdd_viewOperations;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithPageName:(id)arg1;
- (id)toString;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)businessParams;
- (void)setBusinessParams:(id)arg1;
- (id)viewOperations;
- (void)setViewOperations:(id)arg1;
- (void).cxx_destruct;
@end

