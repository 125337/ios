@interface MJMovieComposingInspector : MMUIView
{
    id <MJMovieComposingInspectorDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUIButton * _doneButton; // +0x18
    MMUIButton * _cancelButton; // +0x20
    UIView * _contentView; // +0x28
    UIViewController * _contentViewController; // +0x30
    UIView * _topBar; // +0x38
}
- (void)willMoveToSuperview:(id)arg1;
- (void)removeFromSuperview;
- (id)initWithContentView:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)dealloc;
- (void)setupViews;
- (void)layoutViews;
- (void)hideCancelButtonAnimated:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (id)doneButton;
- (id)cancelButton;
- (id)contentView;
- (id)contentViewController;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (void).cxx_destruct;
@end

