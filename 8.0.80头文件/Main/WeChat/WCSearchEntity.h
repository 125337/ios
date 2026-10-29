@interface WCSearchEntity : MMObject
{
    NSString * _sessionID; // +0x8
    unsigned long long _scene; // +0x10
}
- (id)init;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
