@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray * _mutableEvents; // +0x8
    unsigned long long _numSkipped; // +0x10
    NSString * _tokenString; // +0x18
    NSString * _appID; // +0x20
}
+ (BOOL)supportsSecureCoding;
- (id)initWithToken:(id)arg1 appID:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (void)addEventsFromAppEventState:(id)arg1;
- (void)addEvent:(id)arg1 isImplicit:(BOOL)arg2;
- (id)extractReceiptData;
- (BOOL)areAllEventsImplicit;
- (BOOL)isCompatibleWithAppEventsState:(id)arg1;
- (BOOL)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
- (id)JSONStringForEvents:(BOOL)arg1;
- (unsigned long long)numSkipped;
- (id)tokenString;
- (id)appID;
- (void).cxx_destruct;
@end

