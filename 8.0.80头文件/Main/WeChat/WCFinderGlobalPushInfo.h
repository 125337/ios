@interface WCFinderGlobalPushInfo : MMObject <PBCoding>
{
    BOOL _forceOpenFinderEntrance; // +0x8
    BOOL _receivedInBackground; // +0x9
    BOOL _hadPlaySoundAndAppVibration; // +0xa
    BOOL _hasBeenShown; // +0xb
    unsigned int _jumpTo; // +0xc
    unsigned int _returnTo; // +0x10
    unsigned int _actionType; // +0x14
    unsigned int _authIconType; // +0x18
    unsigned int _pushType; // +0x1c
    unsigned int _byPassType; // +0x20
    int _failReturnTo; // +0x24
    unsigned int _waitStreamTimeout; // +0x28
    unsigned int _alertDisplayTime; // +0x2c
    unsigned int _lastDeliverTime; // +0x30
    NSString * _objectID; // +0x38
    NSString * _title; // +0x40
    NSString * _body; // +0x48
    NSString * _imageURL; // +0x50
    NSData * _byPassInfo; // +0x58
    NSString * _nonceID; // +0x60
    NSString * _head; // +0x68
    NSString * _taskID; // +0x70
    unsigned long long _demotionFlag; // +0x78
    unsigned long long _ctrlFlag; // +0x80
    unsigned long long _pushLevel; // +0x88
    unsigned long long _discardType; // +0x90
    unsigned long long _triggerScene; // +0x98
    NSString * _jumpInfo; // +0xa0
    NSString * _reportExtInfo; // +0xa8
    NSString * _pushJumpParams; // +0xb0
}
+ (void)PBArrayAdd_objectID;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_body;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_jumpTo;
+ (void)PBArrayAdd_returnTo;
+ (void)PBArrayAdd_byPassInfo;
+ (void)PBArrayAdd_nonceID;
+ (void)PBArrayAdd_head;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_demotionFlag;
+ (void)PBArrayAdd_ctrlFlag;
+ (void)PBArrayAdd_pushType;
+ (void)PBArrayAdd_byPassType;
+ (void)PBArrayAdd_failReturnTo;
+ (void)PBArrayAdd_waitStreamTimeout;
+ (void)PBArrayAdd_pushLevel;
+ (void)PBArrayAdd_alertDisplayTime;
+ (void)PBArrayAdd_discardType;
+ (void)PBArrayAdd_forceOpenFinderEntrance;
+ (void)PBArrayAdd_receivedInBackground;
+ (void)PBArrayAdd_hadPlaySoundAndAppVibration;
+ (void)PBArrayAdd_triggerScene;
+ (void)PBArrayAdd_hasBeenShown;
+ (void)PBArrayAdd_jumpInfo;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_lastDeliverTime;
+ (void)PBArrayAdd_pushJumpParams;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (unsigned int)jumpTo;
- (void)setJumpTo:(unsigned int)arg1;
- (unsigned int)returnTo;
- (void)setReturnTo:(unsigned int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)authIconType;
- (void)setAuthIconType:(unsigned int)arg1;
- (unsigned long long)demotionFlag;
- (void)setDemotionFlag:(unsigned long long)arg1;
- (unsigned long long)ctrlFlag;
- (void)setCtrlFlag:(unsigned long long)arg1;
- (unsigned int)pushType;
- (void)setPushType:(unsigned int)arg1;
- (unsigned int)byPassType;
- (void)setByPassType:(unsigned int)arg1;
- (int)failReturnTo;
- (void)setFailReturnTo:(int)arg1;
- (unsigned int)waitStreamTimeout;
- (void)setWaitStreamTimeout:(unsigned int)arg1;
- (unsigned long long)pushLevel;
- (void)setPushLevel:(unsigned long long)arg1;
- (unsigned int)alertDisplayTime;
- (void)setAlertDisplayTime:(unsigned int)arg1;
- (unsigned long long)discardType;
- (void)setDiscardType:(unsigned long long)arg1;
- (BOOL)forceOpenFinderEntrance;
- (void)setForceOpenFinderEntrance:(BOOL)arg1;
- (BOOL)receivedInBackground;
- (void)setReceivedInBackground:(BOOL)arg1;
- (BOOL)hadPlaySoundAndAppVibration;
- (void)setHadPlaySoundAndAppVibration:(BOOL)arg1;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (BOOL)hasBeenShown;
- (void)setHasBeenShown:(BOOL)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (unsigned int)lastDeliverTime;
- (void)setLastDeliverTime:(unsigned int)arg1;
- (id)pushJumpParams;
- (void)setPushJumpParams:(id)arg1;
- (void).cxx_destruct;
@end
