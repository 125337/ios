@interface MMMusicPostVideoTabAlbumVideoCell : UICollectionViewCell
{
    MMMusicAlbumVideoCellModel * dataModel; // +0x8
    UIImageView * _imageView; // +0x10
    UILabel * _timeLabel; // +0x18
    CAGradientLayer * _timeLayer; // +0x20
    MMAssetSelectCheckButton * m_selectCheckButton; // +0x28
    id <MMMusicPostVideoTabAlbumVideoCellDelegate> _delegate; // +0x30
    UIView * _selectCoverView; // +0x38
    UIEdgeInsets _checkButtonHitTetsSlop; // +0x40
}
+ (id)reuseKey;
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateModel:(id)arg1 canMultiSelect:(BOOL)arg2 minDuration:(double)arg3 isSelected:(BOOL)arg4;
- (void)updateCanMultiSelect:(BOOL)arg1;
- (void)updateMinDuration:(double)arg1;
- (void)updateIsSelectedStatus:(BOOL)arg1;
- (void)layoutSubviews;
- (id)timeStringBySeconds:(double)arg1;
- (void)updateTimeLabelAndTimeLayer;
- (id)getImage;
- (void)udpateCheckBtnSelection:(BOOL)arg1;
- (void)onSelectBtnClicked;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectCoverView;
- (void)setSelectCoverView:(id)arg1;
- (UIEdgeInsets)checkButtonHitTetsSlop;
- (void)setCheckButtonHitTetsSlop:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

