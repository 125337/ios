@interface WCFinderProfileStackItem : NSObject
{
    BOOL _isAuthor; // +0x8
    NSString * _profileKey; // +0x10
    WCFinderStreamProfileViewController * _vc; // +0x18
    NSString * _username; // +0x20
}
- (id)profileKey;
- (void)setProfileKey:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (void).cxx_destruct;
@end
