@interface MMLiteAppVCView : UIView
{
    UIView * _snapshot; // +0x8
    CGSize _lastSize; // +0x10
}
- (void)setBounds:(CGRect)arg1;
- (void)checkSelfSizeChanged;
- (void)genSnapshotIfNeeded;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (void).cxx_destruct;
@end

