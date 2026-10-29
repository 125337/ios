@interface BrandProfileItemTextViewModel : BrandProfileItemBaseViewModel
{
    CGSize _mainTitleSize; // +0x10
    NSMutableArray * _mainTitleStyles; // +0x20
    long long _mainTitleLineCount; // +0x28
    CGSize _partTitleSize; // +0x30
    NSMutableArray * _partTitleStyles; // +0x40
    BOOL _isPartTitleTruncated; // +0x48
    long long _partTitleLineCount; // +0x50
    NSMutableArray * _textLabelStyles; // +0x58
    CGSize _textSize; // +0x60
}
- (id)tableViewCellClassName;
- (double)calCellHeight;
- (double)additionalTopPadding;
- (void)clearLayoutCache;
- (BOOL)isShowLargeCover;
- (id)text;
- (id)mainTitleText;
- (double)textMaxWidth;
- (CGSize)textSize;
- (id)textLabelStyles;
- (id)mainTitleStyles;
- (id)mainTitleFont;
- (CGSize)mainTitleSize;
- (BOOL)hasMainTitle;
- (void)calTitleSizeAndTitleStyles;
- (long long)lineCount;
- (BOOL)isLongText;
- (id)bottomStr;
- (void)setTextSize:(CGSize)arg1;
- (void)setTextLabelStyles:(id)arg1;
- (void).cxx_destruct;
@end
