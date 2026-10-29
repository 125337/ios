@interface WCFinderProductShareCellViewModel : CommonMessageViewModel
{
    WCFinderProductShareViewBuilder * _builder; // +0x70
    NSString * _livingFinderUsername; // +0x78
    NSString * _sessionId; // +0x80
    AnyPromise * _getPreloadDataPromise; // +0x88
    NSDate * _visibleDate; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)defaultContentViewSize;
- (double)estimateWidth;
- (id)additionalAccessibilityDescription;
- (id)builder;
- (id)genFinderDataItem;
- (void)updateWithFetchData:(id)arg1;
- (void)onCardInfoChanged;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)sessionId;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onReportClickWithUserInfo:(id)arg1;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (id)item;
- (BOOL)isShareWithAnchor;
- (id)createFetchProductPromiseForce:(BOOL)arg1;
- (id)fetchProductInfoOnClicked;
- (id)fetchProductInfoIfNever;
- (void)reportEcsData:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setBuilder:(id)arg1;
- (id)livingFinderUsername;
- (void)setLivingFinderUsername:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)getPreloadDataPromise;
- (void)setGetPreloadDataPromise:(id)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end

