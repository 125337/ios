@interface BrandProfileOutboxAndMsgProvider : NSObject
{
    BOOL _listening; // +0x8
    BOOL _profileMsgListening; // +0x9
    int _serviceProxyType; // +0xc
    NSMapTable * _observers; // +0x10
    NSMapTable * _profileMsgObservers; // +0x18
    NSString * _outboxEventKey; // +0x20
    NSString * _profileMsgEventKey; // +0x28
}
- (id)initWithUsername:(id)arg1 serviceProxyType:(int)arg2;
- (void)addObserver:(id)arg1 callback:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)addProfileMsgObserver:(id)arg1 callback:(id /* block */)arg2;
- (void)removeProfileMsgObserver:(id)arg1;
- (void)tryCleanAllProfileMsgObserver;
- (void)fetchCache:(id /* block */)arg1;
- (void)startListeningIfNeeded;
- (void)stopListeningIfNeeded;
- (void)notifyObservers:(id)arg1;
- (void)startProfileMsgListeningIfNeeded;
- (void)stopProfileMsgListeningIfNeeded;
- (void)notifyProfileMsgObservers:(id)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)profileMsgObservers;
- (void)setProfileMsgObservers:(id)arg1;
- (BOOL)listening;
- (void)setListening:(BOOL)arg1;
- (BOOL)profileMsgListening;
- (void)setProfileMsgListening:(BOOL)arg1;
- (id)outboxEventKey;
- (void)setOutboxEventKey:(id)arg1;
- (id)profileMsgEventKey;
- (void)setProfileMsgEventKey:(id)arg1;
- (int)serviceProxyType;
- (void)setServiceProxyType:(int)arg1;
- (void).cxx_destruct;
@end
