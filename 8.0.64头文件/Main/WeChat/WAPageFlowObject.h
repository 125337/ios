@interface WAPageFlowObject : MMObject
{
    BOOL _isEntrance; // +0x8
    BOOL _isReportBePoped; // +0x9
    unsigned int _lastClickTimeStamp; // +0xc
    NSString * _pagePath; // +0x10
    NSString * _query; // +0x18
    unsigned long long _lastBecomeForgroundTime; // +0x20
    unsigned long long _stayTime; // +0x28
    unsigned long long _costTime; // +0x30
    unsigned long long _targetAction; // +0x38
    NSString * _targetPagePath; // +0x40
    NSString * _referPagePath; // +0x48
    unsigned long long _stayTimeAtFunctionalPageEnterGame; // +0x50
}
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)lastBecomeForgroundTime;
- (void)setLastBecomeForgroundTime:(unsigned long long)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (unsigned int)lastClickTimeStamp;
- (void)setLastClickTimeStamp:(unsigned int)arg1;
- (unsigned long long)targetAction;
- (void)setTargetAction:(unsigned long long)arg1;
- (id)targetPagePath;
- (void)setTargetPagePath:(id)arg1;
- (id)referPagePath;
- (void)setReferPagePath:(id)arg1;
- (BOOL)isEntrance;
- (void)setIsEntrance:(BOOL)arg1;
- (BOOL)isReportBePoped;
- (void)setIsReportBePoped:(BOOL)arg1;
- (unsigned long long)stayTimeAtFunctionalPageEnterGame;
- (void)setStayTimeAtFunctionalPageEnterGame:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
