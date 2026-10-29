@interface MMTemplateMsgNotifyInfoSyncer : NSObject <PBMessageObserverDelegate>
{
    unsigned int _lastGetEventId; // +0x8
    unsigned int _lastSetEventId; // +0xc
    unsigned int _lastSetServiceNormalMsgEventId; // +0x10
    id <MMTemplateMsgNotifyInfoSyncerDelegate> _delegate; // +0x18
}
- (void)fetchNotifyInfo;
- (void)updateAccountGlobalAutoNotify:(BOOL)arg1;
- (void)updateServiceNormalMsgNotifyStatus:(BOOL)arg1 forUser:(id)arg2;
- (void)handleCgiResultWithActionType:(unsigned int)arg1 req:(id)arg2 resp:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)lastGetEventId;
- (void)setLastGetEventId:(unsigned int)arg1;
- (unsigned int)lastSetEventId;
- (void)setLastSetEventId:(unsigned int)arg1;
- (unsigned int)lastSetServiceNormalMsgEventId;
- (void)setLastSetServiceNormalMsgEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
