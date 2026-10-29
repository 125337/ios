@interface WAWeAppAutoTestCase : NSObject
- (long long)caseId;
- (id)name;
- (id)caseDescription;
- (id)subCases;
- (void)runWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)runSubCases:(id)arg1 index:(unsigned long long)arg2 context:(id)arg3 success:(BOOL)arg4 firstError:(id)arg5 startTime:(double)arg6 completion:(id /* block */)arg7;
@end
