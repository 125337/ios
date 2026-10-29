@interface _TtC6WeChat36BrandProfilePicTabCollectionViewCell : UICollectionViewCell
{
     titleLabelMaxWidth; // +0x8
     textContent; // +0x10
     delegate; // +0x20
     currentItem; // +0x30
     currentIndexPath; // +0x0
     configuredWidth; // +0x0
     currentLikeState; // +0x0
     $__lazy_storage_$_containerView; // +0x0
     $__lazy_storage_$_imageView; // +0x0
     $__lazy_storage_$_titleContainerView; // +0x0
     $__lazy_storage_$_titleLabel; // +0x0
     $__lazy_storage_$_sendTimeLabel; // +0x0
     $__lazy_storage_$_likeControl; // +0x0
     $__lazy_storage_$_likeStackView; // +0x0
     $__lazy_storage_$_likeIconView; // +0x0
     $__lazy_storage_$_likeCountLabel; // +0x0
     $__lazy_storage_$_pinnedView; // +0x0
     $__lazy_storage_$_statusBadgeView; // +0x0
     $__lazy_storage_$_statusBadgeLabel; // +0x0
     $__lazy_storage_$_overlayView; // +0x0
     $__lazy_storage_$_longPressGesture; // +0x0
     $__lazy_storage_$_gradientView; // +0x0
     $__lazy_storage_$_gradientLayer; // +0x0
     $__lazy_storage_$_failedOverlayView; // +0x0
     $__lazy_storage_$_failedStackView; // +0x0
     $__lazy_storage_$_failedIconView; // +0x0
     $__lazy_storage_$_failedTitleLabel; // +0x0
     $__lazy_storage_$_justReadMaskView; // +0x0
     $__lazy_storage_$_justReadMaskLabel; // +0x0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)handleLongPress:(id)arg1;
- (void)handleLikeTap;
- (BOOL)handleAccessibilityLikeAction;
- (BOOL)handleAccessibilityMoreAction;
- (void).cxx_destruct;
@end
