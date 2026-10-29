@interface WCRedEnvelopesPromotionCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    BOOL _isSkinSelected; // +0x8
    BOOL _isSmallPicMode; // +0x9
    UIView * _promotionCellBackgroundView; // +0x10
    UIView * _borderView; // +0x18
    WCRedEnvelopesReceiveHomeTemplateView * _templateItemView; // +0x20
    UILabel * _corporationLabel; // +0x28
    UILabel * _corporationLabel2; // +0x30
    UILabel * _promotionWordingLabel; // +0x38
    HbEnvelopSource * _hbShowResource; // +0x40
    WCRedEnvelopesReceiveHomeTemplateItem * _templateItem; // +0x48
    UIImageView * _backgroundImageView; // +0x50
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateView;
- (void)updateBackgroundView;
- (void)layoutSubviews;
- (void)updateCellData:(id)arg1 isSmallPicMode:(BOOL)arg2;
- (void)updateCellData:(id)arg1;
- (void)setPromotionCellSelected:(BOOL)arg1;
- (void)startDoneAnimation;
- (id)promotionCellBackgroundView;
- (void)setPromotionCellBackgroundView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)templateItemView;
- (void)setTemplateItemView:(id)arg1;
- (id)corporationLabel;
- (void)setCorporationLabel:(id)arg1;
- (id)corporationLabel2;
- (void)setCorporationLabel2:(id)arg1;
- (id)promotionWordingLabel;
- (void)setPromotionWordingLabel:(id)arg1;
- (id)hbShowResource;
- (void)setHbShowResource:(id)arg1;
- (id)templateItem;
- (void)setTemplateItem:(id)arg1;
- (BOOL)isSkinSelected;
- (void)setIsSkinSelected:(BOOL)arg1;
- (BOOL)isSmallPicMode;
- (void)setIsSmallPicMode:(BOOL)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (void).cxx_destruct;
@end

