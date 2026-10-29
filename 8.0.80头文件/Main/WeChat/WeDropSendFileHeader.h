@interface WeDropSendFileHeader : WeDropTextTitleHeader
{
    WeDropTransPreViewImage * _preview; // +0x8
    WeDropSendFileContentComponent * _contentView; // +0x10
}
- (double)contentVerticalPaddingForViewHeight:(double)arg1;
- (void)initSubviews;
- (void)setPreview:(id)arg1;
- (id)preview;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
