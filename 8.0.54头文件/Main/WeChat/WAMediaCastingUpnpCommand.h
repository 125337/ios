@interface WAMediaCastingUpnpCommand : NSObject
{
    unsigned long long _commandType; // +0x8
    NSString * _commandName; // +0x10
    NSString * _commandServiceType; // +0x18
    NSString * _XMLCommandName; // +0x20
}
- (id)initWithCommandType:(unsigned long long)arg1;
- (id)commandXMLString;
- (id)commandXMLBodyString;
- (unsigned long long)commandType;
- (void)setCommandType:(unsigned long long)arg1;
- (id)commandName;
- (void)setCommandName:(id)arg1;
- (id)commandServiceType;
- (void)setCommandServiceType:(id)arg1;
- (id)XMLCommandName;
- (void).cxx_destruct;
@end

