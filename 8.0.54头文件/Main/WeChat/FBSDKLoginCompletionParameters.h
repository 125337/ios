@interface FBSDKLoginCompletionParameters : NSObject
{
    NSString * _accessTokenString; // +0x8
    NSSet * _permissions; // +0x10
    NSSet * _declinedPermissions; // +0x18
    NSSet * _expiredPermissions; // +0x20
    NSString * _appID; // +0x28
    NSString * _userID; // +0x30
    NSError * _error; // +0x38
    NSDate * _expirationDate; // +0x40
    NSDate * _dataAccessExpirationDate; // +0x48
    NSString * _challenge; // +0x50
}
- (id)init;
- (id)initWithError:(id)arg1;
- (id)accessTokenString;
- (void)setAccessTokenString:(id)arg1;
- (id)permissions;
- (void)setPermissions:(id)arg1;
- (id)declinedPermissions;
- (void)setDeclinedPermissions:(id)arg1;
- (id)expiredPermissions;
- (void)setExpiredPermissions:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)userID;
- (void)setUserID:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (id)dataAccessExpirationDate;
- (void)setDataAccessExpirationDate:(id)arg1;
- (id)challenge;
- (void)setChallenge:(id)arg1;
- (void).cxx_destruct;
@end

