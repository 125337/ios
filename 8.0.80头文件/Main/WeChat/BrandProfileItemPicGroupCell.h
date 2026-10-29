@interface BrandProfileItemPicGroupCell : BrandProfileItemBaseCell <UIGestureRecognizerDelegate>
{
    BrandProfileItemPicCell * _leftPicCell; // +0x8
    BrandProfileItemPicCell * _rightPicCell; // +0x10
    UILongPressGestureRecognizer * _leftLongPress; // +0x18
    UILongPressGestureRecognizer * _rightLongPress; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)onUpdateViewModel;
- (void)setIsLongPressEnable:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)accessibilityElements;
- (void)onLeftTapped;
- (void)onRightTapped;
- (void)notifyDelegateWithViewModel:(id)arg1;
- (void)onLeftLongPressed:(id)arg1;
- (void)onRightLongPressed:(id)arg1;
- (id)leftLongPress;
- (id)rightLongPress;
- (id)leftPicCell;
- (void)setLeftPicCell:(id)arg1;
- (id)rightPicCell;
- (void)setRightPicCell:(id)arg1;
- (void)setLeftLongPress:(id)arg1;
- (void)setRightLongPress:(id)arg1;
- (void).cxx_destruct;
@end
