@interface AppUrlMessageCellView : AppUrlMessageCellViewBase
{
    RichTextView * m_titleLabel; // +0xb0
    RichTextView * m_detailLabel; // +0xb8
    UIImageView * m_thumbImageView; // +0xc0
}
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (id)defaultThumbImage;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (id)digestFont;
- (double)digestMaxWidth;
- (void)addThumbImageView;
- (void)addVideoIcon;
- (void)updateThumbImage;
- (id)thumbImage;
- (id)thumbImageView;
- (void).cxx_destruct;
@end
