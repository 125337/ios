@interface WAPlayerHttpMediaWrap : WCPlayerHttpMediaWrap
{
    NSString * _url; // +0x8
    NSString * _localFilePath; // +0x10
    NSString * _referer; // +0x18
}
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithEmpty;
- (id)getHTTPReferer;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (id)referer;
- (void)setReferer:(id)arg1;
- (void).cxx_destruct;
@end
