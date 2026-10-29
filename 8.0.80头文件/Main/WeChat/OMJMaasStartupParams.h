@interface OMJMaasStartupParams : NSObject
{
    BOOL _shouldEnableMetalRenderSys; // +0x8
    OMJEnvironmentParams * _environmentParams; // +0x10
    OMJLoggingParams * _loggingParams; // +0x18
    OMJWarmupParams * _warmupParams; // +0x20
    OMJTemplateServiceParams * _templateServiceParams; // +0x28
    OMJAppRequestBridgeService * _appRequestService; // +0x30
    OMJRenderingParams * _renderingParams; // +0x38
}
- (id)initWithEnvironmentParams:(id)arg1 loggingParams:(id)arg2 templateServiceParams:(id)arg3 appRequestService:(id)arg4 renderingParams:(id)arg5;
- (id)initWithEnvironmentParams:(id)arg1 loggingParams:(id)arg2 warmupParams:(id)arg3 templateServiceParams:(id)arg4 appRequestService:(id)arg5 renderingParams:(id)arg6 shouldEnableMetalRenderSys:(BOOL)arg7;
- (id)environmentParams;
- (id)loggingParams;
- (id)warmupParams;
- (id)templateServiceParams;
- (id)appRequestService;
- (id)renderingParams;
- (BOOL)shouldEnableMetalRenderSys;
- (void).cxx_destruct;
@end
