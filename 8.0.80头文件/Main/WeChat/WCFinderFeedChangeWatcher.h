@interface WCFinderFeedChangeWatcher : WCFinderFeedArrayWatcher
{
    WCFinderAction * _action; // +0x8
}
- (void)onFeedArraySourceDidChange:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end
