@interface MJMovieComposingEffectState : NSObject
{
    BOOL _shootContentWrapEffectEnabledInMovie; // +0x8
    BOOL _followWrapAutoApplyConsumed; // +0x9
    BOOL _originalAssetGenerated; // +0xa
    unsigned long long _videoContentSource; // +0x10
    NSString * _originalShootTemplateID; // +0x18
    NSString * _followWrapTemplateID; // +0x20
    MMCameraTemplateItem * _originalShootTemplateItem; // +0x28
    OMJRecordingFinishInfo * _originalRecordingFinishInfo; // +0x30
    FinderVideoTemplateInfo * _originalShootTemplateInfo; // +0x38
    MMCameraTemplateItem * _acceptedWrapTemplateItem; // +0x40
    OMJCamOptionResult * _acceptedCamOptionResult; // +0x48
    OMJRecordingFinishInfo * _acceptedRecordingFinishInfo; // +0x50
    unsigned long long _editorEnterTimestampMs; // +0x58
}
- (id)initWithSource:(unsigned long long)arg1 originalShootTemplateItem:(id)arg2 recordingFinishInfo:(id)arg3 shootContentWrapEffectEnabledInMovie:(BOOL)arg4 followWrapTemplateID:(id)arg5;
- (BOOL)matchesOriginalRecordingFinishInfo:(id)arg1;
- (BOOL)canAutomaticallyApplyFollowWrapTemplate;
- (void)consumeAutomaticApplication;
- (void)acceptWrapTemplateItem:(id)arg1 camOptionResult:(id)arg2 recordingFinishInfo:(id)arg3;
- (id)description;
- (unsigned long long)videoContentSource;
- (BOOL)shootContentWrapEffectEnabledInMovie;
- (id)originalShootTemplateID;
- (id)followWrapTemplateID;
- (id)originalShootTemplateItem;
- (id)originalRecordingFinishInfo;
- (id)originalShootTemplateInfo;
- (void)setOriginalShootTemplateInfo:(id)arg1;
- (id)acceptedWrapTemplateItem;
- (id)acceptedCamOptionResult;
- (id)acceptedRecordingFinishInfo;
- (BOOL)followWrapAutoApplyConsumed;
- (unsigned long long)editorEnterTimestampMs;
- (void)setEditorEnterTimestampMs:(unsigned long long)arg1;
- (BOOL)originalAssetGenerated;
- (void)setOriginalAssetGenerated:(BOOL)arg1;
- (void).cxx_destruct;
@end
