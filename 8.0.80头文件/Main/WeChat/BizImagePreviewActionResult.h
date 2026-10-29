@interface BizImagePreviewActionResult : NSObject
{
    NSNumber * _curIdentityType; // +0x8
    NSString * _curIdentityName; // +0x10
    NSNumber * _followStatus; // +0x18
    NSArray * _actions; // +0x20
}
+ (id)makeWithCurIdentityType:(id)arg1 curIdentityName:(id)arg2 followStatus:(id)arg3 actions:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)curIdentityType;
- (void)setCurIdentityType:(id)arg1;
- (id)curIdentityName;
- (void)setCurIdentityName:(id)arg1;
- (id)followStatus;
- (void)setFollowStatus:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (void).cxx_destruct;
@end
