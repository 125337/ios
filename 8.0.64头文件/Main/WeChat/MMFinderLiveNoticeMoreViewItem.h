@interface MMFinderLiveNoticeMoreViewItem : NSObject <MMFinderLiveNoticeListViewItem>
{
    BOOL _hasMore; // +0x8
    BOOL _isLoading; // +0x9
    id <MMFinderLiveNoticeMoreViewItemDelegate> _delegate; // +0x10
    NSString * _tips; // +0x18
}
- (Class)cellClass;
- (void)setHasMore:(BOOL)arg1;
- (void)didUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasMore;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (void).cxx_destruct;
@end
