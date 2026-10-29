@interface WCFinderHistoryViewModel : NSObject
{
    BOOL _showSearchIcon; // +0x8
    id <WCFinderHistoryViewModelDelegate> _delegate; // +0x10
    WCFinderFeedGroup * _feedGroup; // +0x18
    WCFinderStreamLoadingState * _loadingState; // +0x20
    long long _historyRecardDays; // +0x28
    unsigned long long _requestId; // +0x30
}
+ (id /* block */)mapSessionBlock;
- (id)init;
- (id)feedArray;
- (void)setShowSearchIcon:(BOOL)arg1;
- (int)scene;
- (id)noMoreTips;
- (void)startRequest;
- (void)updateHistoryRecardDays:(long long)arg1;
- (void)clear;
- (void)deleteFeed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedGroup;
- (void)setFeedGroup:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (long long)historyRecardDays;
- (void)setHistoryRecardDays:(long long)arg1;
- (BOOL)showSearchIcon;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

