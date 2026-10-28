@interface MMGroupLiveCommentTableViewCellFrame : MMLiveCommentTableViewCellFrame
{
    long long _layoutResult; // +0x8
    double _cellHeightPortrait; // +0x10
    double _cellHeightLandscape; // +0x18
    NSArray * _arrStylesPortrait; // +0x20
    NSArray * _arrStylesLandscape; // +0x28
    CGSize _pubbleSizePortrait; // +0x30
    CGSize _pubbleSizeLandscape; // +0x40
}
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(BOOL)arg2;
- (BOOL)calculateIfNeeded;
- (void)calculateSizeWithComment:(id)arg1 isPortrait:(BOOL)arg2;
- (void)resetCellFrame;
- (CGSize)pubbleSize;
- (double)cellHeight;
- (double)currCellHeight;
- (id)arrStyles;
- (CGSize)pubbleSizePortrait;
- (void)setPubbleSizePortrait:(CGSize)arg1;
- (CGSize)pubbleSizeLandscape;
- (void)setPubbleSizeLandscape:(CGSize)arg1;
- (double)cellHeightPortrait;
- (void)setCellHeightPortrait:(double)arg1;
- (double)cellHeightLandscape;
- (void)setCellHeightLandscape:(double)arg1;
- (id)arrStylesPortrait;
- (void)setArrStylesPortrait:(id)arg1;
- (id)arrStylesLandscape;
- (void)setArrStylesLandscape:(id)arg1;
- (void).cxx_destruct;
@end
