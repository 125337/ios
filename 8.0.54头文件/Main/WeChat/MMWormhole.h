@interface MMWormhole : NSObject <MMWormholeTransitingDelegate>
{
    id <MMWormholeTransiting> _wormholeMessenger; // +0x8
    NSMutableDictionary * _listenerBlocks; // +0x10
}
- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (void)dealloc;
- (void)sendNotificationForMessageWithIdentifier:(id)arg1;
- (void)registerForNotificationsWithIdentifier:(id)arg1;
- (void)unregisterForNotificationsWithIdentifier:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (id)listenerBlockForIdentifier:(id)arg1;
- (void)notifyListenerForMessageWithIdentifier:(id)arg1 message:(id)arg2;
- (void)passMessageObject:(id)arg1 identifier:(id)arg2;
- (id)messageWithIdentifier:(id)arg1;
- (void)clearMessageContentsForIdentifier:(id)arg1;
- (void)listenForMessageWithIdentifier:(id)arg1 listener:(id /* block */)arg2;
- (void)stopListeningForMessageWithIdentifier:(id)arg1;
- (id)wormholeMessenger;
- (void)setWormholeMessenger:(id)arg1;
- (id)listenerBlocks;
- (void)setListenerBlocks:(id)arg1;
- (void).cxx_destruct;
@end

