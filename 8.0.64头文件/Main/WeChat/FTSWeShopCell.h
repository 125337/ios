@interface FTSWeShopCell : MMTableViewCell
{
    BOOL _isTopHits; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    AttributeLabel * _titleLabel; // +0x18
    MMWebImageView * _rIconImageView; // +0x20
    MMUILabel * _tagLabel; // +0x28
    AttributeLabel * _detailLabel; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1 keywords:(id)arg2 isTopHits:(BOOL)arg3;
- (void)layoutSubviews;
- (id)tagTextForTagType:(unsigned int)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rIconImageView;
- (void)setRIconImageView:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (BOOL)isTopHits;
- (void)setIsTopHits:(BOOL)arg1;
- (void).cxx_destruct;
@end
