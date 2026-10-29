@interface WAMediaCastingDataReporter : NSObject
{
    unsigned int _appServiceType; // +0x8
    unsigned int _component; // +0xc
    NSString * _appID; // +0x10
    NSString * _pagePath; // +0x18
}
- (id)initWithAppID:(id)arg1 pagePath:(id)arg2 appServiceType:(unsigned int)arg3 component:(unsigned int)arg4;
- (void)reportDeviceCount:(unsigned long long)arg1 eventType:(unsigned long long)arg2 videoState:(unsigned long long)arg3 videoURI:(id)arg4;
- (void)reportCastingResult:(BOOL)arg1 eventType:(unsigned long long)arg2 modelName:(id)arg3 manufacturer:(id)arg4 videoState:(unsigned long long)arg5 protocolType:(unsigned long long)arg6 videoURI:(id)arg7;
- (void)reportClickWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 protocolType:(unsigned long long)arg3 videoURI:(id)arg4;
- (void)reportUserSelectWithVideoState:(unsigned long long)arg1 modelName:(id)arg2 manufacturer:(id)arg3 protocolType:(unsigned long long)arg4 videoURI:(id)arg5;
- (id)generateReportItemWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 videoURI:(id)arg3;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)component;
- (void)setComponent:(unsigned int)arg1;
- (void).cxx_destruct;
@end

