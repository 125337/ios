@interface GameNoticeHalfScreenLayout : GCDynamicLayoutProvider
{
    GCLabelDynamicLayout * _titleLabelLayout; // +0x8
    GCLabelDynamicLayout * _headLabelLayout; // +0x10
    GCLabelDynamicLayout * _additionalTitleLabelLayout; // +0x18
    GCLabelDynamicLayout * _additionalSubTitleLabelLayout; // +0x20
    GCLabelDynamicLayout * _additionalBtnLayout; // +0x28
    GCLabelDynamicLayout * _checkBtnLayout; // +0x30
    CGSize _iconSize; // +0x38
    CGSize _additionalIconSize; // +0x48
}
- (id)init;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)titleLabelLayout;
- (void)setTitleLabelLayout:(id)arg1;
- (CGSize)additionalIconSize;
- (void)setAdditionalIconSize:(CGSize)arg1;
- (id)headLabelLayout;
- (void)setHeadLabelLayout:(id)arg1;
- (id)additionalTitleLabelLayout;
- (void)setAdditionalTitleLabelLayout:(id)arg1;
- (id)additionalSubTitleLabelLayout;
- (void)setAdditionalSubTitleLabelLayout:(id)arg1;
- (id)additionalBtnLayout;
- (void)setAdditionalBtnLayout:(id)arg1;
- (id)checkBtnLayout;
- (void)setCheckBtnLayout:(id)arg1;
- (void).cxx_destruct;
@end
