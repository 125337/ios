@interface FBSDKAccessToken : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSString * _appID; // +0x8
    NSDate * _dataAccessExpirationDate; // +0x10
    NSSet * _declinedPermissions; // +0x18
    NSSet * _expiredPermissions; // +0x20
    NSDate * _expirationDate; // +0x28
    NSSet * _permissions; // +0x30
    NSDate * _refreshDate; // +0x38
    NSString * _tokenString; // +0x40
    NSString * _userID; // +0x48
}
+ (id)currentAccessToken;
+ (void)setCurrentAccessToken:(id)arg1;
+ (BOOL)isCurrentAccessTokenActive;
+ (void)refreshCurrentAccessToken:(id /* block */)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithTokenString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expiredPermissions:(id)arg4 appID:(id)arg5 userID:(id)arg6 expirationDate:(id)arg7 refreshDate:(id)arg8 dataAccessExpirationDate:(id)arg9;
- (BOOL)hasGranted:(id)arg1;
- (BOOL)isDataAccessExpired;
- (BOOL)isExpired;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAccessToken:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)appID;
- (id)dataAccessExpirationDate;
- (id)declinedPermissions;
- (id)expiredPermissions;
- (id)expirationDate;
- (id)permissions;
- (id)refreshDate;
- (id)tokenString;
- (id)userID;
- (void).cxx_destruct;
@end

