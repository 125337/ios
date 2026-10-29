@interface TSPacketHumanResponse : TSPacketResponse
{
    float _machineProbability; // +0x18
}
- (float)machineProbability;
- (void)setMachineProbability:(float)arg1;
@end

