@interface WCOutSearchContactTableViewCell : MMTableViewCell
{
    MMHeadImageView * _headImageView; // +0x8
    AttributeLabel * _nameLabel; // +0x10
    AttributeLabel * _phoneLabel; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configureCellWithName:(id)arg1 phone:(id)arg2 mmusername:(id)arg3 headImageURL:(id)arg4 searchText:(id)arg5;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)phoneLabel;
- (void)setPhoneLabel:(id)arg1;
- (void).cxx_destruct;
@end
