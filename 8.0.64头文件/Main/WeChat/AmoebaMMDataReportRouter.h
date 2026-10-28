@interface AmoebaMMDataReportRouter : NSObject <AmoebaDataRouterProtocol>
{
    NSMutableArray * m_logIdBlackList; // +0x8
    unsigned long long m_reportStrMaxLimit; // +0x10
}
+ (void)removeSamePageParams:(id)arg1;
+ (void)removeMaxLengthParams:(id)arg1;
+ (id)getMaxLengthParam:(id)arg1;
+ (void)removeParams:(id)arg1 value:(id)arg2;
+ (BOOL)readParams:(id)arg1 block:(id /* block */)arg2;
+ (id)changeMutableObject:(id)arg1;
- (id)init;
- (BOOL)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (unsigned long long)routeType;
- (void)route:(id)arg1 reportStr:(id)arg2 routeRule:(id)arg3;
- (id)toReportStr:(id)arg1;
- (void).cxx_destruct;
@end
