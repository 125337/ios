@interface DeepCleanProgressHalfScreenView : MMPageSheetBaseView <IDeepCleanClassExt>
{
    BOOL _cancelled; // +0x8
    float _currentProgress; // +0xc
    unsigned long long _dataSize; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _tipLabel; // +0x20
    UILabel * _linkLabel; // +0x28
    UIButton * _stopButton; // +0x30
    MMUIActivityIndicatorView * _loadingView; // +0x38
    UIImageView * _finishIconView; // +0x40
    NSString * _processTitle; // +0x48
    NSString * _processTip; // +0x50
    NSString * _cancellingTitle; // +0x58
    NSString * _cancelledTitle; // +0x60
    NSString * _finishTitle; // +0x68
    NSString * _finishTip; // +0x70
    id /* block */ _deleteLogic; // +0x78
    id /* block */ _stopLogic; // +0x80
    id /* block */ _doneLogic; // +0x88
}
- (id)initWithDataSize:(unsigned long long)arg1 deleteLogic:(id /* block */)arg2 stopLogic:(id /* block */)arg3 doneLogic:(id /* block */)arg4 processTitle:(id)arg5 processTip:(id)arg6 cancellingTitle:(id)arg7 cancelledTitle:(id)arg8 finishTitle:(id)arg9 finishTip:(id)arg10;
- (void)startDeleteLogic;
- (void)onDeepClean:(id)arg1 progressChange:(float)arg2;
- (void)onDeepCleanStop:(id)arg1;
- (double)bottomViewBottomMargin;
- (id)p_getTitleAttributeString:(id)arg1;
- (id)p_getTipAttributeString:(id)arg1;
- (void)updateView;
- (void)setupDetailView;
- (void)onTapStopDeleteButton;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)linkLabel;
- (void)setLinkLabel:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)finishIconView;
- (void)setFinishIconView:(id)arg1;
- (id)processTitle;
- (void)setProcessTitle:(id)arg1;
- (id)processTip;
- (void)setProcessTip:(id)arg1;
- (id)cancellingTitle;
- (void)setCancellingTitle:(id)arg1;
- (id)cancelledTitle;
- (void)setCancelledTitle:(id)arg1;
- (id)finishTitle;
- (void)setFinishTitle:(id)arg1;
- (id)finishTip;
- (void)setFinishTip:(id)arg1;
- (float)currentProgress;
- (void)setCurrentProgress:(float)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (id /* block */)deleteLogic;
- (void)setDeleteLogic:(id /* block */)arg1;
- (id /* block */)stopLogic;
- (void)setStopLogic:(id /* block */)arg1;
- (id /* block */)doneLogic;
- (void)setDoneLogic:(id /* block */)arg1;
- (void).cxx_destruct;
@end
