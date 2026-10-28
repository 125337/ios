@interface MMMusicNoDotSelectItemView : UICollectionViewCell
{
    id <MMMusicNoDotSelectItemViewDelegate> _delegate; // +0x8
    MMMusicNoDotSelectItemViewModel * _dataModel; // +0x10
    MMWebImageView * _bgImageView; // +0x18
    CAGradientLayer * _timeLayer; // +0x20
    UILabel * _timeLabel; // +0x28
    MMUIButton * _deleteBtn; // +0x30
    CAShapeLayer * _selectedBorderLayer; // +0x38
}
+ (id)reuseKey;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)updateModel:(id)arg1;
- (void)updateTimeLabelWithDuration:(double)arg1;
- (void)setSelectedStatus;
- (void)clearSelectedStatus;
- (void)updateWhenInLongSelectedDragStatus:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onClickDeleteBtn;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)timeLayer;
- (void)setTimeLayer:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)selectedBorderLayer;
- (void)setSelectedBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
