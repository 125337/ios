@interface MMFinderLiveCommonGuideTipsParams : NSObject
{
    NSString * _text; // +0x8
    UIFont * _font; // +0x10
    long long _numberOfLines; // +0x18
    long long _triangleOrientation; // +0x20
    id /* block */ _removerWhenOtherTouched; // +0x28
    CGSize _arrowSize; // +0x30
    UIEdgeInsets _padding; // +0x40
}
- (id)init;
- (id)text;
- (void)setText:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (long long)triangleOrientation;
- (void)setTriangleOrientation:(long long)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (CGSize)arrowSize;
- (void)setArrowSize:(CGSize)arg1;
- (id /* block */)removerWhenOtherTouched;
- (void)setRemoverWhenOtherTouched:(id /* block */)arg1;
- (void).cxx_destruct;
@end
