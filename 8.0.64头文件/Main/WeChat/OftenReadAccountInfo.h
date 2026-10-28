@interface OftenReadAccountInfo : NSObject
{
    ContactInfo * _contactInfo; // +0x8
    NSNumber * _hasUnreadDot; // +0x10
    NSNumber * _lastMsgTime; // +0x18
}
+ (id)makeWithContactInfo:(id)arg1 hasUnreadDot:(id)arg2 lastMsgTime:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)contactInfo;
- (void)setContactInfo:(id)arg1;
- (id)hasUnreadDot;
- (void)setHasUnreadDot:(id)arg1;
- (id)lastMsgTime;
- (void)setLastMsgTime:(id)arg1;
- (void).cxx_destruct;
@end
