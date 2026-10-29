@interface MJMovieComposingShootTemplateReopenState : NSObject
{
    MJMovieComposingEffectState * _effectState; // +0x8
    MJPublisherEffectReporter * _effectReporter; // +0x10
    MMCameraTemplateItem * _selectedTemplateItem; // +0x18
    OMJCamOptionResult * _camOptionResult; // +0x20
    unsigned long long _toastType; // +0x28
}
- (id)effectState;
- (void)setEffectState:(id)arg1;
- (id)effectReporter;
- (void)setEffectReporter:(id)arg1;
- (id)selectedTemplateItem;
- (void)setSelectedTemplateItem:(id)arg1;
- (id)camOptionResult;
- (void)setCamOptionResult:(id)arg1;
- (unsigned long long)toastType;
- (void)setToastType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
