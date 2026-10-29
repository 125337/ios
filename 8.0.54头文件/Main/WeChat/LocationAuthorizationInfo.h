@interface LocationAuthorizationInfo : NSObject
{
    int _authorizationStatus; // +0x8
}
- (int)authorizationStatus;
- (void)setAuthorizationStatus:(int)arg1;
@end

