@interface MMLiveAdminUserConfig : NSObject <NSCopying>
{
    BOOL _useVideo; // +0x8
    NSString * _sdkUserId; // +0x10
    NSString * _sdkRoomId; // +0x18
}
- (id)initWithUserId:(id)arg1 andRoomId:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)sdkRoomId;
- (void)setSdkRoomId:(id)arg1;
- (BOOL)useVideo;
- (void)setUseVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
