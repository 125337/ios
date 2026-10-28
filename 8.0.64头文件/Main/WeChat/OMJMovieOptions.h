@interface OMJMovieOptions : NSObject
{
    BOOL _isLyricEnabled; // +0x8
    BOOL _isOSTMuted; // +0x9
    BOOL _isBGMMuted; // +0xa
    BOOL _shouldAdjustBlankTemplatePreviewOffset; // +0xb
    BOOL _isVideoTranscodingOptimEnabled; // +0xc
    BOOL _isAIAnalysisEnabled; // +0xd
    BOOL _shouldAutoRecommendBGM; // +0xe
    BOOL _shouldRecommendBGMForRecommendedTemplates; // +0xf
    BOOL _shouldRetainOriginalMediaDuration; // +0x10
    float _blankTemplatePreviewOffsetPercent; // +0x14
    float _preprocTimeoutLimitSeconds; // +0x18
    OMJDimensionLevel * _videoTranscodingOptimDimensionLevel; // +0x20
    NSSet * _defaultTemplateIDs; // +0x28
    struct _maxDuration; // +0x30
    struct _retainOriginalMediaDurationThreshold; // +0x48
}
- (id)initWithIsLyricEnabled:(BOOL)arg1 isOSTMuted:(BOOL)arg2 isBGMMuted:(BOOL)arg3;
- (id)initWithIsLyricEnabled:(BOOL)arg1 isOSTMuted:(BOOL)arg2 isBGMMuted:(BOOL)arg3 shouldAdjustBlankTemplatePreviewOffset:(BOOL)arg4 blankTemplatePreviewOffsetPercent:(float)arg5;
- (id)initWithIsLyricEnabled:(BOOL)arg1 isOSTMuted:(BOOL)arg2 isBGMMuted:(BOOL)arg3 shouldAdjustBlankTemplatePreviewOffset:(BOOL)arg4 blankTemplatePreviewOffsetPercent:(float)arg5 isVideoTranscodingOptimEnabled:(BOOL)arg6 videoTranscodingOptimDimensionLevel:(id)arg7 isAIAnalysisEnabled:(BOOL)arg8 preprocTimeoutLimitSeconds:(float)arg9;
- (id)description;
- (BOOL)isLyricEnabled;
- (BOOL)isOSTMuted;
- (BOOL)isBGMMuted;
- (BOOL)shouldAdjustBlankTemplatePreviewOffset;
- (float)blankTemplatePreviewOffsetPercent;
- (BOOL)isVideoTranscodingOptimEnabled;
- (id)videoTranscodingOptimDimensionLevel;
- (BOOL)isAIAnalysisEnabled;
- (float)preprocTimeoutLimitSeconds;
- (struct)maxDuration;
- (void)setMaxDuration:(struct)arg1;
- (BOOL)shouldAutoRecommendBGM;
- (void)setShouldAutoRecommendBGM:(BOOL)arg1;
- (BOOL)shouldRecommendBGMForRecommendedTemplates;
- (void)setShouldRecommendBGMForRecommendedTemplates:(BOOL)arg1;
- (BOOL)shouldRetainOriginalMediaDuration;
- (void)setShouldRetainOriginalMediaDuration:(BOOL)arg1;
- (struct)retainOriginalMediaDurationThreshold;
- (void)setRetainOriginalMediaDurationThreshold:(struct)arg1;
- (id)defaultTemplateIDs;
- (void)setDefaultTemplateIDs:(id)arg1;
- (void).cxx_destruct;
@end
