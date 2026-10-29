@interface WAMediaCastingUpnpCommand_SetVolume : WAMediaCastingUpnpCommand
{
    double _volume; // +0x8
}
+ (id)commandWithVolume:(double)arg1;
- (id)initWithVolume:(double)arg1;
- (id)commandXMLBodyString;
- (double)volume;
- (void)setVolume:(double)arg1;
@end

