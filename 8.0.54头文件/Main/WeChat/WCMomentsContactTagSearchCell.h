@interface WCMomentsContactTagSearchCell : MMTableViewCell
{
    UIView * _seperatorLine; // +0x8
    MMUILabel * _nameLabel; // +0x10
    MMUILabel * _memberCountLabel; // +0x18
    ContactTagData * _tagData; // +0x20
    NSString * _query; // +0x28
}
+ (id)cellIdentifier;
- (void)updateWithTagData:(id)arg1 query:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)initNameLabel;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)layoutSubviews;
- (void)updateNameLabelText;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)memberCountLabel;
- (void)setMemberCountLabel:(id)arg1;
- (id)tagData;
- (void)setTagData:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

