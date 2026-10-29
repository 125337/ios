@interface OMJMaasStartupParams : NSObject
{
    BOOL _shouldEnableMetalRenderSys; // +0x8
    OMJILinkParams * _iLinkParams; // +0x10
    OMJEnvironmentParams * _environmentParams; // +0x18
    OMJLoggingParams * _loggingParams; // +0x20
    OMJWarmupParams * _warmupParams; // +0x28
    OMJTemplateServiceParams * _templateServiceParams; // +0x30
    OMJRenderingParams * _renderingParams; // +0x38
}
- (id)initWithILinkParams:(id)arg1 environmentParams:(id)arg2 loggingParams:(id)arg3 templateServiceParams:(id)arg4 renderingParams:(id)arg5;
- (id)initWithILinkParams:(id)arg1 environmentParams:(id)arg2 loggingParams:(id)arg3 warmupParams:(id)arg4 templateServiceParams:(id)arg5 renderingParams:(id)arg6 shouldEnableMetalRenderSys:(BOOL)arg7;
- (id)iLinkParams;
- (id)environmentParams;
- (id)loggingParams;
- (id)warmupParams;
- (id)templateServiceParams;
- (id)renderingParams;
- (BOOL)shouldEnableMetalRenderSys;
- (void).cxx_destruct;
@end

