@interface GCTextCellLayoutInfo : NSObject
{
    BOOL _alignCenter; // +0x8
    int _numLine; // +0xc
    NSMutableArray * _contentTextStyles; // +0x10
    double _sysTitleWidth; // +0x18
    double _originX; // +0x20
    double _lineHeight; // +0x28
    UIFont * _textFont; // +0x30
    UIColor * _textColor; // +0x38
    CGSize _contentTextSize; // +0x40
    UIEdgeInsets _contentMarginInsets; // +0x50
}
- (id)contentTextStyles;
- (void)setContentTextStyles:(id)arg1;
- (CGSize)contentTextSize;
- (void)setContentTextSize:(CGSize)arg1;
- (double)sysTitleWidth;
- (void)setSysTitleWidth:(double)arg1;
- (double)originX;
- (void)setOriginX:(double)arg1;
- (UIEdgeInsets)contentMarginInsets;
- (void)setContentMarginInsets:(UIEdgeInsets)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)alignCenter;
- (void)setAlignCenter:(BOOL)arg1;
- (int)numLine;
- (void)setNumLine:(int)arg1;
- (void).cxx_destruct;
@end

