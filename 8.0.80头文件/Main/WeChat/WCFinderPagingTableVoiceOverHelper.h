@interface WCFinderPagingTableVoiceOverHelper : NSObject
{
    id <WCFinderPagingTableVoiceOverDataSource> _dataSource; // +0x8
}
- (id)initWithDataSource:(id)arg1;
- (void)configureAccessibilityForTableView:(id)arg1 containerView:(id)arg2;
- (id)visibleAccessibilityElements;
- (BOOL)handleAccessibilityScroll:(long long)arg1;
- (void)postLayoutChangedToCurrentCell;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end
