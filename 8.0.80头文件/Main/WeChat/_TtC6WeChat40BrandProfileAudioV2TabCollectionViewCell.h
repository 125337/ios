@interface _TtC6WeChat40BrandProfileAudioV2TabCollectionViewCell : UICollectionViewCell
{
     delegate; // +0x8
     titleLabelMaxWidth; // +0x18
     textContent; // +0x20
     currentItem; // +0x30
     $__lazy_storage_$_playingAnimationView; // +0xc0
     $__lazy_storage_$_animationContainerView; // +0xc8
     $__lazy_storage_$_thumbnailImageView; // +0xd0
     $__lazy_storage_$_titleLabel; // +0xd8
     $__lazy_storage_$_durationLabel; // +0xe0
     $__lazy_storage_$_recommendReasonLabel; // +0xe8
     $__lazy_storage_$_playButton; // +0xf0
     $__lazy_storage_$_queueButton; // +0xf8
     $__lazy_storage_$_gradientView; // +0x100
     $__lazy_storage_$_gradientLayer; // +0x108
     $__lazy_storage_$_pinnedView; // +0x110
     $__lazy_storage_$_containerView; // +0x118
     $__lazy_storage_$_bottomLine; // +0x120
     $__lazy_storage_$_highlightOverlayView; // +0x128
     $__lazy_storage_$_longPressGesture; // +0x130
}
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)prepareForReuse;
- (void)onClickPlay;
- (void)onClickQueue;
- (void)handleLongPress:(id)arg1;
- (void).cxx_destruct;
@end
