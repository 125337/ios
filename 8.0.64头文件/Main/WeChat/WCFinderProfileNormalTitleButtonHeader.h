@interface WCFinderProfileNormalTitleButtonHeader : UICollectionReusableView
{
    BOOL _needReDisplayExtButton; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UIView * _bottomLine; // +0x20
    UIButton * _extButton; // +0x28
    id _target; // +0x30
    SEL _selector; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    UIImageView * _arrowImageView; // +0x48
    UIEdgeInsets _titleEdgeInsets; // +0x50
    UIEdgeInsets _lineEdgeInsets; // +0x70
}
+ (double)defaultDisplayHeight;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)showRightArrow;
- (void)setShowRightArrow:(BOOL)arg1;
- (void)layoutSubviews;
- (id)extButton;
- (id)descLabel;
- (void)prepareForReuse;
- (void)removeAllAction;
- (void)addClickTarget:(id)arg1 selector:(SEL)arg2;
- (void)_onClick;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void)setExtButton:(id)arg1;
- (UIEdgeInsets)titleEdgeInsets;
- (void)setTitleEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)lineEdgeInsets;
- (void)setLineEdgeInsets:(UIEdgeInsets)arg1;
- (BOOL)needReDisplayExtButton;
- (void)setNeedReDisplayExtButton:(BOOL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
