@interface MMFinderLiveChooseModeCell : UICollectionViewCell
{
    BOOL _isChoosen; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (id)identifier;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)titleLabel;
- (void)setIsChoosen:(BOOL)arg1;
- (BOOL)isChoosen;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
