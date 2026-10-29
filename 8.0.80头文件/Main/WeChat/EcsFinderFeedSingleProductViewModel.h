@interface EcsFinderFeedSingleProductViewModel : NSObject <IEcsFinderFeedProductViewModel>
{
    FinderFeedEcProductCard * _productCard; // +0x8
    id /* block */ _getCurrentNavigationControllerAction; // +0x10
    id /* block */ _onShowCallback; // +0x18
    id /* block */ _onDisappearCallback; // +0x20
    id /* block */ _onRecycleCallback; // +0x28
    id /* block */ _onFinderCardInfoUpdatedCallback; // +0x30
    NSURL * _headImgUrl; // +0x38
    EcsFinderFeedPopupViewModel * _popupVM; // +0x40
    EcsRichLabelViewModel * _titleVM; // +0x48
    EcsRichLabelViewModel * _priceVM; // +0x50
    EcsTagsViewModel * _priceDescTagVM; // +0x58
    EcsTagsViewModel * _productTagsVM; // +0x60
    EcsRichLabelViewModel * _bulkBuyIconDescVM; // +0x68
    EcsRichLabelViewModel * _bulkBuyAvatarDescVM; // +0x70
    EcsRichLabelViewModel * _customerTitleVM; // +0x78
    EcsRichLabelViewModel * _customerMoreVM; // +0x80
    EcsRichTextButtonViewModel * _buyButtonVM; // +0x88
    EcsRichLabelViewModel * _friendsLikedTitleVM; // +0x90
    EcsRichLabelViewModel * _friendsLikedDescVM; // +0x98
    NSObject * _finderReportInfo; // +0xa0
    long long _startShowTime; // +0xa8
}
+ (id)createWithProductCardDataBuffer:(id)arg1;
+ (id)createWithProductCard:(id)arg1;
- (id)initWithProductCard:(id)arg1;
- (void)setProductCard:(id)arg1;
- (void)setFinderCardInfo:(id)arg1;
- (id)finderCardInfo;
- (void)onShow;
- (void)onDisappear;
- (void)onRecycle;
- (void)reportLiveEntranceWithIsClick:(BOOL)arg1 productFeedId:(id)arg2;
- (id)liveExportObjectFromProductCard;
- (id)finderDataItemWithLiveExportObject:(id)arg1;
- (void)mmDataElementId:(id)arg1 actionType:(id)arg2 elementInfo:(id)arg3;
- (BOOL)showFriendsLikedBar;
- (id)productCard;
- (id /* block */)getCurrentNavigationControllerAction;
- (void)setGetCurrentNavigationControllerAction:(id /* block */)arg1;
- (id /* block */)onShowCallback;
- (void)setOnShowCallback:(id /* block */)arg1;
- (id /* block */)onDisappearCallback;
- (void)setOnDisappearCallback:(id /* block */)arg1;
- (id /* block */)onRecycleCallback;
- (void)setOnRecycleCallback:(id /* block */)arg1;
- (id /* block */)onFinderCardInfoUpdatedCallback;
- (void)setOnFinderCardInfoUpdatedCallback:(id /* block */)arg1;
- (id)headImgUrl;
- (id)popupVM;
- (id)titleVM;
- (id)priceVM;
- (id)priceDescTagVM;
- (id)productTagsVM;
- (id)bulkBuyIconDescVM;
- (id)bulkBuyAvatarDescVM;
- (id)customerTitleVM;
- (id)customerMoreVM;
- (id)buyButtonVM;
- (id)friendsLikedTitleVM;
- (id)friendsLikedDescVM;
- (id)finderReportInfo;
- (void)setFinderReportInfo:(id)arg1;
- (long long)startShowTime;
- (void)setStartShowTime:(long long)arg1;
- (void).cxx_destruct;
@end
