@interface TRTCUser : NSObject <NSCopying>
{
    unsigned int _intRoomId; // +0x8
    NSString * _userId; // +0x10
    NSString * _strRoomId; // +0x18
}
- (TrtcUser)convertToCppParams;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (unsigned int)intRoomId;
- (void)setIntRoomId:(unsigned int)arg1;
- (id)strRoomId;
- (void)setStrRoomId:(id)arg1;
- (void).cxx_destruct;
@end
