@interface WCFinderPersonalCenterSidesButton : UIView
{
    BOOL _hasTouchDown; // +0x8
    WCFinderRedDotTipsShowInfo * _redDotInfo; // +0x10
    WCFinderRedDotTipsShowInfo * _rightRedDotInfo; // +0x18
    NSString * _zeroCountRedDotaccessibilityLabel; // +0x20
    NSString * _oneCountRedDotaccessibilityLabel; // +0x28
    NSString * _multCountRedDotaccessibilityLabel; // +0x30
    id _target; // +0x38
    SEL _action; // +0x40
    UILabel * _titleLabel; // +0x48
    UIImageView * _imageView; // +0x50
    MMBadgeView * _leftBadgeView; // +0x58
    UILabel * _redDotLabel; // +0x60
    MMBadgeView * _rightBadgeView; // +0x68
    YYLabel * _tailTextLabel; // +0x70
    UITapGestureRecognizer * _tapGesture; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)_handleClick;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)tailText;
- (void)setTailText:(id)arg1;
- (id)titleLabel;
- (id)imageView;
- (id)redDotLabel;
- (id)leftBadgeView;
- (id)rightBadgeView;
- (BOOL)showRedText;
- (BOOL)showRedDot;
- (void)setRedDotInfo:(id)arg1;
- (void)setRightRedDotInfo:(id)arg1;
- (void)setTailAttrText:(id)arg1;
- (id)tailAttrText;
- (void)layoutSubviews;
- (void)updateRedDotLeftRightConfig;
- (void)buildElementLayouts;
- (id)redDotInfo;
- (id)rightRedDotInfo;
- (id)zeroCountRedDotaccessibilityLabel;
- (void)setZeroCountRedDotaccessibilityLabel:(id)arg1;
- (id)oneCountRedDotaccessibilityLabel;
- (void)setOneCountRedDotaccessibilityLabel:(id)arg1;
- (id)multCountRedDotaccessibilityLabel;
- (void)setMultCountRedDotaccessibilityLabel:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLeftBadgeView:(id)arg1;
- (void)setRedDotLabel:(id)arg1;
- (void)setRightBadgeView:(id)arg1;
- (id)tailTextLabel;
- (void)setTailTextLabel:(id)arg1;
- (BOOL)hasTouchDown;
- (void)setHasTouchDown:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

