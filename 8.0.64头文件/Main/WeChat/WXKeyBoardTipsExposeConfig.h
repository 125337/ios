@interface WXKeyBoardTipsExposeConfig : NSObject
{
    unsigned int _configMask; // +0x8
    unsigned int _exposeEnable; // +0xc
    unsigned int _clickToExitCount; // +0x10
    unsigned int _exposeDays; // +0x14
    unsigned int _exposeInterval; // +0x18
    unsigned int _exposeCount; // +0x1c
    unsigned int _version; // +0x20
    NSDictionary * _wording; // +0x28
    NSString * _swiperId; // +0x30
}
- (unsigned int)configMask;
- (void)setConfigMask:(unsigned int)arg1;
- (unsigned int)exposeEnable;
- (void)setExposeEnable:(unsigned int)arg1;
- (unsigned int)clickToExitCount;
- (void)setClickToExitCount:(unsigned int)arg1;
- (unsigned int)exposeDays;
- (void)setExposeDays:(unsigned int)arg1;
- (unsigned int)exposeInterval;
- (void)setExposeInterval:(unsigned int)arg1;
- (unsigned int)exposeCount;
- (void)setExposeCount:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)swiperId;
- (void)setSwiperId:(id)arg1;
- (void).cxx_destruct;
@end
