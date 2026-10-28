@interface WCFinderProfileCollectionContent : NSObject
{
    UIView * _hostView; // +0x8
    double _horizontalPadding; // +0x10
    UIImageView * _coverView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _summaryLabel; // +0x28
    UIView * _bottomLine; // +0x30
}
+ (double)coverSize;
+ (CGSize)sizeThatFit:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 hostView:(id)arg2;
- (void)setHiddenBottomLine:(BOOL)arg1;
- (BOOL)hiddenBottomLine;
- (void)update:(id)arg1 summary:(id)arg2 cover:(id)arg3;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
