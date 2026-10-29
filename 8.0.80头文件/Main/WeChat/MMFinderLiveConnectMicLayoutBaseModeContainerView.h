@interface MMFinderLiveConnectMicLayoutBaseModeContainerView : UIView
{
    BOOL _hasSetInitialMode; // +0x8
    id /* block */ _tapBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _selectionBG; // +0x20
    MMFinderLiveConnectMicLayoutBaseModeOptionView * _fullScreenOption; // +0x28
    MMFinderLiveConnectMicLayoutBaseModeOptionView * _dualOption; // +0x30
    MMFinderLiveConnectMicLayoutBaseModeOptionView * _pipOption; // +0x38
    MMFinderLiveConnectMicLayoutBaseModeOptionView * _grabOption; // +0x40
    unsigned long long _currentMode; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configUI;
- (void)updateWithMicBaseMode:(unsigned long long)arg1;
- (unsigned long long)applySelectedMode:(unsigned long long)arg1;
- (void)updatePipOptionVisible:(BOOL)arg1;
- (void)layoutSubviews;
- (CGRect)selectionBGTargetFrame;
- (id)selectedOptionView;
- (void)reportLayoutCellActionWithType:(long long)arg1 micLayoutBaseMode:(unsigned long long)arg2;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectionBG;
- (void)setSelectionBG:(id)arg1;
- (id)fullScreenOption;
- (void)setFullScreenOption:(id)arg1;
- (id)dualOption;
- (void)setDualOption:(id)arg1;
- (id)pipOption;
- (void)setPipOption:(id)arg1;
- (id)grabOption;
- (void)setGrabOption:(id)arg1;
- (unsigned long long)currentMode;
- (void)setCurrentMode:(unsigned long long)arg1;
- (BOOL)hasSetInitialMode;
- (void)setHasSetInitialMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
