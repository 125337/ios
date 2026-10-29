@interface WAReportPageFrameInjectItem : WAReportBaseItem
{
    BOOL _isFromTaskPreload; // +0x8
    unsigned int _appServiceType; // +0xc
    int _injectCostTime; // +0x10
    unsigned int _pageFrameLength; // +0x14
    unsigned long long _injectStartTime; // +0x18
    unsigned long long _injectEndTime; // +0x20
    NSString * _moduleName; // +0x28
    NSString * _lazyLoadKey; // +0x30
}
- (int)reportID;
- (id)reportString;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (int)injectCostTime;
- (void)setInjectCostTime:(int)arg1;
- (unsigned long long)injectStartTime;
- (void)setInjectStartTime:(unsigned long long)arg1;
- (unsigned long long)injectEndTime;
- (void)setInjectEndTime:(unsigned long long)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned int)pageFrameLength;
- (void)setPageFrameLength:(unsigned int)arg1;
- (BOOL)isFromTaskPreload;
- (void)setIsFromTaskPreload:(BOOL)arg1;
- (id)lazyLoadKey;
- (void)setLazyLoadKey:(id)arg1;
- (void).cxx_destruct;
@end
