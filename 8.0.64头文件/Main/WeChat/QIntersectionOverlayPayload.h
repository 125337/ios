@interface QIntersectionOverlayPayload : NSObject
{
    BOOL _visible; // +0x8
    BOOL _isDayMode; // +0x9
    int _abDistance; // +0xc
    int _junctionStyle; // +0x10
    int _junctionType; // +0x14
    NSData * _data; // +0x18
    unsigned long long _leftTopCornerRadius; // +0x20
    unsigned long long _rightTopCornerRadius; // +0x28
    unsigned long long _leftBottomCornerRadius; // +0x30
    unsigned long long _rightBottomCornerRadius; // +0x38
    CGRect _rect; // +0x40
}
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (BOOL)isDayMode;
- (void)setIsDayMode:(BOOL)arg1;
- (int)abDistance;
- (void)setAbDistance:(int)arg1;
- (int)junctionStyle;
- (void)setJunctionStyle:(int)arg1;
- (int)junctionType;
- (void)setJunctionType:(int)arg1;
- (unsigned long long)leftTopCornerRadius;
- (void)setLeftTopCornerRadius:(unsigned long long)arg1;
- (unsigned long long)rightTopCornerRadius;
- (void)setRightTopCornerRadius:(unsigned long long)arg1;
- (unsigned long long)leftBottomCornerRadius;
- (void)setLeftBottomCornerRadius:(unsigned long long)arg1;
- (unsigned long long)rightBottomCornerRadius;
- (void)setRightBottomCornerRadius:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
