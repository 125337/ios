@interface OMJTemplateServiceParams : NSObject
{
    id <OMJTemplateServiceProvider> _instaMovieServiceProvider; // +0x8
    id <OMJTemplateServiceProvider> _camFunServiceProvider; // +0x10
}
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1;
- (id)initWithCamFunTemplateServiceProvider:(id)arg1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2;
- (id)instaMovieServiceProvider;
- (id)camFunServiceProvider;
- (void).cxx_destruct;
@end

