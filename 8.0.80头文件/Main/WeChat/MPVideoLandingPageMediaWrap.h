@interface MPVideoLandingPageMediaWrap : WCPlayerHttpMediaWrap
{
    NSString * _url; // +0x8
    NSString * _identifier; // +0x10
}
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithUrl:(id)arg1;
- (BOOL)isLIFOPreloadTask;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
