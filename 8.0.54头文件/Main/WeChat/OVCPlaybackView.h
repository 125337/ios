@interface OVCPlaybackView : UIView
{
    ORERenderViewConIOS * _renderViewCon; // +0x8
    basic_string<char, std::char_traits<char>, std::allocator<char>> _windowName; // +0x10
    UIView * _overlayView; // +0x28
}
+ (CGSize)alignSize:(CGSize)arg1 scaleFactor:(double)arg2 roundMethod:(unsigned long long)arg3;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (const void *)windowName;
- (id)backingRenderViewCon;
- (void)setOverlayView:(id)arg1;
- (id)overlayView;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

