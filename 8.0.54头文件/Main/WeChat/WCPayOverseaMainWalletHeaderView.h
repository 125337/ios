@interface WCPayOverseaMainWalletHeaderView : UICollectionReusableView
{
    WCPayOverseaTypeInfoObject * _m_typeInfo; // +0x8
    UILabel * _m_titleLabel; // +0x10
    UIView * _m_backgroundView; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)updateViewData;
- (void)updateBackgroundView;
- (void)updateTitleLabel;
- (void)updateTypeInfo:(id)arg1;
- (id)contentAccessbilityLabel;
- (id)m_typeInfo;
- (void)setM_typeInfo:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (void).cxx_destruct;
@end

