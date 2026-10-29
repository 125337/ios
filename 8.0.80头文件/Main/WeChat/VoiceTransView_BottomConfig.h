@interface VoiceTransView_BottomConfig : NSObject
{
    BOOL _addShadow; // +0x8
    UIColor * _selectingColor; // +0x10
    UIColor * _selectedColor; // +0x18
    UIColor * _unselectedFillColor; // +0x20
    NSArray * _gradientColors; // +0x28
    UIColor * _strokeColor; // +0x30
}
- (id)init;
- (id)selectingColor;
- (void)setSelectingColor:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (id)unselectedFillColor;
- (void)setUnselectedFillColor:(id)arg1;
- (id)gradientColors;
- (void)setGradientColors:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (BOOL)addShadow;
- (void)setAddShadow:(BOOL)arg1;
- (void).cxx_destruct;
@end
