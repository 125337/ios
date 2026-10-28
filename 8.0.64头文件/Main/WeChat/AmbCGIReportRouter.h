@interface AmbCGIReportRouter : NSObject <AmoebaDataRouterProtocol>
{
    DataReportCGIReportRouter * m_cGIReportRouter; // +0x8
}
+ (void)registerCallback:(id)arg1 withTarget:(id)arg2;
+ (void)unRegisterCallback:(id)arg1 withTarget:(id)arg2;
- (id)init;
- (BOOL)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (unsigned long long)routeType;
- (void).cxx_destruct;
@end
