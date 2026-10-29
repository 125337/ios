@interface MMLiveGiftResourceDescriptor : NSObject
{
    NSString * _giftId; // +0x8
    NSString * _resourceId; // +0x10
    long long _resourceType; // +0x18
}
+ (id)descriptorForGiftId:(id)arg1 resourceType:(long long)arg2;
+ (id)descriptorForGiftId:(id)arg1 resourceId:(id)arg2 resourceType:(long long)arg3;
- (id)giftId;
- (void)setGiftId:(id)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (long long)resourceType;
- (void)setResourceType:(long long)arg1;
- (void).cxx_destruct;
@end
