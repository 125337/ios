@interface CommonHybridRouterCpp : UnitRCObjcBaseProxyClass <CommonHybridRouter>
+ (id)sharedInstance;
- (void)open:(id)arg1 callback:(id /* block */)arg2;
- (id)getPageInfoList;
- (id)getPageInfo:(id)arg1;
@end
