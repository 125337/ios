@interface BrandProfileItemUnderlineViewModel : BrandProfileItemBaseViewModel
{
    CGSize _underlineTextSize; // +0x10
    NSMutableArray * _underlineTextLabelStyles; // +0x20
}
- (id)tableViewCellClassName;
- (id)text;
- (id)sourceText;
- (double)textMaxWidth;
- (double)textLineSpacing;
- (double)sourceLineHeight;
- (void)calTextSizeAndStyles;
- (CGSize)textSize;
- (id)textLabelStyles;
- (double)calCellHeight;
- (void)clearLayoutCache;
- (void).cxx_destruct;
@end
