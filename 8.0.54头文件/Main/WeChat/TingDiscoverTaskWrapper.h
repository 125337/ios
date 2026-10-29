@interface TingDiscoverTaskWrapper : NSObject
{
    id /* block */ _discoverCompletion; // +0x8
    id /* block */ _getCommentInfoCompletion; // +0x10
}
- (id /* block */)discoverCompletion;
- (void)setDiscoverCompletion:(id /* block */)arg1;
- (id /* block */)getCommentInfoCompletion;
- (void)setGetCommentInfoCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

