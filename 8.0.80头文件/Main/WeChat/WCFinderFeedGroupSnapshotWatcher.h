@interface WCFinderFeedGroupSnapshotWatcher : WCFinderFeedGroupWatcher
{
    WCFinderAction * _action; // +0x8
    NSDiffableDataSourceSnapshot * _snapshot; // +0x10
}
- (void)onFeedArraySourceDidChange:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
