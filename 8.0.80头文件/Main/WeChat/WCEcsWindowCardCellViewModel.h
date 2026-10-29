@interface WCEcsWindowCardCellViewModel : AppStandardTextContentMessageViewModel
{
    WCEcsWindowCardViewBuilder * _builder; // +0x70
    WCFinderLiveShopWindowShareItem * _loadedItem; // +0x78
    AnyPromise * _loadDataIfNeverPromise; // +0x80
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)updateRemoteItem:(id)arg1;
- (id)cellViewClassName;
- (id)title;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (id)additionalAccessibilityDescription;
- (id)sourceTitle;
- (double)estimateWidth;
- (id)item;
- (id)finderUsername;
- (id)loadDataIfNever;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (id)loadedItem;
- (void)setLoadedItem:(id)arg1;
- (id)loadDataIfNeverPromise;
- (void)setLoadDataIfNeverPromise:(id)arg1;
- (void).cxx_destruct;
@end
