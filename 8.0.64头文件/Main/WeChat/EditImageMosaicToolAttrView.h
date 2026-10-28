@interface EditImageMosaicToolAttrView : MMUIView
{
    BOOL _enable; // +0x8
    id <EditImageMosaicToolAttrDelegate> _m_delegate; // +0x10
    unsigned long long _selectedNumber; // +0x18
    WCEditImageMosaicToolViewInitParams * _params; // +0x20
    TextStateBlurButton * _eraserButton; // +0x28
    MMUIView * _separatorView; // +0x30
    MMUIButton * _traditionalBtn; // +0x38
    MMUIButton * _brushBtn; // +0x40
    MMUIButton * _undoBtn; // +0x48
    unsigned long long _selectState; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)setup;
- (void)layoutSubviews;
- (CGSize)getBtnSize:(id)arg1;
- (double)genBtnBoaderWidth:(id)arg1;
- (void)onUndoEditImage;
- (void)onTraditionalBtnClicked;
- (void)onBrushBtnClicked;
- (void)resetToInitalState;
- (void)resetEraserBtnSelectedStateIfNeed;
- (void)setUndoEnable:(BOOL)arg1;
- (double)getLineWidth;
- (void)onClickEraserBtn:(id)arg1;
- (void)_handleClickEraserBtn:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)selectedNumber;
- (void)setSelectedNumber:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)eraserButton;
- (void)setEraserButton:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)traditionalBtn;
- (void)setTraditionalBtn:(id)arg1;
- (id)brushBtn;
- (void)setBrushBtn:(id)arg1;
- (id)undoBtn;
- (void)setUndoBtn:(id)arg1;
- (unsigned long long)selectState;
- (void)setSelectState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
