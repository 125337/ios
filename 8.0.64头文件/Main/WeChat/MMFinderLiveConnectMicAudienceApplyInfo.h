@interface MMFinderLiveConnectMicAudienceApplyInfo : NSObject
{
    BOOL _isInvitedByAnchor; // +0x8
    unsigned long long _micIndex; // +0x10
    NSData * _inviteMicBuffer; // +0x18
}
- (unsigned long long)micIndex;
- (void)setMicIndex:(unsigned long long)arg1;
- (BOOL)isInvitedByAnchor;
- (void)setIsInvitedByAnchor:(BOOL)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (void).cxx_destruct;
@end
