@interface EditImageCropToolBarView : MMUIView
{
    BOOL _revertBtnEnable; // +0x8
    UIImageView * _bottomBackgroundView; // +0x10
    BOOL _bBtnUseWord; // +0x18
    id <EditImageCropToolBarDelegate> _delegate; // +0x20
    UIButton * _doneBtn; // +0x28
    UIButton * _cancelBtn; // +0x30
    UIButton * _revertBtn; // +0x38
    UIView * _topLine; // +0x40
    WCEditImageCropToolBarViewUIConfig * _uiConfig; // +0x48
    EditImageCropToolBarViewModel * _viewStateModel; // +0x50
    UIButton * _rotateBtn; // +0x58
    UIButton * _cropProportionBtn; // +0x60
}
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)canRevertEnable:(BOOL)arg1;
- (BOOL)isRevertBtnEnabled;
- (BOOL)canAddTopLine;
- (void)hideRotateBtn:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (void)onCropProportionBtnClicked:(id)arg1;
- (void)onReverBtnClick:(id)arg1;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (id)_doneBtn;
- (void)set_doneBtn:(id)arg1;
- (id)_cancelBtn;
- (void)set_cancelBtn:(id)arg1;
- (id)_revertBtn;
- (void)set_revertBtn:(id)arg1;
- (BOOL)bBtnUseWord;
- (void)setBBtnUseWord:(BOOL)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id)viewStateModel;
- (void)setViewStateModel:(id)arg1;
- (id)rotateBtn;
- (void)setRotateBtn:(id)arg1;
- (id)cropProportionBtn;
- (void)setCropProportionBtn:(id)arg1;
- (void).cxx_destruct;
@end

