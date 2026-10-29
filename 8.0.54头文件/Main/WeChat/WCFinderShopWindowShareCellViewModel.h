@interface WCFinderShopWindowShareCellViewModel : CommonMessageViewModel
{
    WCFinderLiveDisplayWindowShareViewBuilder * _builder; // +0x70
    WCFinderLiveShopWindowShareItem * _loadedItem; // +0x78
    WCFinderLiveAudienceComodityLogReporter * _reporter; // +0x80
    AnyPromise * _loadDataIfNeverPromise; // +0x88
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)loadDataIfNever;
- (id)finderUsername;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (double)estimateWidth;
- (id)comodityLogReporter;
- (void)onExposeReport;
- (void)reportEcsData:(id)arg1;
- (void)onClickReport;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (id)loadedItem;
- (void)setLoadedItem:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)loadDataIfNeverPromise;
- (void)setLoadDataIfNeverPromise:(id)arg1;
- (void).cxx_destruct;
@end

