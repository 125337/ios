@interface WCFinderJSApiPreloadFeedItem : NSObject
{
    BOOL _needPreloadFirstFrame; // +0x8
    NSString * _encryptId; // +0x10
    NSString * _nonceId; // +0x18
}
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)encryptId;
- (void)setEncryptId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (BOOL)needPreloadFirstFrame;
- (void)setNeedPreloadFirstFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end
