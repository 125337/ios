@interface WAAppTaskRunningEvent_Rotation : WAAppTaskRunningEvent_Base
{
    long long _orientation; // +0x8
}
- (unsigned long long)eventType;
- (id)description;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
@end
