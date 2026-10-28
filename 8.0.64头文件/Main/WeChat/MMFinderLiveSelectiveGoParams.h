@interface MMFinderLiveSelectiveGoParams : NSObject
{
    unsigned int _goFlag; // +0x8
    unsigned int _reportScenario; // +0xc
    NSString * _finderUsername; // +0x10
    WCFinderDataItem * _finderDataItem; // +0x18
    unsigned long long _functionType; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    NSData * _paramsBuffer; // +0x30
}
+ (id)paramsWithSelectGoResponse:(id)arg1;
- (unsigned int)goFlag;
- (void)setGoFlag:(unsigned int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned long long)functionType;
- (void)setFunctionType:(unsigned long long)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)paramsBuffer;
- (void)setParamsBuffer:(id)arg1;
- (unsigned int)reportScenario;
- (void)setReportScenario:(unsigned int)arg1;
- (void).cxx_destruct;
@end
