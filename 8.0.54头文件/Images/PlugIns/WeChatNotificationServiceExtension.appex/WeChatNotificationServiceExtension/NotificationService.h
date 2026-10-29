@interface NotificationService : UNNotificationServiceExtension
{
    id /* block */ _contentHandler; // +0x8
    UNMutableNotificationContent * _bestAttemptContent; // +0x10
}
- (void)initService;
- (void)dealloc;
- (void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(id /* block */)arg2;
- (void)serviceExtensionTimeWillExpire;
- (id)getImageFromURL:(id)arg1;
- (id)saveImage:(id)arg1 withFileName:(id)arg2 ofType:(id)arg3 inDirectory:(id)arg4;
- (unsigned long long)genCurrentTimeInMs;
- (id /* block */)contentHandler;
- (void)setContentHandler:(id /* block */)arg1;
- (id)bestAttemptContent;
- (void)setBestAttemptContent:(id)arg1;
- (void).cxx_destruct;
@end

