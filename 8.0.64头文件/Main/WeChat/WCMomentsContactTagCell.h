@interface WCMomentsContactTagCell : MMTableViewCell
{
    UIImageView * _leftCheckMark; // +0x8
    UIButton * _rightDetailBtn; // +0x10
    UIView * _seperatorLine; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _memberLabel; // +0x28
    MMUILabel * _memberCountLabel; // +0x30
    id /* block */ _detailCallback; // +0x38
    ContactTagData * _tagData; // +0x40
}
+ (id)cellIdentifier;
- (void)updateContactTag:(id)arg1 checked:(BOOL)arg2 clickedDetail:(id /* block */)arg3;
- (void)updateCheckState:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initNameLabel;
- (void)initMemberLabel;
- (void)initRightDetailBtn;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)layoutSubviews;
- (id)getMemberDescWithTagData:(id)arg1;
- (unsigned long long)getMemberLableCountWithTagData:(id)arg1;
- (long long)getMaxMemberCount;
- (void)onClickContactTagDetail:(id)arg1;
- (id)leftCheckMark;
- (void)setLeftCheckMark:(id)arg1;
- (id)rightDetailBtn;
- (void)setRightDetailBtn:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)memberLabel;
- (void)setMemberLabel:(id)arg1;
- (id)memberCountLabel;
- (void)setMemberCountLabel:(id)arg1;
- (id /* block */)detailCallback;
- (void)setDetailCallback:(id /* block */)arg1;
- (id)tagData;
- (void)setTagData:(id)arg1;
- (void).cxx_destruct;
@end
