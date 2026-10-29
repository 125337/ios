@interface QIntersectionOverlay : NSObject
{
    BOOL _visible; // +0x8
    BOOL _isDayMode; // +0x9
    BOOL _roundedCorner; // +0xa
    NSData * _data; // +0x10
    unsigned long long _leftTopCornerRadius; // +0x18
    unsigned long long _rightTopCornerRadius; // +0x20
    unsigned long long _leftBottomCornerRadius; // +0x28
    unsigned long long _rightBottomCornerRadius; // +0x30
    QIntersectionOverlayManager * _container; // +0x38
    QIntersectionOverlayHandler * _handler; // +0x40
    CGRect _rect; // +0x48
}
- (void)setVisible:(BOOL)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (BOOL)visible;
- (BOOL)isDayMode;
- (void)setIsDayMode:(BOOL)arg1;
- (BOOL)roundedCorner;
- (void)setRoundedCorner:(BOOL)arg1;
- (unsigned long long)leftTopCornerRadius;
- (void)setLeftTopCornerRadius:(unsigned long long)arg1;
- (unsigned long long)rightTopCornerRadius;
- (void)setRightTopCornerRadius:(unsigned long long)arg1;
- (unsigned long long)leftBottomCornerRadius;
- (void)setLeftBottomCornerRadius:(unsigned long long)arg1;
- (unsigned long long)rightBottomCornerRadius;
- (void)setRightBottomCornerRadius:(unsigned long long)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void).cxx_destruct;
@end

