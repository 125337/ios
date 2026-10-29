@interface WAJSEventHandler_addPhoneCalendar : WAJSEventHandler_BaseEvent <EKEventEditViewDelegate>
{
    NSDictionary * _dic; // +0x8
    EKEventStore * _eventStore; // +0x10
    EKEvent * _event; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (id)showEventEdit;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)eventStore;
- (void)setEventStore:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end

