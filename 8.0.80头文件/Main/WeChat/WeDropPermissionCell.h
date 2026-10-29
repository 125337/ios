@interface WeDropPermissionCell : UICollectionViewCell
{
    id <WeDropPermissionCellDelegate> _delegate; // +0x8
    unsigned long long _type; // +0x10
    UILabel * _numberLabel; // +0x18
    MMUILabel * _tipsLabel; // +0x20
    UILabel * _stateLabel; // +0x28
    MMUIActivityIndicatorView * _stateIndicator; // +0x30
    UIButton * _gotoSettingBtn; // +0x38
    UIView<WeDropNetworkPermissionCustomStatusView> * _customStateView; // +0x40
    unsigned long long _currentState; // +0x48
    UIView * _separatorLineTop; // +0x50
    UIView * _separatorLineBottom; // +0x58
}
+ (double)getCellHeightWithWidth:(double)arg1 tips:(id)arg2 state:(unsigned long long)arg3 showGoToSettingButton:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)showBottomLine;
- (void)prepareForReuse;
- (void)configWithNumber:(id)arg1 tips:(id)arg2 state:(unsigned long long)arg3 showGoToSettingButton:(BOOL)arg4;
- (void)updateStateView;
- (void)setCustomStateView:(id)arg1;
- (void)gotoSettingBtnTapped:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)stateIndicator;
- (void)setStateIndicator:(id)arg1;
- (id)gotoSettingBtn;
- (void)setGotoSettingBtn:(id)arg1;
- (id)customStateView;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (id)separatorLineTop;
- (void)setSeparatorLineTop:(id)arg1;
- (id)separatorLineBottom;
- (void)setSeparatorLineBottom:(id)arg1;
- (void).cxx_destruct;
@end
