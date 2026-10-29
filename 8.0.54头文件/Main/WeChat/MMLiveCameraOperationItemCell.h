@interface MMLiveCameraOperationItemCell : UICollectionViewCell
{
    id /* block */ _onTapped; // +0x8
    MMUIButton * _button; // +0x10
    MMLiveCameraOperationItem * _operationItem; // +0x18
    MMUILabel * _label; // +0x20
    MMUILabel * _secondaryLabel; // +0x28
    UIView * _badgeView; // +0x30
    MMUILabel * _badgeLabel; // +0x38
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)onButtonTapped;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)operationItem;
- (void)setOperationItem:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)secondaryLabel;
- (void)setSecondaryLabel:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)badgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (void).cxx_destruct;
@end

