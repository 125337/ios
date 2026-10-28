@interface PBSessionInfo : NSObject <PBCoding>
{
    BOOL _showUnreadCountAsRedDot; // +0x8
    BOOL _newInvApprove; // +0x9
    BOOL _bNeedContactVerify; // +0xa
    BOOL _bBrandNotifyNoPrefixName; // +0xb
    BOOL _bSpecialAttention; // +0xc
    BOOL _bGroupUndoneFlag; // +0xd
    unsigned int _atMeCount; // +0x10
    unsigned int _greenLabelType; // +0x14
    unsigned int _newInvCount; // +0x18
    unsigned int _transferCount; // +0x1c
    unsigned int _aaCount; // +0x20
    unsigned int _exclusiveHbCount; // +0x24
    unsigned int _newNotifyMsgCount; // +0x28
    unsigned int _brandNotifyType; // +0x2c
    unsigned int _ecsUnhandledGiftCount; // +0x30
    unsigned int _ecsGiftRedLabelType; // +0x34
    unsigned int _ecsLastHandleGiftTime; // +0x38
    PBCContact * _contact; // +0x40
    PBCMessageWrap * _message; // +0x48
    NSString * _updatableMsgDigest; // +0x50
    NSString * _brandNotifyPrefixName; // +0x58
    unsigned long long _brandAffMsgId; // +0x60
    long long _referMsgSvrId; // +0x68
    NSString * _referPartXML; // +0x70
}
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_atMeCount;
+ (void)PBArrayAdd_showUnreadCountAsRedDot;
+ (void)PBArrayAdd_greenLabelType;
+ (void)PBArrayAdd_newInvCount;
+ (void)PBArrayAdd_newInvApprove;
+ (void)PBArrayAdd_bNeedContactVerify;
+ (void)PBArrayAdd_transferCount;
+ (void)PBArrayAdd_aaCount;
+ (void)PBArrayAdd_newNotifyMsgCount;
+ (void)PBArrayAdd_brandNotifyType;
+ (void)PBArrayAdd_brandNotifyPrefixName;
+ (void)PBArrayAdd_bBrandNotifyNoPrefixName;
+ (void)PBArrayAdd_bGroupUndoneFlag;
+ (void)PBArrayAdd_exclusiveHbCount;
+ (void)PBArrayAdd_bSpecialAttention;
+ (void)PBArrayAdd_updatableMsgDigest;
+ (void)PBArrayAdd_brandAffMsgId;
+ (void)PBArrayAdd_referMsgSvrId;
+ (void)PBArrayAdd_referPartXML;
+ (void)PBArrayAdd_ecsUnhandledGiftCount;
+ (void)PBArrayAdd_ecsGiftRedLabelType;
+ (void)PBArrayAdd_ecsLastHandleGiftTime;
+ (void)initialize;
- (id)toSessionInfo;
- (void)setFromSessionInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (unsigned int)atMeCount;
- (void)setAtMeCount:(unsigned int)arg1;
- (BOOL)showUnreadCountAsRedDot;
- (void)setShowUnreadCountAsRedDot:(BOOL)arg1;
- (unsigned int)greenLabelType;
- (void)setGreenLabelType:(unsigned int)arg1;
- (unsigned int)newInvCount;
- (void)setNewInvCount:(unsigned int)arg1;
- (BOOL)newInvApprove;
- (void)setNewInvApprove:(BOOL)arg1;
- (BOOL)bNeedContactVerify;
- (void)setBNeedContactVerify:(BOOL)arg1;
- (unsigned int)transferCount;
- (void)setTransferCount:(unsigned int)arg1;
- (unsigned int)aaCount;
- (void)setAaCount:(unsigned int)arg1;
- (unsigned int)exclusiveHbCount;
- (void)setExclusiveHbCount:(unsigned int)arg1;
- (id)updatableMsgDigest;
- (void)setUpdatableMsgDigest:(id)arg1;
- (unsigned int)newNotifyMsgCount;
- (void)setNewNotifyMsgCount:(unsigned int)arg1;
- (unsigned int)brandNotifyType;
- (void)setBrandNotifyType:(unsigned int)arg1;
- (id)brandNotifyPrefixName;
- (void)setBrandNotifyPrefixName:(id)arg1;
- (BOOL)bBrandNotifyNoPrefixName;
- (void)setBBrandNotifyNoPrefixName:(BOOL)arg1;
- (BOOL)bSpecialAttention;
- (void)setBSpecialAttention:(BOOL)arg1;
- (BOOL)bGroupUndoneFlag;
- (void)setBGroupUndoneFlag:(BOOL)arg1;
- (unsigned long long)brandAffMsgId;
- (void)setBrandAffMsgId:(unsigned long long)arg1;
- (long long)referMsgSvrId;
- (void)setReferMsgSvrId:(long long)arg1;
- (id)referPartXML;
- (void)setReferPartXML:(id)arg1;
- (unsigned int)ecsUnhandledGiftCount;
- (void)setEcsUnhandledGiftCount:(unsigned int)arg1;
- (unsigned int)ecsGiftRedLabelType;
- (void)setEcsGiftRedLabelType:(unsigned int)arg1;
- (unsigned int)ecsLastHandleGiftTime;
- (void)setEcsLastHandleGiftTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
