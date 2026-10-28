@interface WSTemplateScrollView : UIScrollView <_TtP6WeChat20WSTemplateCommandExt_, WSTemplateEventObserver>
{
    unsigned long long _curIndex; // +0x8
    UIStackView * _stackView; // +0x10
    NSMutableArray * _templateContainers; // +0x18
    CGRect _newlifeTabArea; // +0x20
}
- (id)initWithTemplateConfigs:(id)arg1;
- (void)initViewWithConfigs:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setContentSize:(CGSize)arg1;
- (void)layoutSubviews;
- (void)initAllWebviewsIfNeed;
- (void)enumerateWebviewOwnerUsingBlock:(id /* block */)arg1;
- (void)scrollRectToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onTabTemplateContainerAppear:(id)arg1;
- (void)onTabTemplateContainerDisappear:(id)arg1;
- (id)getTemplateContainerVC:(id)arg1;
- (void)loadContentForTabIfNeed:(unsigned long long)arg1;
- (id)curWebviewContainer;
- (void)enterWSWebView;
- (void)didEnterWSWebView;
- (void)quitWSWebView;
- (void)templateWillDisappear;
- (void)templateDidDisappear;
- (void)templateAppear;
- (void)onStartRenderWithTagId:(long long)arg1;
- (void)onSetFlutterTabAreaWithFrame:(CGRect)arg1;
- (void)onSetScrollable:(BOOL)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)onUpdateLocalJSTemplateForBizType:(unsigned long long)arg1;
- (unsigned long long)curIndex;
- (void)setCurIndex:(unsigned long long)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)templateContainers;
- (void)setTemplateContainers:(id)arg1;
- (CGRect)newlifeTabArea;
- (void)setNewlifeTabArea:(CGRect)arg1;
- (void).cxx_destruct;
@end
