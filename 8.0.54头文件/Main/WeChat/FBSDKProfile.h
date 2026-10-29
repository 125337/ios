@interface FBSDKProfile : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _userID; // +0x8
    NSString * _firstName; // +0x10
    NSString * _middleName; // +0x18
    NSString * _lastName; // +0x20
    NSString * _name; // +0x28
    NSURL * _linkURL; // +0x30
    NSDate * _refreshDate; // +0x38
}
+ (void)cacheProfile:(id)arg1;
+ (id)fetchCachedProfile;
+ (id)currentProfile;
+ (void)setCurrentProfile:(id)arg1;
+ (void)enableUpdatesOnAccessTokenChange:(BOOL)arg1;
+ (void)loadCurrentProfileWithCompletion:(id /* block */)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)loadProfileWithToken:(id)arg1 completion:(id /* block */)arg2;
+ (void)observeChangeAccessTokenChange:(id)arg1;
- (id)initWithUserID:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 name:(id)arg5 linkURL:(id)arg6 refreshDate:(id)arg7;
- (id)imageURLForPictureMode:(unsigned long long)arg1 size:(CGSize)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToProfile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)userID;
- (id)firstName;
- (id)middleName;
- (id)lastName;
- (id)name;
- (id)linkURL;
- (id)refreshDate;
- (void).cxx_destruct;
@end

