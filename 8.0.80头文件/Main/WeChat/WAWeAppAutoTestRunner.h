@interface WAWeAppAutoTestRunner : NSObject
+ (BOOL)runAllTestCasesWithSource:(id)arg1 completion:(id /* block */)arg2 error:(id *)arg3;
+ (BOOL)runTestCaseWithCaseId:(long long)arg1 source:(id)arg2 completion:(id /* block */)arg3 error:(id *)arg4;
+ (BOOL)runWithPayload:(id)arg1 source:(id)arg2 error:(id *)arg3;
+ (BOOL)runWithPayload:(id)arg1 source:(id)arg2 completion:(id /* block */)arg3 error:(id *)arg4;
+ (void)waitForActiveUserAndRunTestCases:(id)arg1 payload:(id)arg2 testType:(id)arg3 caseId:(long long)arg4 retry:(unsigned long long)arg5 startTime:(double)arg6 completion:(id /* block */)arg7;
+ (id)testCasesForCaseId:(long long)arg1;
+ (void)runTestCases:(id)arg1 payload:(id)arg2 index:(unsigned long long)arg3 success:(BOOL)arg4 firstError:(id)arg5 startTime:(double)arg6 activeUserContext:(id)arg7 completion:(id /* block */)arg8;
+ (BOOL)isSafeModeActive;
+ (id)activeUserDiagnosticDescription;
+ (BOOL)failToSubmitWithError:(id *)arg1 domain:(id)arg2 description:(id)arg3;
+ (void)finishRunWithPayload:(id)arg1 success:(BOOL)arg2 description:(id)arg3 startTime:(double)arg4 completion:(id /* block */)arg5;
+ (void)showCompletionAlertIfNeededWithPayload:(id)arg1 success:(BOOL)arg2 firstError:(id)arg3 durationMs:(double)arg4 completion:(id /* block */)arg5;
+ (void)writeResultWithPayload:(id)arg1 success:(BOOL)arg2 firstError:(id)arg3 durationMs:(double)arg4;
+ (id)resultFileURL;
+ (id)completionAlertWindow;
+ (id)foregroundWindowScene;
+ (id)topPresentingViewController;
+ (id)keyWindow;
+ (BOOL)canHandleTestType:(id)arg1;
+ (id)stringValue:(id)arg1;
+ (long long)integerValue:(id)arg1 defaultValue:(long long)arg2;
+ (BOOL)boolValue:(id)arg1 defaultValue:(BOOL)arg2;
@end
