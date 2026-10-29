@interface ECProductCardViewModel : NSObject
{
    BOOL _hasProductTags; // +0x8
    BOOL _hasFriendsTags; // +0x9
    EcProductCard * _cardModel; // +0x10
    NSAttributedString * _attrTitle; // +0x18
    NSAttributedString * _attrPrice; // +0x20
    NSAttributedString * _attrPriceForOverview; // +0x28
    NSAttributedString * _attrSales; // +0x30
    long long _viewWidth; // +0x38
    long long _overviewHeight; // +0x40
    long long _heightTitle; // +0x48
}
+ (id)prodcutTagsConfig;
+ (id)friendsTagsConfig;
+ (id)convertFromCardModelList:(id)arg1;
- (id)initWithCardModel:(id)arg1;
- (void)setViewWidth:(long long)arg1;
- (id)attrTitle;
- (void)_calcuteTitleHeight;
- (void)_resetTagsStatus;
- (id)attrPrice;
- (id)attrSales;
- (id)attrPriceForOverview;
- (void)_resetPriceAndSales;
- (id)cardModel;
- (BOOL)hasProductTags;
- (long long)viewWidth;
- (long long)overviewHeight;
- (void)setOverviewHeight:(long long)arg1;
- (long long)heightTitle;
- (BOOL)hasFriendsTags;
- (void).cxx_destruct;
@end
