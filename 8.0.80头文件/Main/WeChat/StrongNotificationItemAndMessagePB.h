@interface StrongNotificationItemAndMessagePB : MMObject <PBCoding>
{
    BOOL _hideStrongNotificationTop; // +0x8
    BOOL _ignorePlaySoundAndAppVibration; // +0x9
    BOOL _ignoreCache; // +0xa
    BOOL _isCustomizationNotify; // +0xb
    unsigned int _uiStatue; // +0xc
    unsigned int _uiMesLocalID; // +0x10
    NSString * _nsForcePushId; // +0x18
    NSString * _nsUsrName; // +0x20
    NSString * _nsDescription; // +0x28
    NSString * _nsSubject; // +0x30
    StrongNotificationItemPB * _nsStrongNotificationItem; // +0x38
    NSString * _nsFeedID; // +0x40
    double _nsCreateTime; // +0x48
    WCFinderGlobalPushInfo * _nsFinderGlobalPushInfo; // +0x50
    MMSessionInfo * _sessionInfo; // +0x58
    NSString * _notifyWording; // +0x60
    NSString * _jumpUrl; // +0x68
}
+ (void)PBArrayAdd_nsForcePushId;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsDescription;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_nsStrongNotificationItem;
+ (void)PBArrayAdd_nsFeedID;
+ (void)PBArrayAdd_uiMesLocalID;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsFinderGlobalPushInfo;
+ (void)PBArrayAdd_hideStrongNotificationTop;
+ (void)PBArrayAdd_ignorePlaySoundAndAppVibration;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)nsForcePushId;
- (void)setNsForcePushId:(id)arg1;
- (id)nsUsrName;
- (void)setNsUsrName:(id)arg1;
- (id)nsDescription;
- (void)setNsDescription:(id)arg1;
- (id)nsSubject;
- (void)setNsSubject:(id)arg1;
- (unsigned int)uiStatue;
- (void)setUiStatue:(unsigned int)arg1;
- (id)nsStrongNotificationItem;
- (void)setNsStrongNotificationItem:(id)arg1;
- (id)nsFeedID;
- (void)setNsFeedID:(id)arg1;
- (unsigned int)uiMesLocalID;
- (void)setUiMesLocalID:(unsigned int)arg1;
- (double)nsCreateTime;
- (void)setNsCreateTime:(double)arg1;
- (id)nsFinderGlobalPushInfo;
- (void)setNsFinderGlobalPushInfo:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (BOOL)hideStrongNotificationTop;
- (void)setHideStrongNotificationTop:(BOOL)arg1;
- (BOOL)ignorePlaySoundAndAppVibration;
- (void)setIgnorePlaySoundAndAppVibration:(BOOL)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (id)notifyWording;
- (void)setNotifyWording:(id)arg1;
- (BOOL)isCustomizationNotify;
- (void)setIsCustomizationNotify:(BOOL)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
