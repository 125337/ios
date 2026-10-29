@interface WCRedEnvelopesStoryPlayerHttpMediaWrap : WCPlayerHttpMediaWrap
{
    unsigned int _subtypeId; // +0x8
    NSString * _resourceURL; // +0x10
    long long _index; // +0x18
}
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)initWithSubtypeId:(unsigned int)arg1 resIndex:(long long)arg2;
- (id)resourceURL;
- (void)setResourceURL:(id)arg1;
- (unsigned int)subtypeId;
- (void)setSubtypeId:(unsigned int)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (void).cxx_destruct;
@end

