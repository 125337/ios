@interface YYAsyncImageView : UIImageView <YYImageDelegate>
{
    YYImage * m_image; // +0x8
    YYImage * m_highlightedImage; // +0x10
    YYImage * m_defaultImage; // +0x18
    BOOL m_highlighted; // +0x20
    BOOL _didSetDarkModeObserver; // +0x21
}
+ (Class)layerClass;
- (void)setImage:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)resetAllImage;
- (id)newAsyncDisplayTask;
- (void)willMoveToWindow:(id)arg1;
- (long long)overrideStyle;
- (void)didSetDynamicYYImage;
- (BOOL)didSetDarkModeObserver;
- (void)setDidSetDarkModeObserver:(BOOL)arg1;
- (void).cxx_destruct;
@end

