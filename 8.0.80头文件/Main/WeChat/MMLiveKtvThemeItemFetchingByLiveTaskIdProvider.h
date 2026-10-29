@interface MMLiveKtvThemeItemFetchingByLiveTaskIdProvider : NSObject <MMLiveKtvThemeItemFetching>
{
    MMFinderLiveTaskId * _taskId; // +0x8
}
- (id)initWithTaskId:(id)arg1;
- (void)fetchThemeItemsWithCompletionBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
