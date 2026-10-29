@interface ScrollBarView : 
{
    int _fileId; // +0x8
    BOOL _isDragging; // +0xc
    double _currentPercentage; // +0x10
    UIColor * _thumbColor; // +0x18
    double _thumbWidth; // +0x20
    UIView * _thumbView; // +0x28
    double _thumbHeight; // +0x30
    double _availableHeight; // +0x38
}
- (id)initWithFrame:(int)arg1 frame:(CGRect)arg2 thumbHeight:(double)arg3;
- (void)setupUI;
- (void)layoutSubviews;
- (void)applyThumbPositionForPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setupGesture;
- (void)handlePan:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setCurrentPercentage:(double)arg1;
- (void)setThumbColor:(id)arg1;
- (void)setThumbWidth:(double)arg1;
- (double)currentPercentage;
- (id)thumbColor;
- (double)thumbWidth;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (double)thumbHeight;
- (void)setThumbHeight:(double)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (double)availableHeight;
- (void)setAvailableHeight:(double)arg1;
- (void).cxx_destruct;
@end
