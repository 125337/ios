@interface BrandResortConfig : NSObject
{
    BOOL _useNewPlan; // +0x8
    BOOL _needCheckUnReadCount; // +0x9
    BOOL _checkGroupIdChange; // +0xa
    BOOL _retrieveInvalidExposedMsg; // +0xb
    unsigned int _reqIntervalSec; // +0xc
    unsigned int _beginTime; // +0x10
    unsigned int _unexposedThreshold; // +0x14
    unsigned int _unreadThreshold; // +0x18
    unsigned int _reqMsgCountLimit; // +0x1c
    unsigned int _extraRecMsgCount; // +0x20
}
- (id)description;
- (BOOL)useNewPlan;
- (void)setUseNewPlan:(BOOL)arg1;
- (BOOL)needCheckUnReadCount;
- (void)setNeedCheckUnReadCount:(BOOL)arg1;
- (unsigned int)reqIntervalSec;
- (void)setReqIntervalSec:(unsigned int)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)unexposedThreshold;
- (void)setUnexposedThreshold:(unsigned int)arg1;
- (unsigned int)unreadThreshold;
- (void)setUnreadThreshold:(unsigned int)arg1;
- (unsigned int)reqMsgCountLimit;
- (void)setReqMsgCountLimit:(unsigned int)arg1;
- (unsigned int)extraRecMsgCount;
- (void)setExtraRecMsgCount:(unsigned int)arg1;
- (BOOL)checkGroupIdChange;
- (void)setCheckGroupIdChange:(BOOL)arg1;
- (BOOL)retrieveInvalidExposedMsg;
- (void)setRetrieveInvalidExposedMsg:(BOOL)arg1;
@end
