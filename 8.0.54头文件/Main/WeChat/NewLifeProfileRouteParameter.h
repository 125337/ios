@interface NewLifeProfileRouteParameter : NSObject
{
    BOOL _author; // +0x8
    BOOL _locateToNewLifeTab; // +0x9
    int _scene; // +0xc
    unsigned int _enterType; // +0x10
    NSString * _finderUsername; // +0x18
    WCFinderPushProfileParams * _finderProfileParams; // +0x20
    id /* block */ _authorRouteCompletion; // +0x28
    WCFinderContact * _authorContact; // +0x30
}
- (id)init;
- (void)setAuthor:(BOOL)arg1;
- (void)setFinderUsername:(id)arg1;
- (void)updateAuthor;
- (void)updateFinderUsername:(id)arg1 enableAuthorForSelf:(BOOL)arg2;
- (void)updateScene:(unsigned long long)arg1;
- (void)setLocateToNewLifeTab:(BOOL)arg1;
- (BOOL)isValid;
- (id)description;
- (id)finderUsername;
- (id)finderProfileParams;
- (void)setFinderProfileParams:(id)arg1;
- (BOOL)isAuthor;
- (id /* block */)authorRouteCompletion;
- (void)setAuthorRouteCompletion:(id /* block */)arg1;
- (BOOL)locateToNewLifeTab;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id)authorContact;
- (void)setAuthorContact:(id)arg1;
- (void).cxx_destruct;
@end

