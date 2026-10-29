@interface WXGRoamBackupPackageDetailCell : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLable; // +0x10
    UILabel * _prefix; // +0x18
    UIImageView * _arrowImg; // +0x20
}
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(BOOL)arg5;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(BOOL)arg5 showPrefix:(BOOL)arg6 subTitleColor:(id)arg7;
- (void)setSubTitle:(id)arg1;
- (void)setEnabled;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLable;
- (void)setSubTitleLable:(id)arg1;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (id)arrowImg;
- (void)setArrowImg:(id)arg1;
- (void).cxx_destruct;
@end

