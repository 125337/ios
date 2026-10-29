@interface MMFinderLiveChooseModeCell : UICollectionViewCell
{
    BOOL _isChoosen; // +0x8
    BOOL _disabled; // +0x9
    UILabel * _titleLabel; // +0x10
}
+ (id)identifier;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1;
- (void)updateRedDot:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)titleLabel;
- (void)setIsChoosen:(BOOL)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)updateTitleLabelColor;
- (BOOL)isChoosen;
- (BOOL)disabled;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
