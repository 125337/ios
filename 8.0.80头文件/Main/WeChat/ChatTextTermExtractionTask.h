@interface ChatTextTermExtractionTask : NSObject
{
    BOOL _started; // +0x8
    BOOL _finished; // +0x9
    id /* block */ _completion; // +0x10
}
- (void)startWithText:(id)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
