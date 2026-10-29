@interface WCMomentsContactTagCombinedCell : WCMomentsContactTagBaseCell
{
    BOOL _hideDetailButton; // +0x8
    BOOL _hideCheckbox; // +0x9
    UIColor * _checkboxSelectedColor; // +0x10
    UIImageView * _leftCheckMark; // +0x18
    UIButton * _rightDetailBtn; // +0x20
    UIView * _seperatorLine; // +0x28
    MMUILabel * _nameLabel; // +0x30
    MMUILabel * _memberLabel; // +0x38
    MMUILabel * _memberCountLabel; // +0x40
    ContactTagData * _tagData; // +0x48
}
+ (id)cellIdentifier;
- (void)updateContactTag:(id)arg1 checked:(BOOL)arg2 clickedDetail:(id /* block */)arg3;
- (void)updateContactTag:(id)arg1 checked:(BOOL)arg2 query:(id)arg3 clickedDetail:(id /* block */)arg4;
- (void)updateContactTag:(id)arg1 checked:(BOOL)arg2 query:(id)arg3 dicSearchMatchTip:(id)arg4 maxMemberDescWidth:(double)arg5 clickedDetail:(id /* block */)arg6;
- (void)updateCheckState:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)layoutSubviews;
- (void)onClickDetail:(id)arg1;
- (id)checkboxSelectedColor;
- (void)setCheckboxSelectedColor:(id)arg1;
- (BOOL)hideDetailButton;
- (void)setHideDetailButton:(BOOL)arg1;
- (BOOL)hideCheckbox;
- (void)setHideCheckbox:(BOOL)arg1;
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
- (id)tagData;
- (void)setTagData:(id)arg1;
- (void).cxx_destruct;
@end
