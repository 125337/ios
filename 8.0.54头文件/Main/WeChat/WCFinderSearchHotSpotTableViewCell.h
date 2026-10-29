@interface WCFinderSearchHotSpotTableViewCell : UITableViewCell <RichTextLayoutDelegate>
{
    UIView * _containerView; // +0x8
    unsigned long long _cellType; // +0x10
    RichTextView * _titleLabel; // +0x18
    UIView * _lineView; // +0x20
    UILabel * _reasonLabel; // +0x28
    unsigned long long _rowCount; // +0x30
}
+ (double)cellHWithHotWord:(id)arg1 cellW:(double)arg2;
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)updateUIWithHotWord:(id)arg1 type:(unsigned long long)arg2 width:(double)arg3;
- (void)layoutSubviews;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg1;
- (unsigned long long)rowCount;
- (void)setRowCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

