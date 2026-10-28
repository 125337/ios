@interface GameChatGroupCellLayout : GCDynamicLayoutProvider
{
    int _maxCondtionNumLine; // +0x8
    int _maxTagNumLine; // +0xc
    GCLabelDynamicLayout * _topLabelConfig; // +0x10
    GCLabelDynamicLayout * _secondaryLabelConfig; // +0x18
    GCLabelDynamicLayout * _onlyLabelConfig; // +0x20
    GCLabelDynamicLayout * _pinLabelConfig; // +0x28
    double _onlyLabelMargin; // +0x30
    double _spaceBetweenTickLabel; // +0x38
    GCLabelDynamicLayout * _rightBtnConfig; // +0x40
    double _rightBtnAdditionSpace; // +0x48
    double _tagLandSpace; // +0x50
    double _tagVerticalSpace; // +0x58
    double _labelSpace; // +0x60
    double _conditionContainerSpace; // +0x68
    double _addtionalConditonSpace; // +0x70
    double _tagImgStrMargin; // +0x78
    double _conditionTagSpace; // +0x80
    GCLabelDynamicLayout * _tagLabelConfig; // +0x88
    double _tagLineHeight; // +0x90
    double _imgViewHeight; // +0x98
    double _moreHeightWhenHasTag; // +0xa0
    double _bulletMsgViewHeight; // +0xa8
    CGSize _conditionTickSize; // +0xb0
    CGSize _tagImgSize; // +0xc0
    UIEdgeInsets _tagInsets; // +0xd0
    UIEdgeInsets _contentInsets; // +0xf0
}
- (id)init;
- (id)topLabelConfig;
- (void)setTopLabelConfig:(id)arg1;
- (id)secondaryLabelConfig;
- (void)setSecondaryLabelConfig:(id)arg1;
- (id)onlyLabelConfig;
- (void)setOnlyLabelConfig:(id)arg1;
- (id)pinLabelConfig;
- (void)setPinLabelConfig:(id)arg1;
- (double)onlyLabelMargin;
- (void)setOnlyLabelMargin:(double)arg1;
- (double)spaceBetweenTickLabel;
- (void)setSpaceBetweenTickLabel:(double)arg1;
- (CGSize)conditionTickSize;
- (void)setConditionTickSize:(CGSize)arg1;
- (id)rightBtnConfig;
- (void)setRightBtnConfig:(id)arg1;
- (double)rightBtnAdditionSpace;
- (void)setRightBtnAdditionSpace:(double)arg1;
- (double)tagLandSpace;
- (void)setTagLandSpace:(double)arg1;
- (double)tagVerticalSpace;
- (void)setTagVerticalSpace:(double)arg1;
- (double)labelSpace;
- (void)setLabelSpace:(double)arg1;
- (double)conditionContainerSpace;
- (void)setConditionContainerSpace:(double)arg1;
- (double)addtionalConditonSpace;
- (void)setAddtionalConditonSpace:(double)arg1;
- (int)maxCondtionNumLine;
- (void)setMaxCondtionNumLine:(int)arg1;
- (int)maxTagNumLine;
- (void)setMaxTagNumLine:(int)arg1;
- (CGSize)tagImgSize;
- (void)setTagImgSize:(CGSize)arg1;
- (double)tagImgStrMargin;
- (void)setTagImgStrMargin:(double)arg1;
- (double)conditionTagSpace;
- (void)setConditionTagSpace:(double)arg1;
- (UIEdgeInsets)tagInsets;
- (void)setTagInsets:(UIEdgeInsets)arg1;
- (id)tagLabelConfig;
- (void)setTagLabelConfig:(id)arg1;
- (double)tagLineHeight;
- (void)setTagLineHeight:(double)arg1;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (double)imgViewHeight;
- (void)setImgViewHeight:(double)arg1;
- (double)moreHeightWhenHasTag;
- (void)setMoreHeightWhenHasTag:(double)arg1;
- (double)bulletMsgViewHeight;
- (void)setBulletMsgViewHeight:(double)arg1;
- (void).cxx_destruct;
@end
