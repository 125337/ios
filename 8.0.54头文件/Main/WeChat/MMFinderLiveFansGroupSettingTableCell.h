@interface MMFinderLiveFansGroupSettingTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    BOOL _isSwitchOn; // +0x9
    BOOL _isReserved; // +0xa
    NSString * _leftTitle; // +0x10
    unsigned long long _settingType; // +0x18
    id /* block */ _valueChangeCallback; // +0x20
    MMUILabel * _leftTitleLabel; // +0x28
    UIView * _rightView; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLeftTitleLabel;
- (void)layoutRightView;
- (void)setLeftTitle:(id)arg1;
- (void)setSettingType:(unsigned long long)arg1;
- (void)setIsSwitchOn:(BOOL)arg1;
- (void)setIsReserved:(BOOL)arg1;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)arg1;
- (void)updateReserveButtonTitleAndImage;
- (void)switchDidChanged:(id)arg1;
- (void)onReserveButtonClicked:(id)arg1;
- (id)leftTitle;
- (unsigned long long)settingType;
- (BOOL)isSwitchOn;
- (BOOL)isReserved;
- (id /* block */)valueChangeCallback;
- (void)setValueChangeCallback:(id /* block */)arg1;
- (id)leftTitleLabel;
- (void)setLeftTitleLabel:(id)arg1;
- (id)rightView;
- (void)setRightView:(id)arg1;
- (void).cxx_destruct;
@end

