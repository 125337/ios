@interface WCEcsShopCardCellViewModel : AppStandardAccountContentMessageViewModel
{
    WCEcsShopCardViewBuilder * _builder; // +0x70
    AnyPromise * _loadDataIfNeverPromise; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)updateRemoteItem:(id)arg1;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (id)item;
- (id)finderUsername;
- (unsigned long long)avatarType;
- (id)accountName;
- (id)accountDesc;
- (id)descIconUrl;
- (id)sourceTitle;
- (id)loadDataIfNever;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (id)loadDataIfNeverPromise;
- (void)setLoadDataIfNeverPromise:(id)arg1;
- (void).cxx_destruct;
@end
