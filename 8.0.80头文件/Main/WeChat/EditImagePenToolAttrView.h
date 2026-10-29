@interface EditImagePenToolAttrView : MMUIView <EditImageColorSquareBarDelegate>
{
    UIButton * _undoBtn; // +0x8
    BOOL _enable; // +0x10
    BOOL _needEraserButton; // +0x11
    BOOL _needSeparator; // +0x12
    BOOL _needsCloseButton; // +0x13
    BOOL _layoutsVertically; // +0x14
    BOOL _useCompactLayout; // +0x15
    UIColor * _selectedColor; // +0x18
    id <EditImagePenToolAttrDelegate> _m_delegate; // +0x20
    EditImageColorSquareBar * _colorSquareBar; // +0x28
    MMUIButton * _closeButton; // +0x30
    TextStateBlurButton * _eraserButton; // +0x38
    CAGradientLayer * _colorBarMaskLayer; // +0x40
    UIView * _separator; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)resetToInitalState;
- (void)setColorBarScrollEnable:(BOOL)arg1;
- (id)colorBarPanGesture;
- (void)resetEraserBtnSelectedStateIfNeed;
- (void)setLayoutsVertically:(BOOL)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)onUndoEditImage;
- (void)onClickEraserBtn:(id)arg1;
- (void)_handleClickEraserBtn:(id)arg1;
- (void)setUndoEnable:(BOOL)arg1;
- (id)getLineColor;
- (double)getLineWidth;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (id)_selectedColor;
- (void)set_selectedColor:(id)arg1;
- (BOOL)needEraserButton;
- (void)setNeedEraserButton:(BOOL)arg1;
- (BOOL)needSeparator;
- (void)setNeedSeparator:(BOOL)arg1;
- (BOOL)needsCloseButton;
- (void)setNeedsCloseButton:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)layoutsVertically;
- (BOOL)useCompactLayout;
- (void)setUseCompactLayout:(BOOL)arg1;
- (id)colorSquareBar;
- (void)setColorSquareBar:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)eraserButton;
- (void)setEraserButton:(id)arg1;
- (id)colorBarMaskLayer;
- (void)setColorBarMaskLayer:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
