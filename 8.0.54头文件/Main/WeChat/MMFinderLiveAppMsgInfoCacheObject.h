@interface MMFinderLiveAppMsgInfoCacheObject : NSObject
{
    id /* block */ _processAppMsgBlock; // +0x8
}
- (id)initWithProcessAppMsgBlock:(id /* block */)arg1;
- (void)process;
- (id /* block */)processAppMsgBlock;
- (void)setProcessAppMsgBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

