@interface EditImageColorDotView : UIControl
{
    UIView * m_dotView; // +0x8
    EditImageColor * _editColor; // +0x10
    double _selectedSizeLen; // +0x18
    double _unselectedSizeLen; // +0x20
    double _borderWidth; // +0x28
    long long _expandHitWidth; // +0x30
    long long _expandHitHeight; // +0x38
}
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)editColor;
- (void)setEditColor:(id)arg1;
- (double)selectedSizeLen;
- (void)setSelectedSizeLen:(double)arg1;
- (double)unselectedSizeLen;
- (void)setUnselectedSizeLen:(double)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (long long)expandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (long long)expandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (void).cxx_destruct;
@end

