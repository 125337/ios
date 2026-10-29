@interface TRTCRemoteUserManager : NSObject
{
    id <TRTCRemoteUserManagerDelegate> _delegate; // +0x8
    TRTCCloud * _trtc; // +0x10
    NSMutableDictionary * _users; // +0x18
}
- (id)initWithTrtc:(id)arg1;
- (id)remoteUsers;
- (id)mutableRemoteUsers;
- (void)addUser:(id)arg1 roomId:(id)arg2;
- (void)addOrUpdateUser:(id)arg1 roomId:(id)arg2;
- (void)removeUser:(id)arg1;
- (void)updateUser:(id)arg1 isVideoEnabled:(BOOL)arg2;
- (void)updateUser:(id)arg1 isAudioEnabled:(BOOL)arg2;
- (void)setUser:(id)arg1 isVideoMuted:(BOOL)arg2;
- (void)setUser:(id)arg1 isAudioMuted:(BOOL)arg2;
- (void)setUser:(id)arg1 fillMode:(long long)arg2;
- (void)setUser:(id)arg1 rotation:(long long)arg2;
- (void)notifyRemoteUsersChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trtc;
- (void)setTrtc:(id)arg1;
- (id)users;
- (void)setUsers:(id)arg1;
- (void).cxx_destruct;
@end

