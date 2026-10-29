@interface VoIPCallCaptureSnapshot : NSObject
{
    BOOL _isVideoRoom; // +0x8
    BOOL _isCaller; // +0x9
    unsigned long long _roomId; // +0x10
    long long _memberType; // +0x18
    long long _callState; // +0x20
    long long _displayStatus; // +0x28
    long long _userCameraState; // +0x30
    NSString * _otherCameraStateLst; // +0x38
}
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (BOOL)isVideoRoom;
- (void)setIsVideoRoom:(BOOL)arg1;
- (long long)memberType;
- (void)setMemberType:(long long)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (long long)callState;
- (void)setCallState:(long long)arg1;
- (long long)displayStatus;
- (void)setDisplayStatus:(long long)arg1;
- (long long)userCameraState;
- (void)setUserCameraState:(long long)arg1;
- (id)otherCameraStateLst;
- (void)setOtherCameraStateLst:(id)arg1;
- (void).cxx_destruct;
@end
