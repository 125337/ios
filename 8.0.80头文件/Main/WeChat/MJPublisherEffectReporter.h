@interface MJPublisherEffectReporter : NSObject
{
    UIView * _logicParent; // +0x8
    MJMovieComposingEffectState * _state; // +0x10
    MJPublisherContext * _publisherContext; // +0x18
    NSHashTable * _exposedMoreEntryLists; // +0x20
}
- (id)initWithState:(id)arg1 publisherContext:(id)arg2;
- (id)commonParams;
- (void)beginEditorStay;
- (void)endEditorStayWithExtInfo:(id)arg1;
- (void)bindEntryView:(id)arg1;
- (id)paramsForItem:(id)arg1 position:(unsigned long long)arg2 tabName:(id)arg3;
- (void)bindMoreEntryView:(id)arg1 inListView:(id)arg2;
- (void)bindTemplateView:(id)arg1 item:(id)arg2 position:(unsigned long long)arg3 tabName:(id)arg4;
- (void)reportTemplateTap:(id)arg1 position:(unsigned long long)arg2 tabName:(id)arg3;
- (void)reportApplyClickWithTemplateID:(id)arg1;
- (void)reportEffectCloseClickWithTemplateID:(id)arg1;
- (void)bindExitEffectConfirmationButton:(id)arg1 templateID:(id)arg2;
- (id)logicParent;
- (void)setLogicParent:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (id)exposedMoreEntryLists;
- (void)setExposedMoreEntryLists:(id)arg1;
- (void).cxx_destruct;
@end
