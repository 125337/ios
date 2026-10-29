@interface OMJTemplateServiceParams : NSObject
{
    id <OMJTemplateServiceProvider> _instaMovieServiceProvider; // +0x8
    id <OMJTemplateServiceProvider> _camFunServiceProvider; // +0x10
    OMJCDNBridgeService * _cdnService; // +0x18
    OMJSignedURLRefreshBridgeService * _signedURLRefreshService; // +0x20
}
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1;
- (id)initWithCamFunTemplateServiceProvider:(id)arg1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2 cdnService:(id)arg3;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2 cdnService:(id)arg3 signedURLRefreshService:(id)arg4;
- (id)instaMovieServiceProvider;
- (id)camFunServiceProvider;
- (id)cdnService;
- (id)signedURLRefreshService;
- (void).cxx_destruct;
@end
