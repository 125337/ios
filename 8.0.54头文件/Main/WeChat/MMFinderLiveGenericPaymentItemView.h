@interface MMFinderLiveGenericPaymentItemView : UIView
{
    BOOL _selected; // +0x8
    MMFinderLiveGenericPaymentItem * _item; // +0x10
    UILabel * _nameLabel; // +0x18
    UILabel * _priceLabel; // +0x20
    UIImageView * _webeanImageView; // +0x28
}
- (id)initWithItem:(id)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)item;
- (BOOL)selected;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)webeanImageView;
- (void)setWebeanImageView:(id)arg1;
- (void).cxx_destruct;
@end

