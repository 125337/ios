@interface CLMProcessHalfScreenView : MMPageSheetBaseView <IChatLogDataMgrExt>
{
    id /* block */ _deleteLogic; // +0x8
    unsigned long long _dataSize; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _tipLabel; // +0x20
    UILabel * _linkLabel; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
    UIImageView * _finishIconView; // +0x38
    NSString * _processTitle; // +0x40
    NSString * _processTip; // +0x48
    NSString * _stopActionName; // +0x50
    NSString * _finishTitle; // +0x58
    NSString * _finishTip; // +0x60
}
- (id)initWithDataSize:(unsigned long long)arg1 deleteLogic:(id /* block */)arg2 processTitle:(id)arg3 processTip:(id)arg4 stopActionName:(id)arg5 finishTitle:(id)arg6 finishTip:(id)arg7;
- (void)startDeleteLogic;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataDeleteProgress:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (id)p_getTitleAttributeString:(id)arg1;
- (id)p_getTipAttributeString:(id)arg1;
- (void)updateView;
- (void)setupDetailView;
- (void)onTapStopDeleteButton;
- (id /* block */)deleteLogic;
- (void)setDeleteLogic:(id /* block */)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)linkLabel;
- (void)setLinkLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)finishIconView;
- (void)setFinishIconView:(id)arg1;
- (id)processTitle;
- (void)setProcessTitle:(id)arg1;
- (id)processTip;
- (void)setProcessTip:(id)arg1;
- (id)stopActionName;
- (void)setStopActionName:(id)arg1;
- (id)finishTitle;
- (void)setFinishTitle:(id)arg1;
- (id)finishTip;
- (void)setFinishTip:(id)arg1;
- (void).cxx_destruct;
@end

