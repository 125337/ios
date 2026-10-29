@interface WCFinderPostShareToCommentCell : UITableViewCell
{
    MMUIButton * _checkboxBtn; // +0x8
    RichTextView * _titleLabel; // +0x10
    UILabel * _tipsLabel; // +0x18
    WCFinderPostAttachCellConfig * _currentConfig; // +0x20
}
+ (double)cellHeightWithConfig:(id)arg1 containerWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)updateWithConfig:(id)arg1;
- (void)layoutSubviews;
- (void)onCheckboxClick:(id)arg1;
- (id)checkboxBtn;
- (void)setCheckboxBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)currentConfig;
- (void)setCurrentConfig:(id)arg1;
- (void).cxx_destruct;
@end
