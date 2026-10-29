@interface WCPayOverseaMainWalletGrayCell : UICollectionViewCell
{
    int _radius; // +0x8
    MMWebImageView * _m_iconView; // +0x10
    UILabel * _m_descriptionLabel; // +0x18
    UILabel * _m_extraInfoLabel; // +0x20
    WalletGrayAreaItem * _m_item; // +0x28
}
- (void)udpateGrayItem:(id)arg1 raduis:(int)arg2;
- (void)layoutSubviews;
- (void)updateViewData;
- (void)updateIconView;
- (void)updateDescriptionLabel;
- (void)updateExtraInfoLabel;
- (void)setHighlighted:(BOOL)arg1;
- (id)utf8String:(id)arg1;
- (id)contentAccessbilityLabel;
- (id)extraInfoForAccessbilityLabel;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_descriptionLabel;
- (void)setM_descriptionLabel:(id)arg1;
- (id)m_extraInfoLabel;
- (void)setM_extraInfoLabel:(id)arg1;
- (id)m_item;
- (void)setM_item:(id)arg1;
- (int)radius;
- (void)setRadius:(int)arg1;
- (void).cxx_destruct;
@end
