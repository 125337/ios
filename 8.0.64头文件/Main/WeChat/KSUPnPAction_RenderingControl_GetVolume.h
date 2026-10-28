@interface KSUPnPAction_RenderingControl_GetVolume : KSUPnPAction
{
    long long _volume; // +0x8
}
- (id)actionName;
- (id)generateXMLForActionArguments;
- (BOOL)parseActionBodyFromXMLData:(id)arg1;
- (long long)volume;
@end
