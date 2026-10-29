@interface NotifyMsgDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _notifyMsgTable; // +0x10
}
- (id)init;
- (void)dealloc;
- (BOOL)initDataBase;
- (void)createTables;
- (BOOL)createNotifyMsgTable;
- (void)addNotifyWithXmlInfo:(id)arg1;
- (id)getXmlInfoWithTipsID:(id)arg1;
- (id)getMessageWrapWithTipID:(id)arg1;
- (id)getRequestNotifyList;
- (void)forbidMsgShowWithTipsID:(id)arg1;
- (BOOL)isForbidWithTipsID:(id)arg1;
- (void)updateLiveEndWithTipsID:(id)arg1;
- (BOOL)isMainFrameExposed:(id)arg1;
- (void)updateMainFrameExposedWithTipsID:(id)arg1;
- (BOOL)isMainFrameClicked:(id)arg1;
- (void)updateMainFrameClickedWithTipsID:(id)arg1;
- (void)updateAllToRead;
- (long long)getMsgSvrIDWithTipsID:(id)arg1;
- (id)getAllUnReadLiveEndNotifyInfo;
- (void)deleteNotifyInfoWithTipsID:(id)arg1;
- (void)cleanTimeoutMapping;
- (void)cleanDBXmlInfo;
- (void)cleanForbidMapping;
- (void)cleanTipsIDToMsgIDMapping;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)getDBPath;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)notifyMsgTable;
- (void)setNotifyMsgTable:(id)arg1;
- (void).cxx_destruct;
@end

