@interface BrandNotificationPriorityItem : NSObject
{
    BOOL _priorityShowSwitch; // +0x8
    unsigned int _priorityShowExposureTimeInMs; // +0xc
    unsigned int _priorityShowExposureCount; // +0x10
    unsigned int _priorityShowWithinUnreadCount; // +0x14
}
- (BOOL)checkShouldShowPriorityBrandNotificationMsgWithExposureTimeInMs:(unsigned int)arg1 andExposureCount:(unsigned int)arg2 andUnreadCount:(unsigned int)arg3;
- (BOOL)priorityShowSwitch;
- (void)setPriorityShowSwitch:(BOOL)arg1;
- (unsigned int)priorityShowExposureTimeInMs;
- (void)setPriorityShowExposureTimeInMs:(unsigned int)arg1;
- (unsigned int)priorityShowExposureCount;
- (void)setPriorityShowExposureCount:(unsigned int)arg1;
- (unsigned int)priorityShowWithinUnreadCount;
- (void)setPriorityShowWithinUnreadCount:(unsigned int)arg1;
@end

