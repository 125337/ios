@interface KSUPnPAction_RenderingControl_SetVolume : KSUPnPAction
{
    long long _volume; // +0x8
}
- (id)actionName;
- (id)generateXMLForActionArguments;
- (long long)volume;
- (void)setVolume:(long long)arg1;
@end

