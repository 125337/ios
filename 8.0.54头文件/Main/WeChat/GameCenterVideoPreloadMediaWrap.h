@interface GameCenterVideoPreloadMediaWrap : WCPlayerHttpMediaWrap
{
    NSString * _url; // +0x8
}
+ (id)getCacheIdentifyFromUrl:(id)arg1;
- (id)getMediaWrapUrl;
- (id)initWithUrl:(id)arg1;
- (id)getMediaWrapIdentifier;
- (BOOL)isLIFOPreloadTask;
- (id)getTempDirectory;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

