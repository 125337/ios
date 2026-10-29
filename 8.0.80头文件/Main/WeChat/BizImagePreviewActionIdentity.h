@interface BizImagePreviewActionIdentity : NSObject
{
    NSString * _headImg; // +0x8
    NSString * _nickName; // +0x10
    NSNumber * _identityType; // +0x18
    NSString * _identityName; // +0x20
}
+ (id)makeWithHeadImg:(id)arg1 nickName:(id)arg2 identityType:(id)arg3 identityName:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)headImg;
- (void)setHeadImg:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)identityType;
- (void)setIdentityType:(id)arg1;
- (id)identityName;
- (void)setIdentityName:(id)arg1;
- (void).cxx_destruct;
@end
