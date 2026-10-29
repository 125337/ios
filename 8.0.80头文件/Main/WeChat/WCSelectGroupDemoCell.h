@interface WCSelectGroupDemoCell : MMTableViewCell
{
    UIImageView * leftCheckMark; // +0x8
    UIImageView * rightArrowView; // +0x10
    UIButton * rightDetailBtn; // +0x18
    UIView * lineView; // +0x20
    UIView * headLineView; // +0x28
    MMUILabel * nameLabel; // +0x30
    MMUILabel * memberLabel; // +0x38
    BOOL detailDisabled; // +0x40
    int _currentCellType; // +0x44
    id /* block */ _detailCallback; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)getMemberDesc:(id)arg1;
- (void)updateCell:(int)arg1 cellWidth:(double)arg2 postPrivacy:(long long)arg3 labelName:(id)arg4 checked:(BOOL)arg5 expandMode:(BOOL)arg6 tempContacts:(id)arg7 clickedDetail:(id /* block */)arg8;
- (void)layoutSubviews;
- (void)onClickContactDetail:(id)arg1;
- (BOOL)detailDisabled;
- (void)setDetailDisabled:(BOOL)arg1;
- (id /* block */)detailCallback;
- (void)setDetailCallback:(id /* block */)arg1;
- (int)currentCellType;
- (void)setCurrentCellType:(int)arg1;
- (void).cxx_destruct;
@end
