@interface TPPlayerTrackInfo : TPTrackInfo
{
    NSString * _urlString; // +0x8
    NSString * _mimeType; // +0x10
    NSDictionary * _httpHeader; // +0x18
}
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (void).cxx_destruct;
@end
