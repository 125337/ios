@interface QRouteOverlay : QPolyline
{
    NSMutableArray * _arrStyle; // +0x38
    NSMutableArray * _arrColor; // +0x40
    NSMutableArray * _arrText; // +0x48
    QTextStyle * _textStyle; // +0x50
}
- (id)arrStyle;
- (void)setArrStyle:(id)arg1;
- (id)arrColor;
- (void)setArrColor:(id)arg1;
- (id)arrText;
- (void)setArrText:(id)arg1;
- (id)textStyle;
- (void)setTextStyle:(id)arg1;
- (void).cxx_destruct;
@end
