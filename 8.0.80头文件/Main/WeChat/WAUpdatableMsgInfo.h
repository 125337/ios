@interface WAUpdatableMsgInfo : NSObject <WCTTableCoding>
{
    BOOL _shouldUseUpdatableMsg; // +0x8
    BOOL _shouldUseChattoolMsg; // +0x9
    BOOL _isSystemPushFinished; // +0xa
    int _updatableContentUpdateInterval; // +0xc
    unsigned int _lastUpdateTime; // +0x10
    unsigned int _updatableMsgType; // +0x14
    NSString * _shareKey; // +0x18
    NSString * _appId; // +0x20
    unsigned long long _subscriptionEntryState; // +0x28
    NSString * _subscriptionEntryContent; // +0x30
    NSString * _subscriptionEntryButtonWording; // +0x38
    NSString * _subscriptionConfirmedContent; // +0x40
    NSString * _expiredSubscribeWording; // +0x48
    NSString * _updatableContentText; // +0x50
    NSString * _updatableContentColor; // +0x58
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)shareKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_shareKey;
+ (const void *)shouldUseUpdatableMsg;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_shouldUseUpdatableMsg;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appId;
+ (const void *)subscriptionEntryState;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_subscriptionEntryState;
+ (const void *)isSystemPushFinished;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_isSystemPushFinished;
+ (const void *)subscriptionEntryContent;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_subscriptionEntryContent;
+ (const void *)subscriptionEntryButtonWording;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_subscriptionEntryButtonWording;
+ (const void *)subscriptionConfirmedContent;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_subscriptionConfirmedContent;
+ (const void *)updatableContentText;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_updatableContentText;
+ (const void *)updatableContentColor;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_updatableContentColor;
+ (const void *)updatableContentUpdateInterval;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_updatableContentUpdateInterval;
+ (const void *)lastUpdateTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_lastUpdateTime;
+ (const void *)expiredSubscribeWording;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_expiredSubscribeWording;
+ (const void *)updatableMsgType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_updatableMsgType;
+ (const void *)shouldUseChattoolMsg;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_shouldUseChattoolMsg;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)infoFromResp:(id)arg1;
- (id)description;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)shouldUpdateNow;
- (BOOL)isUpdateAllowed;
- (unsigned int)nextTimeToUpdate;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (BOOL)shouldUseUpdatableMsg;
- (void)setShouldUseUpdatableMsg:(BOOL)arg1;
- (BOOL)shouldUseChattoolMsg;
- (void)setShouldUseChattoolMsg:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)subscriptionEntryState;
- (void)setSubscriptionEntryState:(unsigned long long)arg1;
- (BOOL)isSystemPushFinished;
- (void)setIsSystemPushFinished:(BOOL)arg1;
- (id)subscriptionEntryContent;
- (void)setSubscriptionEntryContent:(id)arg1;
- (id)subscriptionEntryButtonWording;
- (void)setSubscriptionEntryButtonWording:(id)arg1;
- (id)subscriptionConfirmedContent;
- (void)setSubscriptionConfirmedContent:(id)arg1;
- (id)expiredSubscribeWording;
- (void)setExpiredSubscribeWording:(id)arg1;
- (id)updatableContentText;
- (void)setUpdatableContentText:(id)arg1;
- (id)updatableContentColor;
- (void)setUpdatableContentColor:(id)arg1;
- (int)updatableContentUpdateInterval;
- (void)setUpdatableContentUpdateInterval:(int)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)updatableMsgType;
- (void)setUpdatableMsgType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
