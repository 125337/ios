@interface NewLifeShareMessageViewModel : CommonMessageViewModel
{
    WCFinderShareToMomentsItem * _item; // +0x70
    NewLifeShareCoverImageViewModel * _innerViewModel; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)item;
- (id)innerViewModel;
- (CGSize)estimateSize;
- (void)exposeReport;
- (void)preloadEngineGroup;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)cellViewClassName;
- (void)setItem:(id)arg1;
- (void)setInnerViewModel:(id)arg1;
- (void).cxx_destruct;
@end

