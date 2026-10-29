@interface DownloadHeadImageRequest : NSObject
{
    unsigned char category; // +0x8
    BOOL isUseWxpc; // +0x9
    unsigned int requestCount; // +0xc
    NSString * userName; // +0x10
    NSString * url; // +0x18
}
- (id)init;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)requestCount;
- (void)setRequestCount:(unsigned int)arg1;
- (unsigned char)category;
- (void)setCategory:(unsigned char)arg1;
- (BOOL)isUseWxpc;
- (void)setIsUseWxpc:(BOOL)arg1;
- (void).cxx_destruct;
@end

