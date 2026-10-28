@interface MMLiveMixStreamIdentifyConfig : NSObject <NSCopying>
{
    NSString * _sdkUserId; // +0x8
    NSString * _sdkRoomId; // +0x10
}
- (id)initWithUserId:(id)arg1 andRoomId:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)sdkRoomId;
- (void)setSdkRoomId:(id)arg1;
- (void).cxx_destruct;
@end
