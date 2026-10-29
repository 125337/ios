@interface WCFinderPersonalCenterActionCellView : UICollectionViewCell <WCFinderPersonalCenterCellProtocol>
{
    WCFinderPersonalCenterSidesButton * _button; // +0x8
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupCorner:(unsigned long long)arg1 cornerRadii:(double)arg2;
- (void)updateTitle:(id)arg1;
- (void)updateWithCellPosition:(BOOL)arg1 tail:(BOOL)arg2;
- (void)handleClick;
- (void)setRedDotInfo:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

