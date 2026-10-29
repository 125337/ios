@interface CBTAsstMemoryTopicCell : UITableViewCell
{
    BOOL _roundTop; // +0x8
    BOOL _roundBottom; // +0x9
    UIView * _cardView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIView * _separatorView; // +0x28
    NSArray * _previewLabels; // +0x30
    NSArray * _previewTitles; // +0x38
}
+ (double)preferredHeightForPreviewTitles:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithTopicTitle:(id)arg1 previewTitles:(id)arg2 showSeparator:(BOOL)arg3 roundTop:(BOOL)arg4 roundBottom:(BOOL)arg5;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)previewLabels;
- (void)setPreviewLabels:(id)arg1;
- (id)previewTitles;
- (void)setPreviewTitles:(id)arg1;
- (BOOL)roundTop;
- (void)setRoundTop:(BOOL)arg1;
- (BOOL)roundBottom;
- (void)setRoundBottom:(BOOL)arg1;
- (void).cxx_destruct;
@end
