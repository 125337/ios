@interface WCCardPkgMsgActivity : NSObject
{
    unsigned int activityType; // +0x8
    unsigned int activityEndTime; // +0xc
    NSString * activityText; // +0x10
    NSString * activityUrl; // +0x18
}
- (BOOL)IsActivityValid;
- (unsigned int)activityType;
- (void)setActivityType:(unsigned int)arg1;
- (id)activityText;
- (void)setActivityText:(id)arg1;
- (id)activityUrl;
- (void)setActivityUrl:(id)arg1;
- (unsigned int)activityEndTime;
- (void)setActivityEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

