@interface MMLiveStarterTestSpeedManager : NSObject
{
    shared_ptr<MyCallback> testSpeedCallback; // +0x8
    LiveSpeedTestResult testrResult; // +0x18
    BOOL _isComplete; // +0x40
    id /* block */ _testSpeedBlock; // +0x48
}
- (void)testSpeedRequestWithModel:(id)arg1 testSpeedBlock:(id /* block */)arg2;
- (void)testSpeedComplete:(LiveSpeedTestResult *)arg1;
- (void)testSpeedParameterRequestWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)safeCompleteMethod;
- (void)forceStopRequest;
- (id /* block */)testSpeedBlock;
- (void)setTestSpeedBlock:(id /* block */)arg1;
- (BOOL)isComplete;
- (void)setIsComplete:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
