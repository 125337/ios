@interface WXGRoamBackupPackageDetailCell : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLable; // +0x10
    UILabel * _prefix; // +0x18
    UIImageView * _arrowImg; // +0x20
    UIColor * _subTitleColor; // +0x28
    NSArray * _bottomSubTitleViews; // +0x30
    UIView * _seperator1; // +0x38
    unsigned long long _seperateType; // +0x40
    double _additionalHeight; // +0x48
}
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(BOOL)arg5;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(BOOL)arg5 showPrefix:(BOOL)arg6 subTitleColor:(id)arg7;
- (void)updateSeperator;
- (void)setSubTitle:(id)arg1;
- (void)setSubTitleAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)removeBottomSubTitleViews;
- (void)setBottomSubTitles:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLable;
- (void)setSubTitleLable:(id)arg1;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (id)arrowImg;
- (void)setArrowImg:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (id)bottomSubTitleViews;
- (void)setBottomSubTitleViews:(id)arg1;
- (id)seperator1;
- (void)setSeperator1:(id)arg1;
- (unsigned long long)seperateType;
- (void)setSeperateType:(unsigned long long)arg1;
- (double)additionalHeight;
- (void)setAdditionalHeight:(double)arg1;
- (void).cxx_destruct;
@end
