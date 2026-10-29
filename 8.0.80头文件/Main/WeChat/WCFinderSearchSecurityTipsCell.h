@interface WCFinderSearchSecurityTipsCell : UICollectionViewCell
{
    UIImageView * _securityTipsIcon; // +0x8
    UILabel * _securityTipsLabel; // +0x10
    UIView * _separatorLine; // +0x18
}
+ (double)displayHeightWithSecurityTips:(id)arg1 withWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setSecurityTips:(id)arg1;
- (id)securityTips;
- (void)layoutSubviews;
- (id)securityTipsIcon;
- (void)setSecurityTipsIcon:(id)arg1;
- (id)securityTipsLabel;
- (void)setSecurityTipsLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
