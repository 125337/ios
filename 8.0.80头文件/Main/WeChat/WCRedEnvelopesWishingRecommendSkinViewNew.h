@interface WCRedEnvelopesWishingRecommendSkinViewNew : UIView
{
    BOOL _hasRefresh; // +0x8
    BOOL _isNewFuncPromotion; // +0x9
    UIView * _sepLineView; // +0x10
    NSString * _title; // +0x18
    UILabel * _titleLabel; // +0x20
    WCPayWebImageView * _promotionImageView; // +0x28
    UILabel * _promotionTitleLabel; // +0x30
    UIView * _recommendSkinView; // +0x38
    UIView * _recommendSkinView2; // +0x40
    UIImageView * _arrowImageView; // +0x48
    NSArray * _recommendSkinList; // +0x50
    id <WCRedEnvelopesWishingRecommendSkinViewNewDelegate> _delegate; // +0x58
    GetDefaultRedpacketResponse * _promotionFuncParams; // +0x60
    UIView * _promotionFuncView; // +0x68
    WCPayWebImageView * _promotionEndImageView; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 recommendSkinList:(id)arg3 isNewFuncPromotion:(BOOL)arg4 promotionFuncParams:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 recommendSkinList:(id)arg3;
- (void)setupViews;
- (void)layoutRecommendCoverView:(id)arg1;
- (void)onClick;
- (BOOL)isSameList:(id)arg1;
- (void)refreshWithSkinList:(id)arg1;
- (id)sepLineView;
- (void)setSepLineView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)promotionImageView;
- (void)setPromotionImageView:(id)arg1;
- (id)promotionTitleLabel;
- (void)setPromotionTitleLabel:(id)arg1;
- (id)recommendSkinView;
- (void)setRecommendSkinView:(id)arg1;
- (id)recommendSkinView2;
- (void)setRecommendSkinView2:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)recommendSkinList;
- (void)setRecommendSkinList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasRefresh;
- (void)setHasRefresh:(BOOL)arg1;
- (BOOL)isNewFuncPromotion;
- (void)setIsNewFuncPromotion:(BOOL)arg1;
- (id)promotionFuncParams;
- (void)setPromotionFuncParams:(id)arg1;
- (id)promotionFuncView;
- (void)setPromotionFuncView:(id)arg1;
- (id)promotionEndImageView;
- (void)setPromotionEndImageView:(id)arg1;
- (void).cxx_destruct;
@end
