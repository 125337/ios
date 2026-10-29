@interface TBCalloutView : UIView <CAAnimationDelegate, QAnnotationViewCollisionDelegate>
{
    BOOL _popupCancelled; // +0x8
    unsigned long long _collisionType; // +0x10
    UIView<QAnnotationViewCollisionDelegate> * _parent; // +0x18
    id <TBCalloutViewDelegate> _delegate; // +0x20
    NSString * _title; // +0x28
    NSString * _subtitle; // +0x30
    UIView * _leftAccessoryView; // +0x38
    UIView * _rightAccessoryView; // +0x40
    unsigned long long _permittedArrowDirection; // +0x48
    unsigned long long _currentArrowDirection; // +0x50
    TBCalloutBackgroundView * _backgroundView; // +0x58
    UIView * _titleView; // +0x60
    UIView * _subtitleView; // +0x68
    UIView * _contentView; // +0x70
    long long _presentAnimation; // +0x78
    long long _dismissAnimation; // +0x80
    UIButton * _containerView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _subtitleLabel; // +0x98
    CGPoint _calloutOffset; // +0xa0
    UIEdgeInsets _constrainedInsets; // +0xb0
    UIEdgeInsets _contentViewInset; // +0xd0
}
+ (id)platformCalloutView;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)supportsHighlighting;
- (void)highlightIfNecessary;
- (void)unhighlightIfNecessary;
- (void)calloutClicked;
- (id)titleViewOrDefault;
- (id)subtitleViewOrDefault;
- (id)backgroundView;
- (id)defaultBackgroundView;
- (void)rebuildSubviews;
- (double)leftAccessoryVerticalMargin;
- (double)leftAccessoryHorizontalMargin;
- (double)rightAccessoryVerticalMargin;
- (double)rightAccessoryHorizontalMargin;
- (double)innerContentMarginLeft;
- (double)innerContentMarginRight;
- (double)calloutHeight;
- (double)calloutContainerHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)offsetToContainRect:(CGRect)arg1 inRect:(CGRect)arg2;
- (void)presentCalloutFromRect:(CGRect)arg1 inView:(id)arg2 constrainedToView:(id)arg3 animated:(BOOL)arg4;
- (void)presentCalloutFromRect:(CGRect)arg1 inLayer:(id)arg2 constrainedToLayer:(id)arg3 animated:(BOOL)arg4;
- (void)presentCalloutFromRect:(CGRect)arg1 inLayer:(id)arg2 ofView:(id)arg3 constrainedToLayer:(id)arg4 animated:(BOOL)arg5;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dismissCalloutAnimated:(BOOL)arg1;
- (void)removeFromParent;
- (id)animationWithType:(long long)arg1 presenting:(BOOL)arg2;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (unsigned long long)collisionType;
- (void)setCollisionType:(unsigned long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)leftAccessoryView;
- (void)setLeftAccessoryView:(id)arg1;
- (id)rightAccessoryView;
- (void)setRightAccessoryView:(id)arg1;
- (unsigned long long)permittedArrowDirection;
- (void)setPermittedArrowDirection:(unsigned long long)arg1;
- (unsigned long long)currentArrowDirection;
- (void)setCurrentArrowDirection:(unsigned long long)arg1;
- (UIEdgeInsets)constrainedInsets;
- (void)setConstrainedInsets:(UIEdgeInsets)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)subtitleView;
- (void)setSubtitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (UIEdgeInsets)contentViewInset;
- (void)setContentViewInset:(UIEdgeInsets)arg1;
- (CGPoint)calloutOffset;
- (void)setCalloutOffset:(CGPoint)arg1;
- (long long)presentAnimation;
- (void)setPresentAnimation:(long long)arg1;
- (long long)dismissAnimation;
- (void)setDismissAnimation:(long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (BOOL)popupCancelled;
- (void)setPopupCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
