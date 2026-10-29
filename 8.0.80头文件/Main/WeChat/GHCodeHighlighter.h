@interface GHCodeHighlighter : NSObject
{
    long long _maxConcurrentTaskCount; // +0x8
    NSOperationQueue * _taskQueue; // +0x10
}
+ (id)sharedHighlighter;
- (id)init;
- (void)setMaxConcurrentTaskCount:(long long)arg1;
- (void)highlightCode:(id)arg1 language:(id)arg2 theme:(id)arg3 completion:(id /* block */)arg4;
- (id)highlightCode:(id)arg1 language:(id)arg2 theme:(id)arg3;
- (long long)maxConcurrentTaskCount;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (void).cxx_destruct;
@end
