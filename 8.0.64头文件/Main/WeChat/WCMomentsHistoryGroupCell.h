@interface WCMomentsHistoryGroupCell : MMTableViewCell
{
    UIImageView * _leftCheckMark; // +0x8
    ContactsItemView * _historyGroupItemView; // +0x10
    UIButton * _rightDetailBtn; // +0x18
    UIView * _seperatorLine; // +0x20
    CContact * _historyGroupContact; // +0x28
    id /* block */ _detailCallback; // +0x30
}
+ (id)cellIdentifier;
- (void)updateWithHistoryGroupContact:(id)arg1 checked:(BOOL)arg2 clickedDetail:(id /* block */)arg3;
- (void)updateCheckMark:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initHistoryGroupItemView;
- (void)initRightDetailBtn;
- (void)initSeperatorLine;
- (void)onClickHistoryGroupDetail:(id)arg1;
- (void)layoutSubviews;
- (id)leftCheckMark;
- (void)setLeftCheckMark:(id)arg1;
- (id)historyGroupItemView;
- (void)setHistoryGroupItemView:(id)arg1;
- (id)rightDetailBtn;
- (void)setRightDetailBtn:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)historyGroupContact;
- (void)setHistoryGroupContact:(id)arg1;
- (id /* block */)detailCallback;
- (void)setDetailCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
