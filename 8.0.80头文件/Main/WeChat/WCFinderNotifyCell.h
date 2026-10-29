@interface WCFinderNotifyCell : UITableViewCell
{
    UIView * _cardView; // +0x8
    RichTextView * _contentTextView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _timeLabel; // +0x20
    UILabel * _detailLabel; // +0x28
    UIImageView * _detailImageView; // +0x30
    UIView * _lineView; // +0x38
    UIView * _highlightView; // +0x40
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)timeWidthForText:(id)arg1 contentWidth:(double)arg2;
+ (CGSize)titleSizeForText:(id)arg1 timeText:(id)arg2 contentWidth:(double)arg3;
+ (double)contentHeightForText:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)updateDataWith:(id)arg1 cellWidth:(double)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)cardView;
- (void)setCardView:(id)arg1;
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
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
