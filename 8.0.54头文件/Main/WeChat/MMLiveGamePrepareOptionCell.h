@interface MMLiveGamePrepareOptionCell : WCTableViewNormalCellManager
{
    UIView * _contentView; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _optionLabel; // +0x18
    UILabel * _selectLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)initWith:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 rightText:(id)arg5 icon:(id)arg6;
- (void)updateLabelWithSelectedJoinTeamMode:(unsigned int)arg1 labelText:(id)arg2 coinValue:(unsigned int)arg3;
- (void)updateLabel:(id)arg1;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)optionLabel;
- (void)setOptionLabel:(id)arg1;
- (id)selectLabel;
- (void)setSelectLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

