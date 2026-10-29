@interface WCFinderShareTopicCellView : CommonMessageCellView
{
    RichTextView * m_titleLabel; // +0xa8
    RichTextView * m_detailLabel; // +0xb0
    UIImageView * m_thumbImageView; // +0xb8
    UIView * _separator; // +0xc0
    UIImageView * _tinyIcon; // +0xc8
    UILabel * _finderLabel; // +0xd0
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

