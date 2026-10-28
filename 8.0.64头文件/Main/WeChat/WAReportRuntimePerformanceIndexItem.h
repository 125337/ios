@interface WAReportRuntimePerformanceIndexItem : WAReportBaseItem
{
    BOOL _isGame; // +0x8
    BOOL _enableSkyline; // +0x9
    BOOL _bytecodeEnabled; // +0xa
    unsigned int _reportScene; // +0xc
    unsigned int _reportSceneCurrentCount; // +0x10
    unsigned int _indexType; // +0x14
    unsigned int _sampleCount; // +0x18
    unsigned int _runtimeCount; // +0x1c
    unsigned int _skylineCount; // +0x20
    unsigned int _webViewCount; // +0x24
    unsigned long long _indexNumBeforeLaunch; // +0x28
    unsigned long long _indexNumInCurrentScene; // +0x30
    unsigned long long _indexAvgSampleNumInCurrentLifeSpan; // +0x38
    unsigned long long _indexMaxSampleNumInCurrentLifeSpan; // +0x40
}
- (int)reportID;
- (id)reportString;
- (unsigned int)reportScene;
- (void)setReportScene:(unsigned int)arg1;
- (unsigned int)reportSceneCurrentCount;
- (void)setReportSceneCurrentCount:(unsigned int)arg1;
- (unsigned int)indexType;
- (void)setIndexType:(unsigned int)arg1;
- (unsigned long long)indexNumBeforeLaunch;
- (void)setIndexNumBeforeLaunch:(unsigned long long)arg1;
- (unsigned long long)indexNumInCurrentScene;
- (void)setIndexNumInCurrentScene:(unsigned long long)arg1;
- (unsigned long long)indexAvgSampleNumInCurrentLifeSpan;
- (void)setIndexAvgSampleNumInCurrentLifeSpan:(unsigned long long)arg1;
- (unsigned long long)indexMaxSampleNumInCurrentLifeSpan;
- (void)setIndexMaxSampleNumInCurrentLifeSpan:(unsigned long long)arg1;
- (unsigned int)sampleCount;
- (void)setSampleCount:(unsigned int)arg1;
- (unsigned int)runtimeCount;
- (void)setRuntimeCount:(unsigned int)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (BOOL)enableSkyline;
- (void)setEnableSkyline:(BOOL)arg1;
- (unsigned int)skylineCount;
- (void)setSkylineCount:(unsigned int)arg1;
- (unsigned int)webViewCount;
- (void)setWebViewCount:(unsigned int)arg1;
- (BOOL)bytecodeEnabled;
- (void)setBytecodeEnabled:(BOOL)arg1;
@end
