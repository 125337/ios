@interface CBTStrongReminderBannerApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTStrongReminderBannerApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTStrongReminderBannerApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTStrongReminderBannerApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (id)getStrongReminders;
- (void)createStrongReminder:(id)arg1 data:(id)arg2;
- (void)dismissStrongReminder:(id)arg1;
- (id)clickStrongReminder:(id)arg1;
- (void)consumeStrongReminder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
