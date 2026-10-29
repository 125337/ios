@interface MMFinderLiveConnectMicAudienceApplyInfo : NSObject
{
    BOOL _directAudioMic; // +0x8
    unsigned long long _micIndex; // +0x10
    NSData * _inviteMicBuffer; // +0x18
    NSData * _micInviteShareCardBuffer; // +0x20
    unsigned long long _connectMicScene; // +0x28
    unsigned long long _bottomButtonSourceForReport; // +0x30
}
- (BOOL)isFromAnchorLiveRoomInvite;
- (BOOL)isFromAnchorInvite;
- (unsigned long long)micIndex;
- (void)setMicIndex:(unsigned long long)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (id)micInviteShareCardBuffer;
- (void)setMicInviteShareCardBuffer:(id)arg1;
- (unsigned long long)connectMicScene;
- (void)setConnectMicScene:(unsigned long long)arg1;
- (BOOL)directAudioMic;
- (void)setDirectAudioMic:(BOOL)arg1;
- (unsigned long long)bottomButtonSourceForReport;
- (void)setBottomButtonSourceForReport:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
