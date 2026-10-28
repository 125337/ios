@interface POITapGestureRecognizer : UITapGestureRecognizer
{
    id <POITapGestureRecognizerDelegate> _actionDelegate; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
