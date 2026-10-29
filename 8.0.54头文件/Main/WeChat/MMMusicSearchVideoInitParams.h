@interface MMMusicSearchVideoInitParams : NSObject
{
    BOOL _canMultiSelect; // +0x8
    double _cellSpacing; // +0x10
    double _cellWidth; // +0x18
    double _cellHeight; // +0x20
    UIColor * _bgColor; // +0x28
}
- (double)cellSpacing;
- (void)setCellSpacing:(double)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (BOOL)canMultiSelect;
- (void)setCanMultiSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

