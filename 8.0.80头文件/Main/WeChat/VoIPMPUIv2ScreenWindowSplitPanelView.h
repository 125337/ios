@interface VoIPMPUIv2ScreenWindowSplitPanelView : VoIPMPUIv2View
{
    BOOL _isRestoreTopViewHidden; // +0x8
    BOOL _isRestoreBottomViewHidden; // +0x9
    BOOL _isRestoreHorizontalViewHidden; // +0xa
    id /* block */ _onRestoreEvent; // +0x10
    VoIPMPUIv2View * _restoreTopView; // +0x18
    VoIPMPUIv2ImageView * _restoreTopIconImageView; // +0x20
    VoIPMPUIv2View * _restoreBottomView; // +0x28
    VoIPMPUIv2ImageView * _restoreBottomIconImageView; // +0x30
    VoIPMPUIv2View * _restoreHorizontalView; // +0x38
    VoIPMPUIv2ImageView * _restoreHorizontalIconImageView; // +0x40
    unsigned long long _splitSlot; // +0x48
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id /* block */)onRestoreEvent;
- (void)setOnRestoreEvent:(id /* block */)arg1;
- (id)restoreTopView;
- (void)setRestoreTopView:(id)arg1;
- (id)restoreTopIconImageView;
- (void)setRestoreTopIconImageView:(id)arg1;
- (BOOL)isRestoreTopViewHidden;
- (void)setIsRestoreTopViewHidden:(BOOL)arg1;
- (id)restoreBottomView;
- (void)setRestoreBottomView:(id)arg1;
- (id)restoreBottomIconImageView;
- (void)setRestoreBottomIconImageView:(id)arg1;
- (BOOL)isRestoreBottomViewHidden;
- (void)setIsRestoreBottomViewHidden:(BOOL)arg1;
- (id)restoreHorizontalView;
- (void)setRestoreHorizontalView:(id)arg1;
- (id)restoreHorizontalIconImageView;
- (void)setRestoreHorizontalIconImageView:(id)arg1;
- (unsigned long long)splitSlot;
- (void)setSplitSlot:(unsigned long long)arg1;
- (BOOL)isRestoreHorizontalViewHidden;
- (void)setIsRestoreHorizontalViewHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
