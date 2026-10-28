@interface WCViewOperationConfigModel : MMObject <PBCoding>
{
    NSString * _pageName; // +0x8
    NSString * _viewId; // +0x10
    unsigned long long _action; // +0x18
    NSMutableArray * _businessParams; // +0x20
}
+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_viewId;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_businessParams;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithPageName:(id)arg1 withViewId:(id)arg2 withViewOperationAction:(unsigned long long)arg3;
- (id)toString;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)businessParams;
- (void)setBusinessParams:(id)arg1;
- (void).cxx_destruct;
@end
