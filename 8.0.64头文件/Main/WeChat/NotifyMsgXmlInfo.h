@interface NotifyMsgXmlInfo : MMObject <WCTTableCoding>
{
    BOOL _bHadRead; // +0x8
    BOOL _bLiveEnd; // +0x9
    BOOL _bMainFrameExposed; // +0xa
    BOOL _bMainFrameClicked; // +0xb
    unsigned int _ctrlType; // +0xc
    unsigned int _deliveryTime; // +0x10
    unsigned int _createTime; // +0x14
    NSString * _tipsID; // +0x18
    unsigned long long _feedID; // +0x20
    unsigned long long _liveID; // +0x28
    long long _msgSvrID; // +0x30
    NSString * _byPassInfo; // +0x38
    NSString * _noticeID; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tipsID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tipsID;
+ (const void *)feedID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_feedID;
+ (const void *)liveID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_liveID;
+ (const void *)msgSvrID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgSvrID;
+ (const void *)bHadRead;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_bHadRead;
+ (const void *)bLiveEnd;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_bLiveEnd;
+ (const void *)ctrlType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_ctrlType;
+ (const void *)deliveryTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_deliveryTime;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)byPassInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_byPassInfo;
+ (const void *)noticeID;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_noticeID;
+ (const void *)bMainFrameExposed;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_bMainFrameExposed;
+ (const void *)bMainFrameClicked;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_bMainFrameClicked;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
- (id)initWithNotifyItem:(id)arg1 msgWrap:(id)arg2;
- (id)tipsID;
- (void)setTipsID:(id)arg1;
- (unsigned long long)feedID;
- (void)setFeedID:(unsigned long long)arg1;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (long long)msgSvrID;
- (void)setMsgSvrID:(long long)arg1;
- (BOOL)bHadRead;
- (void)setBHadRead:(BOOL)arg1;
- (BOOL)bLiveEnd;
- (void)setBLiveEnd:(BOOL)arg1;
- (unsigned int)ctrlType;
- (void)setCtrlType:(unsigned int)arg1;
- (unsigned int)deliveryTime;
- (void)setDeliveryTime:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)noticeID;
- (void)setNoticeID:(id)arg1;
- (BOOL)bMainFrameExposed;
- (void)setBMainFrameExposed:(BOOL)arg1;
- (BOOL)bMainFrameClicked;
- (void)setBMainFrameClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
