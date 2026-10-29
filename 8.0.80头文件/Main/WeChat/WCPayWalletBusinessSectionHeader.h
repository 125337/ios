@interface WCPayWalletBusinessSectionHeader : UICollectionReusableView
{
    WalletGroupInfo * _headerData; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _nameLabel; // +0x18
}
- (void)layoutSubviews;
- (void)updateViewWithHeaderData:(id)arg1;
- (void)updateView;
- (void)updateContentView;
- (void)updateHeaderName;
- (id)headerData;
- (void)setHeaderData:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
