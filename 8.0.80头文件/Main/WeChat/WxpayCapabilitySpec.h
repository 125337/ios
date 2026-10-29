@interface WxpayCapabilitySpec : NSObject
{
    NSDictionary * _methodsByName; // +0x8
    NSString * _kind; // +0x10
    NSString * _name; // +0x18
    NSArray * _methods; // +0x20
    NSSet * _appIds; // +0x28
    NSDictionary * _attributes; // +0x30
}
+ (id)specWithKind:(id)arg1 name:(id)arg2 methods:(id)arg3;
+ (id)specWithKind:(id)arg1 name:(id)arg2 methods:(id)arg3 appIds:(id)arg4 attributes:(id)arg5;
- (BOOL)resolvesUnlistedNames;
- (BOOL)declaresPlaceholder;
- (id)initInternal;
- (id)methodNamed:(id)arg1;
- (id)description;
- (id)kind;
- (id)name;
- (id)methods;
- (id)appIds;
- (id)attributes;
- (void).cxx_destruct;
@end
