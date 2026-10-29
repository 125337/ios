@interface WCFinderNotifyCell : UITableViewCell
{
    RichTextView * _contentTextView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _timeLabel; // +0x18
    UILabel * _detailLabel; // +0x20
    UIImageView * _detailImageView; // +0x28
    UIView * _lineView; // +0x30
    UIView * _bottomLineView; // +0x38
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)updateDataWith:(id)arg1 cellWidth:(double)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)detailImageView;
- (void)setDetailImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (void).cxx_destruct;
@end

