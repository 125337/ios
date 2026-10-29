@interface EdgeComputingWCDBManager : MMObject
{
    WCTDatabase * edgeDatabase; // +0x8
}
- (id)init:(id)arg1;
- (void)dealloc;
- (void)close;
- (BOOL)execuSQL:(id)arg1;
- (id)querySQL:(id)arg1;
- (unsigned long long)queryRowNum:(id)arg1;
- (void).cxx_destruct;
@end
