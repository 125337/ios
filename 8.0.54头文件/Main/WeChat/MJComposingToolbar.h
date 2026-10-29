@interface MJComposingToolbar : MMUIView
{
    MJTimecodeView * _timecodeLabel; // +0x8
    MMUIButton * _playButton; // +0x10
    MMUIButton * _undoButton; // +0x18
    MMUIButton * _redoButton; // +0x20
    UIStackView * _undoRedoContainer; // +0x28
    NSArray * _contentSubviews; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (void)hideSubviews:(id)arg1 animated:(BOOL)arg2;
- (void)showSubviews:(id)arg1 animated:(BOOL)arg2;
- (void)showAll:(BOOL)arg1;
- (void)hideAll:(BOOL)arg1;
- (id)timecodeLabel;
- (id)playButton;
- (id)undoButton;
- (id)redoButton;
- (id)undoRedoContainer;
- (void)setUndoRedoContainer:(id)arg1;
- (id)contentSubviews;
- (void)setContentSubviews:(id)arg1;
- (void).cxx_destruct;
@end

