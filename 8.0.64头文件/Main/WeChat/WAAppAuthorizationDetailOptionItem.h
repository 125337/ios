@interface WAAppAuthorizationDetailOptionItem : MMObject
{
    unsigned int _authState; // +0x8
    NSString * _authStateString; // +0x10
}
- (unsigned int)authState;
- (void)setAuthState:(unsigned int)arg1;
- (id)authStateString;
- (void)setAuthStateString:(id)arg1;
- (void).cxx_destruct;
@end
