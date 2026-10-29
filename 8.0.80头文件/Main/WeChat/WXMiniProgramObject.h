@interface WXMiniProgramObject : NSObject
{
    BOOL _withShareTicket; // +0x8
    BOOL _disableForward; // +0x9
    NSString * webpageUrl; // +0x10
    NSString * userName; // +0x18
    NSString * path; // +0x20
    NSData * _hdImageData; // +0x28
    unsigned long long _miniProgramType; // +0x30
}
+ (id)object;
- (id)webpageUrl;
- (void)setWebpageUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)hdImageData;
- (void)setHdImageData:(id)arg1;
- (BOOL)withShareTicket;
- (void)setWithShareTicket:(BOOL)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (void).cxx_destruct;
@end
