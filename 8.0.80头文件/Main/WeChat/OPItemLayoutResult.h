@interface OPItemLayoutResult : NSObject
{
    BOOL _splitFiftyFifty; // +0x8
    BOOL _badgeNeedSingleLine; // +0x9
    double _leftColumnHeight; // +0x10
    double _rightColumnHeight; // +0x18
    double _contentHeight; // +0x20
    double _buttonHeight; // +0x28
    CGSize _wordSize; // +0x30
    CGSize _badgeSize; // +0x40
    CGSize _detailSize; // +0x50
}
- (CGSize)wordSize;
- (void)setWordSize:(CGSize)arg1;
- (CGSize)badgeSize;
- (void)setBadgeSize:(CGSize)arg1;
- (CGSize)detailSize;
- (void)setDetailSize:(CGSize)arg1;
- (BOOL)splitFiftyFifty;
- (void)setSplitFiftyFifty:(BOOL)arg1;
- (BOOL)badgeNeedSingleLine;
- (void)setBadgeNeedSingleLine:(BOOL)arg1;
- (double)leftColumnHeight;
- (void)setLeftColumnHeight:(double)arg1;
- (double)rightColumnHeight;
- (void)setRightColumnHeight:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (double)buttonHeight;
- (void)setButtonHeight:(double)arg1;
@end
