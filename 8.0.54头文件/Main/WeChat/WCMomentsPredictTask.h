@interface WCMomentsPredictTask : NSObject
{
    id /* block */ _completionHandler; // +0x8
}
- (id)taskID;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)main;
- (void)didComplete;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

