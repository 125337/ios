@interface WCFinderFeedBatchUpdateWatcher : WCFinderFeedArrayWatcher
{
    WCFinderAction * _action; // +0x8
    NSArray * _tidArray; // +0x10
}
- (void)onFeedArrayWatcherAttach:(id)arg1;
- (void)onFeedArraySourceDidChange:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)tidArray;
- (void)setTidArray:(id)arg1;
- (void).cxx_destruct;
@end
