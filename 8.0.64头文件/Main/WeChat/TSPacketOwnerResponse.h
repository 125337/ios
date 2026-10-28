@interface TSPacketOwnerResponse : TSPacketResponse
{
    BOOL _isOwner; // +0x18
    float _ownerProbability; // +0x1c
}
- (float)ownerProbability;
- (void)setOwnerProbability:(float)arg1;
- (BOOL)isOwner;
- (void)setIsOwner:(BOOL)arg1;
@end
