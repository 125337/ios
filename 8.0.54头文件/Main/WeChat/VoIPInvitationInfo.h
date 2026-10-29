@interface VoIPInvitationInfo : NSObject
{
    BOOL _isVideo; // +0x8
    VoipMonoMsg * _monoMsg; // +0x10
    CContact * _contact; // +0x18
}
+ (id)infoWithMonoMsg:(id)arg1;
- (id)initWithMonoMsg:(id)arg1 contact:(id)arg2 isVideo:(BOOL)arg3;
- (id)newInfoWithIsVideo:(BOOL)arg1;
- (BOOL)isCancelletionWithMonoMsg:(id)arg1;
- (id)monoMsg;
- (void)setMonoMsg:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end

