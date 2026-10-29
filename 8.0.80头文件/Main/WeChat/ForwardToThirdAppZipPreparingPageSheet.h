@interface ForwardToThirdAppZipPreparingPageSheet : MMPageSheetBaseView
{
    BOOL _completed; // +0x8
    id /* block */ _cancelHandler; // +0x10
    UIImageView * _fileIconView; // +0x18
    SightIconView * _progressView; // +0x20
    UILabel * _fileNameLabel; // +0x28
    UILabel * _statusLabel; // +0x30
}
- (id)initWithFileName:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)onCancelButton;
- (void)markCompleted;
- (void)pageSheetDidDismiss;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id)fileIconView;
- (void)setFileIconView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)fileNameLabel;
- (void)setFileNameLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
