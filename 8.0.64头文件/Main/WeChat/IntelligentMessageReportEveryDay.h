@interface IntelligentMessageReportEveryDay : MMObject
{
    unsigned int _handelCount; // +0x8
    float _avgCostTime; // +0xc
    unsigned int _modelType; // +0x10
}
- (unsigned int)handelCount;
- (void)setHandelCount:(unsigned int)arg1;
- (float)avgCostTime;
- (void)setAvgCostTime:(float)arg1;
- (unsigned int)modelType;
- (void)setModelType:(unsigned int)arg1;
@end
