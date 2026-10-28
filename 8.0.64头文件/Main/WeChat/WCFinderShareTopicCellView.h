@interface WCFinderShareTopicCellView : CommonMessageCellView
{
    RichTextView * m_titleLabel; // +0xb0
    RichTextView * m_detailLabel; // +0xb8
    UIImageView * m_thumbImageView; // +0xc0
    UIView * _separator; // +0xc8
    UIImageView * _tinyIcon; // +0xd0
    UILabel * _finderLabel; // +0xd8
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (id)digestFont;
- (double)digestMaxWidth;
- (void)addThumbImageView;
- (id)separator;
- (id)tinyIcon;
- (id)finderLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)setSeparator:(id)arg1;
- (void)setTinyIcon:(id)arg1;
- (void)setFinderLabel:(id)arg1;
- (void).cxx_destruct;
@end
