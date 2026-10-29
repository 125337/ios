@interface BrandServiceContactInfo : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSNumber * _isContact; // +0x18
    NSNumber * _isPlaceTop; // +0x20
}
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 isContact:(id)arg3 isPlaceTop:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)isContact;
- (void)setIsContact:(id)arg1;
- (id)isPlaceTop;
- (void)setIsPlaceTop:(id)arg1;
- (void).cxx_destruct;
@end

