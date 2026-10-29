@interface WCHardLinkMergeOperation : NSOperation
{
    id /* block */ _mergeCompletion; // +0x8
}
- (id)initWithCompletion:(id /* block */)arg1;
- (void)start;
- (void)hardlinkTheSameFile;
- (id /* block */)mergeCompletion;
- (void)setMergeCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
