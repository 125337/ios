@interface WAMediaCastingUpnpCommand_Seek : WAMediaCastingUpnpCommand
{
    double _position; // +0x8
}
+ (id)commandWithPosition:(double)arg1;
- (id)initWithPosition:(double)arg1;
- (id)toTimeString:(double)arg1;
- (id)commandXMLBodyString;
- (double)position;
- (void)setPosition:(double)arg1;
@end
