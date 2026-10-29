@interface WCSetScheduleCgi : WCBaseCgi
{
    id <WCSetScheduleCgiDelegate> _delegate; // +0x8
    WCScheduleItem * _handleItem; // +0x10
}
- (id)init;
- (void)addScheduleItem:(id)arg1;
- (void)addRemindOnceSchedule:(id)arg1 remindDate:(id)arg2;
- (void)modifyScheduleRemind:(id)arg1 remindDate:(id)arg2;
- (void)removeScheduleRemind:(id)arg1;
- (void)removeScheduleItem:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)handleItem;
- (void)setHandleItem:(id)arg1;
- (void).cxx_destruct;
@end

