@interface OMJTemplateServiceParams : NSObject
{
    id <OMJTemplateServiceProvider> _instaMovieServiceProvider; // +0x8
    id <OMJTemplateServiceProvider> _camFunServiceProvider; // +0x10
    OMJCDNBridgeService * _cdnService; // +0x18
}
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1;
- (id)initWithCamFunTemplateServiceProvider:(id)arg1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2 cdnService:(id)arg3;
- (id)instaMovieServiceProvider;
- (id)camFunServiceProvider;
- (id)cdnService;
- (void).cxx_destruct;
@end
