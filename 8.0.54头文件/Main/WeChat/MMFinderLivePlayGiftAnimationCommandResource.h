@interface MMFinderLivePlayGiftAnimationCommandResource : NSObject
{
    NSString * _uri; // +0x8
    NSString * _md5; // +0x10
    MMLiveStorageCleanupPinningToken * _pinningToken; // +0x18
}
+ (id)resourceWithUri:(id)arg1 md5:(id)arg2;
+ (id)resourceWithBackendModel:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)pinningToken;
- (void)setPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

