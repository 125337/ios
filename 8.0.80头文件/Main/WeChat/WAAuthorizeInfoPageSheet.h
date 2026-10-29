@interface WAAuthorizeInfoPageSheet : WAPageSheet <WAPopInteractiveTransitionDelegate, WARichTextViewHelperDelegate>
{
    BOOL _isAgentMode; // +0x8
    id /* block */ _openUrlAction; // +0x10
    double _pageSheetHeight; // +0x18
    UIButton * _backButton; // +0x20
    UILabel * _titleLabel; // +0x28
    id <IWARichTextViewHelper> _richTextHelper; // +0x30
    UIScrollView * _scrollView; // +0x38
    NSString * _title; // +0x40
    NSString * _info; // +0x48
    WAMenuPopInteractiveTransition * _popIT; // +0x50
    UIScreenEdgePanGestureRecognizer * _panGR; // +0x58
}
- (id)initWithTitle:(id)arg1 info:(id)arg2 height:(double)arg3;
- (id)initWithTitle:(id)arg1 info:(id)arg2 isAgentMode:(BOOL)arg3;
- (id)initWithTitle:(id)arg1 info:(id)arg2;
- (id)initWithInfo:(id)arg1;
- (void)_setupUI;
- (void)layoutSubViews;
- (double)contentHeight;
- (void)backButtonClick:(id)arg1;
- (void)updateBackButtonIcon;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (BOOL)isAgentMode;
- (void)setIsAgentMode:(BOOL)arg1;
- (id /* block */)openUrlAction;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (double)pageSheetHeight;
- (void)setPageSheetHeight:(double)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)richTextHelper;
- (void)setRichTextHelper:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)title;
- (id)info;
- (id)popIT;
- (void)setPopIT:(id)arg1;
- (id)panGR;
- (void)setPanGR:(id)arg1;
- (void).cxx_destruct;
@end
