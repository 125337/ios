@interface WCFinderFeedBatchUpdateWatcher : WCFinderFeedArrayWatcher
{
    WCFinderAction * _action; // +0x8
    NSArray * _preTidArray; // +0x10
}
- (void)onFeedArraySourceDidChange:(id)arg1 change:(id)arg2;
- (id)action;
- (void)setAction:(id)arg1;
- (id)preTidArray;
- (void)setPreTidArray:(id)arg1;
- (void).cxx_destruct;
@end
