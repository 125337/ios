@interface FavBatchDelSourceIdTask : NSObject
{
    unsigned int _scene; // +0x8
    FavSourceIdFiltersAndCtx * _filter; // +0x10
    NSMutableArray * _completions; // +0x18
}
- (id)filter;
- (void)setFilter:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (void).cxx_destruct;
@end
