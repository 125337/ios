@interface MJShootAIGCAsyncGenResultPostContext : NSObject
{
    BOOL _hasMutatedByMovieComposing; // +0x8
    OMJRecordingFinishInfo * _finishInfo; // +0x10
    MJShootComposingDraft * _draft; // +0x18
    NSString * _finderUsername; // +0x20
    MMShortVideoParamModel * _paramModel; // +0x28
    FinderVideoTemplateInfo * _aigcAsyncTemplateInfo; // +0x30
}
- (id)finishInfo;
- (void)setFinishInfo:(id)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)paramModel;
- (void)setParamModel:(id)arg1;
- (BOOL)hasMutatedByMovieComposing;
- (void)setHasMutatedByMovieComposing:(BOOL)arg1;
- (id)aigcAsyncTemplateInfo;
- (void)setAigcAsyncTemplateInfo:(id)arg1;
- (void).cxx_destruct;
@end
