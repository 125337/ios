@interface MMFinderLiveAnchorCustomizeRewardPagFileLoader : NSObject
{
    MMLiveResourceFetcherFanoutFlowAction * _resourceFetcher; // +0x8
    NSMutableDictionary * _taskDictionary; // +0x10
    NSMutableDictionary * _completionDictionary; // +0x18
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x20
}
- (id)init;
- (void)loadPagFileWithUrl:(id)arg1 md5:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceFetcher;
- (void)setResourceFetcher:(id)arg1;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)completionDictionary;
- (void)setCompletionDictionary:(id)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
