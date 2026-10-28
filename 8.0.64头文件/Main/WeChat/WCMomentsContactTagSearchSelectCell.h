@interface WCMomentsContactTagSearchSelectCell : MMTableViewCell
{
    unsigned long long _checkType; // +0x8
    UIView * _seperatorLine; // +0x10
    UIImageView * _leftCheckMark; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _memberCountLabel; // +0x28
    ContactTagData * _tagData; // +0x30
    NSString * _query; // +0x38
}
+ (id)cellIdentifier;
- (void)updateWithTagData:(id)arg1 checkType:(unsigned long long)arg2 query:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initNameLabel;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)layoutSubviews;
- (void)updateWithCheckType:(unsigned long long)arg1;
- (void)updateNameLabelText;
- (unsigned long long)checkType;
- (void)setCheckType:(unsigned long long)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)leftCheckMark;
- (void)setLeftCheckMark:(id)arg1;
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
