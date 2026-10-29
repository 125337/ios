@interface MJCamChangeTemplateParams : NSObject
{
    OMJCaptureOptions * _templateOptions; // +0x8
    OMJCamTemplateInfo * _templateInfo; // +0x10
    OMJCamGestureRecognizerSettings * _gestureSettings; // +0x18
    OMJCamMetaTraits * _camMetaTraits; // +0x20
    OMJMusicInfo * _selectedMusicInfo; // +0x28
}
- (id)templateOptions;
- (void)setTemplateOptions:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)gestureSettings;
- (void)setGestureSettings:(id)arg1;
- (id)camMetaTraits;
- (void)setCamMetaTraits:(id)arg1;
- (id)selectedMusicInfo;
- (void)setSelectedMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end

