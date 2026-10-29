@interface MMFinderLivePromoteArticleAlertPageSheetView : MMPageSheetBaseView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id /* block */ _dismissCallback; // +0x10
    UIView * _panelView; // +0x18
    UIScrollView * _contentScrollView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _contentLabel; // +0x30
    MMUIButton * _confirmBtn; // +0x38
    NSString * _alertContent; // +0x40
}
- (id)initWithAlertContent:(id)arg1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutContentScrollView;
- (void)layoutTitleLabel;
- (void)layoutContentLabel;
- (void)layoutConfirmBtn;
- (double)contentWidth;
- (double)contentHeight;
- (double)getTitleContentSumHeight;
- (double)getAlertContentBottomMargin;
- (double)getConfirmBtnBottomMargin;
- (id)alertTitle;
- (void)onConfirmAction;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)alertContent;
- (void)setAlertContent:(id)arg1;
- (void).cxx_destruct;
@end

