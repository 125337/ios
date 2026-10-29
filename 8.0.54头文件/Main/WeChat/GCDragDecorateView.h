@interface GCDragDecorateView : UIView
{
    BOOL _isDragged; // +0x8
    UIImageView * _decorateView; // +0x10
    double _cornerRadius; // +0x18
}
- (void)setUpUI;
- (void)layoutSubviews;
- (void)setIsDragged:(BOOL)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)decorateView;
- (void)setDecorateView:(id)arg1;
- (double)cornerRadius;
- (BOOL)isDragged;
- (void).cxx_destruct;
@end

