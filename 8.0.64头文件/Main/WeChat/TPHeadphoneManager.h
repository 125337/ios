@interface TPHeadphoneManager : NSObject
{
    id <ITPHeadphoneManagerImpl> _headphoneManagerImpl; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)headphoneManagerImpl;
- (void)setHeadphoneManagerImpl:(id)arg1;
- (void).cxx_destruct;
@end
