@interface WCMicroMerchantMoreViewModel : NSObject <WCTimelineFooterItemViewModel>
{
    BOOL _isMicroMerchantFold; // +0x8
    BOOL _hasMoreFeeds; // +0x9
    WCDataItem * _dataItem; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    unsigned long long _feedCount; // +0x20
    NSString * _moreText; // +0x28
}
- (id)initWithDataItem:(id)arg1 pageContext:(id)arg2;
- (void)reloadProperties;
- (BOOL)shouldDisplayItemInTimelineFooterView;
- (id)dataItem;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)isMicroMerchantFold;
- (void)setIsMicroMerchantFold:(BOOL)arg1;
- (unsigned long long)feedCount;
- (void)setFeedCount:(unsigned long long)arg1;
- (BOOL)hasMoreFeeds;
- (void)setHasMoreFeeds:(BOOL)arg1;
- (id)moreText;
- (void)setMoreText:(id)arg1;
- (void).cxx_destruct;
@end
