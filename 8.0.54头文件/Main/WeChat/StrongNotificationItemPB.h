@interface StrongNotificationItemPB : MMObject <PBCoding>
{
    BOOL _isCustomizationNotify; // +0x8
    unsigned int _uiStatue; // +0xc
    unsigned int _uiAction; // +0x10
    NSString * _nsForcePushId; // +0x18
    NSString * _nsUsrName; // +0x20
    double _nsCreateTime; // +0x28
    double _nsExpiredTime; // +0x30
    NSString * _nsDesc; // +0x38
    NSString * _nsUserIcon; // +0x40
    NSString * _nsExtinfo; // +0x48
    double _nsOperateTime; // +0x50
    NSString * _nsApproveIcon; // +0x58
    NSString * _nsNickName; // +0x60
    double _nsDisplayTime; // +0x68
    NSString * _nsSubject; // +0x70
    NSString * _notifyWording; // +0x78
    NSString * _noticeId; // +0x80
    NSString * _topicTitle; // +0x88
}
+ (void)PBArrayAdd_nsForcePushId;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsExpiredTime;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsUserIcon;
+ (void)PBArrayAdd_nsExtinfo;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_uiAction;
+ (void)PBArrayAdd_nsOperateTime;
+ (void)PBArrayAdd_nsApproveIcon;
+ (void)PBArrayAdd_nsNickName;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_noticeId;
+ (void)PBArrayAdd_topicTitle;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyToOther:(id)arg1;
- (id)description;
- (id)nsForcePushId;
- (void)setNsForcePushId:(id)arg1;
- (id)nsUsrName;
- (void)setNsUsrName:(id)arg1;
- (double)nsCreateTime;
- (void)setNsCreateTime:(double)arg1;
- (double)nsExpiredTime;
- (void)setNsExpiredTime:(double)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (id)nsUserIcon;
- (void)setNsUserIcon:(id)arg1;
- (id)nsExtinfo;
- (void)setNsExtinfo:(id)arg1;
- (unsigned int)uiStatue;
- (void)setUiStatue:(unsigned int)arg1;
- (unsigned int)uiAction;
- (void)setUiAction:(unsigned int)arg1;
- (double)nsOperateTime;
- (void)setNsOperateTime:(double)arg1;
- (id)nsApproveIcon;
- (void)setNsApproveIcon:(id)arg1;
- (id)nsNickName;
- (void)setNsNickName:(id)arg1;
- (double)nsDisplayTime;
- (void)setNsDisplayTime:(double)arg1;
- (id)nsSubject;
- (void)setNsSubject:(id)arg1;
- (id)notifyWording;
- (void)setNotifyWording:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (BOOL)isCustomizationNotify;
- (void)setIsCustomizationNotify:(BOOL)arg1;
- (void).cxx_destruct;
@end

