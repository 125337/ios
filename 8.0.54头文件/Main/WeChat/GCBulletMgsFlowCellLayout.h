@interface GCBulletMgsFlowCellLayout : GCDynamicLayoutProvider
{
    double _cellTopPadding; // +0x8
    double _avatarSize; // +0x10
    double _space; // +0x18
    GCLabelDynamicLayout * _labelConfig; // +0x20
}
- (id)init;
- (double)cellTopPadding;
- (void)setCellTopPadding:(double)arg1;
- (double)avatarSize;
- (void)setAvatarSize:(double)arg1;
- (double)space;
- (void)setSpace:(double)arg1;
- (id)labelConfig;
- (void)setLabelConfig:(id)arg1;
- (void).cxx_destruct;
@end

