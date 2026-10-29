@interface WCFinderVideoProducerServerAIReplacementContext : NSObject
{
    BOOL _originalWasPlaying; // +0x8
    BOOL _originalBGMEnabled; // +0x9
    BOOL _originalOSTEnabled; // +0xa
    BOOL _completed; // +0xb
    NSString * _generationID; // +0x10
    WCFinderVideoProducerCandidateAssetContext * _candidateAssetContext; // +0x18
    OMCComposingSession * _originalComposingSession; // +0x20
    OMJTemplateInfo * _originalTemplateInfo; // +0x28
    OMJMusicInfo * _originalMusicInfo; // +0x30
    NSString * _originalMusicFilePath; // +0x38
    MJServerAIComposingMaterialUploader * _uploader; // +0x40
    MJServerAIComposingTask * _task; // +0x48
    MJServerAIComposingComposer * _composer; // +0x50
    BeatTemplateTaskResult * _candidateTaskResult; // +0x58
    BeatTemplateBGMInfo * _candidateSelectedBGM; // +0x60
    OMCComposingSession * _candidateComposingSession; // +0x68
    id /* block */ _completion; // +0x70
}
- (id)generationID;
- (void)setGenerationID:(id)arg1;
- (id)candidateAssetContext;
- (void)setCandidateAssetContext:(id)arg1;
- (id)originalComposingSession;
- (void)setOriginalComposingSession:(id)arg1;
- (id)originalTemplateInfo;
- (void)setOriginalTemplateInfo:(id)arg1;
- (id)originalMusicInfo;
- (void)setOriginalMusicInfo:(id)arg1;
- (id)originalMusicFilePath;
- (void)setOriginalMusicFilePath:(id)arg1;
- (BOOL)originalWasPlaying;
- (void)setOriginalWasPlaying:(BOOL)arg1;
- (BOOL)originalBGMEnabled;
- (void)setOriginalBGMEnabled:(BOOL)arg1;
- (BOOL)originalOSTEnabled;
- (void)setOriginalOSTEnabled:(BOOL)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)composer;
- (void)setComposer:(id)arg1;
- (id)candidateTaskResult;
- (void)setCandidateTaskResult:(id)arg1;
- (id)candidateSelectedBGM;
- (void)setCandidateSelectedBGM:(id)arg1;
- (id)candidateComposingSession;
- (void)setCandidateComposingSession:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
