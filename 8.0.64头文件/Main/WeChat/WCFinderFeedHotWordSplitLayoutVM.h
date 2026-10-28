@interface WCFinderFeedHotWordSplitLayoutVM : WCFinderFeedLayoutContentVM
{
    BOOL _ignoreUpdateCell; // +0x8
    WCFinderSearchHotWord * _preHotword; // +0x10
    WCFinderSearchHotWord * _nextHotword; // +0x18
}
- (id)initWithPreHotWord:(id)arg1 nextHotword:(id)arg2;
- (id)preHotword;
- (void)setPreHotword:(id)arg1;
- (id)nextHotword;
- (void)setNextHotword:(id)arg1;
- (BOOL)ignoreUpdateCell;
- (void)setIgnoreUpdateCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
