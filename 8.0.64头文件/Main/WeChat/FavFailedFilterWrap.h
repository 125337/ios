@interface FavFailedFilterWrap : NSObject
{
    FavSourceIdFiltersAndCtx * _failedFilter; // +0x8
    NSDate * _failedTime; // +0x10
}
- (id)failedFilter;
- (void)setFailedFilter:(id)arg1;
- (id)failedTime;
- (void)setFailedTime:(id)arg1;
- (void).cxx_destruct;
@end
