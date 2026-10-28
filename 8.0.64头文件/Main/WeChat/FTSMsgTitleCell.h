@interface FTSMsgTitleCell : MMTableViewCell
{
    AttributeLabel * _titleLabel; // +0x8
    AttributeLabel * _subTitleLabel; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMHeadImageView * _secdHeadImageView; // +0x20
    UIView * _topLine; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView:(double)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateTitle:(id)arg1 andContact:(id)arg2 andMatchTip:(id)arg3 andSubContact:(id)arg4 andSubMatchTip:(id)arg5;
- (void)updateTitle:(id)arg1 matchTip:(id)arg2 query:(id)arg3;
- (id)titleWithSuffix:(id)arg1 contentRange:(_NSRange *)arg2;
- (id)titleWithArrow:(id)arg1 contentRange:(_NSRange *)arg2 arrowRange:(_NSRange *)arg3;
- (id)convertCompressString:(id)arg1 font:(id)arg2 markLocation:(unsigned long long)arg3;
- (void).cxx_destruct;
@end
