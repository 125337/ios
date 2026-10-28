@interface WCMomentsSpringTextContainerView : UIView
{
    double _minContentWidth; // +0x8
    double _maxWidth; // +0x10
    UIView * _contentView; // +0x18
    double _contentMarginLeft; // +0x20
    double _contentMarginRight; // +0x28
    double _contentMarginTotalX; // +0x30
    UIImageView * _tigerHeadImageView; // +0x38
    UIImageView * _tigerBodyImageView; // +0x40
    UIImageView * _tigerTailImageView; // +0x48
    UIImageView * _bottomHeadFireworksImageView; // +0x50
    UIImageView * _topTailFireworksImageView; // +0x58
    UIImageView * _bottomTailFireworksImageView; // +0x60
    CGPoint _adjustedContentOffset; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (double)minWidth;
- (double)maxContentWidth;
- (void)setContentView:(id)arg1;
- (double)contentMarginTotalX;
- (void)adjustSizeWithContentView;
- (void)adjustSizeWithContentWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutSizeForTigerImageView:(id)arg1;
- (double)tigerImageView:(id)arg1 widthFromHeight:(double)arg2;
- (double)minContentWidth;
- (void)setMinContentWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)contentView;
- (double)contentMarginLeft;
- (void)setContentMarginLeft:(double)arg1;
- (double)contentMarginRight;
- (void)setContentMarginRight:(double)arg1;
- (void)setContentMarginTotalX:(double)arg1;
- (CGPoint)adjustedContentOffset;
- (void)setAdjustedContentOffset:(CGPoint)arg1;
- (id)tigerHeadImageView;
- (void)setTigerHeadImageView:(id)arg1;
- (id)tigerBodyImageView;
- (void)setTigerBodyImageView:(id)arg1;
- (id)tigerTailImageView;
- (void)setTigerTailImageView:(id)arg1;
- (id)bottomHeadFireworksImageView;
- (void)setBottomHeadFireworksImageView:(id)arg1;
- (id)topTailFireworksImageView;
- (void)setTopTailFireworksImageView:(id)arg1;
- (id)bottomTailFireworksImageView;
- (void)setBottomTailFireworksImageView:(id)arg1;
- (void).cxx_destruct;
@end
