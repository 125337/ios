@interface WAAppTaskWebLaunchInfo : NSObject
{
    NSString * _referrerAppID; // +0x8
    NSString * _url; // +0x10
}
- (id)description;
- (id)referrerAppID;
- (void)setReferrerAppID:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

