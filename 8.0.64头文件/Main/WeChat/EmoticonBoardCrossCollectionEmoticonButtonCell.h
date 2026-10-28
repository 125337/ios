@interface EmoticonBoardCrossCollectionEmoticonButtonCell : UICollectionViewCell
{
    BOOL _isCustomButton; // +0x8
    EmoticonBoardButton * _emoticonBoardButton; // +0x10
    UIView * _highlightOverlay; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)showHighLight:(BOOL)arg1;
- (id)emoticonBoardButton;
- (void)setEmoticonBoardButton:(id)arg1;
- (BOOL)isCustomButton;
- (void)setIsCustomButton:(BOOL)arg1;
- (id)highlightOverlay;
- (void)setHighlightOverlay:(id)arg1;
- (void).cxx_destruct;
@end
