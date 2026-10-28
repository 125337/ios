@interface WCAdCardInfo : NSObject <NSCoding>
{
    NSString * title; // +0x8
    NSString * description; // +0x10
    WCAdRatingCardInfo * adRatingCardInfo; // +0x18
    WCAdCardBtnInfo * adCardBtnInfo; // +0x20
    WCAdPromotionInfo * adPromotionInfo; // +0x28
    WCAdSellingPointInfo * _adSellingPointInfo; // +0x30
    WCAdMultiProductsInfo * _adMultiProductsInfo; // +0x38
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)setDescription:(id)arg1;
- (id)adRatingCardInfo;
- (void)setAdRatingCardInfo:(id)arg1;
- (id)adCardBtnInfo;
- (void)setAdCardBtnInfo:(id)arg1;
- (id)adPromotionInfo;
- (void)setAdPromotionInfo:(id)arg1;
- (id)adSellingPointInfo;
- (void)setAdSellingPointInfo:(id)arg1;
- (id)adMultiProductsInfo;
- (void)setAdMultiProductsInfo:(id)arg1;
- (void).cxx_destruct;
@end
