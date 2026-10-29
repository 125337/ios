@interface EditImageReportService : MMUserService <MMServiceProtocol>
{
    BOOL _isSightBeautyEffect; // +0x8
    unsigned int _seekBarDragCount; // +0xc
    unsigned int _cropRectChangeCount; // +0x10
    unsigned int _isTimeLimitExceeded; // +0x14
    float _cpuUsage; // +0x18
    EditImageReportObj * _editImageReportObj; // +0x20
    NSMutableArray * _editImageReportObjArray; // +0x28
    unsigned long long _eventPublishId; // +0x30
    unsigned long long _showPostEntranceTime; // +0x38
    NSString * _sightBeautyEffectInfo; // +0x40
    long long _memoryResideng; // +0x48
}
- (id)editImageReportObj;
- (id)editImageReportObjArray;
- (void)initReportService;
- (void)finishReport;
- (void)quitReport;
- (void)resetEventPublishId;
- (void)resavePerformanceWithCpuUsage:(float)arg1 memoryResident:(long long)arg2;
- (void)cleanPerformance;
- (void)reportFinderEditResultWithType:(unsigned long long)arg1 successful:(BOOL)arg2 videoDuration:(double)arg3 videoSize:(CGSize)arg4 composeDuration:(unsigned int)arg5;
- (void)reportCameraActionsLog;
- (void)setEditImageReportObj:(id)arg1;
- (void)setEditImageReportObjArray:(id)arg1;
- (unsigned long long)eventPublishId;
- (void)setEventPublishId:(unsigned long long)arg1;
- (unsigned long long)showPostEntranceTime;
- (void)setShowPostEntranceTime:(unsigned long long)arg1;
- (unsigned int)seekBarDragCount;
- (void)setSeekBarDragCount:(unsigned int)arg1;
- (unsigned int)cropRectChangeCount;
- (void)setCropRectChangeCount:(unsigned int)arg1;
- (unsigned int)isTimeLimitExceeded;
- (void)setIsTimeLimitExceeded:(unsigned int)arg1;
- (BOOL)isSightBeautyEffect;
- (void)setIsSightBeautyEffect:(BOOL)arg1;
- (id)sightBeautyEffectInfo;
- (void)setSightBeautyEffectInfo:(id)arg1;
- (float)cpuUsage;
- (void)setCpuUsage:(float)arg1;
- (long long)memoryResideng;
- (void)setMemoryResideng:(long long)arg1;
- (void).cxx_destruct;
@end

