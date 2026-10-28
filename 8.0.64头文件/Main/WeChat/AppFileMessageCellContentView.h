@interface AppFileMessageCellContentView : UIView <FileTransferTaskWrapDelegate>
{
    BOOL _enableStatusUI; // +0x8
    FileTransferTaskWrap * _taskWrap; // +0x10
    UIView * _contentView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UILabel * _sizeLabel; // +0x28
    UILabel * _stateLabel; // +0x30
    MMLoadingIndicatorView * _loadingView; // +0x38
    UIImageView * _iconView; // +0x40
    AppFileCircleProgressView * _progressView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)task;
- (void)updateDisplay:(id)arg1;
- (id)fileIconForType:(unsigned long long)arg1;
- (void)uploadProgressUI;
- (void)refreshState;
- (void)fileTransferTaskUpdated:(id)arg1;
- (void)fileTransferTask:(id)arg1 onProgress:(int)arg2;
- (void)fileTransferTaskCompleted:(id)arg1;
- (id)taskWrap;
- (void)setTaskWrap:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (BOOL)enableStatusUI;
- (void)setEnableStatusUI:(BOOL)arg1;
- (void).cxx_destruct;
@end
