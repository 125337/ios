@interface GameLifeChatV2BottomBtnLayout : GCDynamicLayoutProvider
{
    double _imgTitleMargin; // +0x8
    GCLabelDynamicLayout * _btnLabelLayout; // +0x10
    double _btnTitleVerticalMargin; // +0x18
    double _btnHeight; // +0x20
    double _thinImgTopMargin; // +0x28
    double _thinImgBtnSpace; // +0x30
    double _thinBtnHeight; // +0x38
    GCLabelDynamicLayout * _noticeLabelLayout; // +0x40
    CGSize _imgSize; // +0x48
    CGSize _thinImgSize; // +0x58
}
- (id)init;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (double)imgTitleMargin;
- (void)setImgTitleMargin:(double)arg1;
- (id)btnLabelLayout;
- (void)setBtnLabelLayout:(id)arg1;
- (double)btnTitleVerticalMargin;
- (void)setBtnTitleVerticalMargin:(double)arg1;
- (double)btnHeight;
- (void)setBtnHeight:(double)arg1;
- (CGSize)thinImgSize;
- (void)setThinImgSize:(CGSize)arg1;
- (double)thinImgTopMargin;
- (void)setThinImgTopMargin:(double)arg1;
- (double)thinImgBtnSpace;
- (void)setThinImgBtnSpace:(double)arg1;
- (double)thinBtnHeight;
- (void)setThinBtnHeight:(double)arg1;
- (id)noticeLabelLayout;
- (void)setNoticeLabelLayout:(id)arg1;
- (void).cxx_destruct;
@end
