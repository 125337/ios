@interface MMFinderLivePIPSettingGuidePanel : MMPageSheetBaseView
{
    BOOL _isContentWidthChanged; // +0x8
    id /* block */ _jumpCallback; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIView * _panelView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIButton * _confirmButton; // +0x38
    UIButton * _jumpButton; // +0x40
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)setDescContent;
- (void)layoutJumpButton;
- (void)jumpButtonAction;
- (void)layoutConfirmButton;
- (void)confirmButtonAction;
- (void)clearTags;
- (void)pageSheetDidAppear;
- (id)audienceLogReporter;
- (id /* block */)jumpCallback;
- (void)setJumpCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)jumpButton;
- (void)setJumpButton:(id)arg1;
- (BOOL)isContentWidthChanged;
- (void)setIsContentWidthChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
