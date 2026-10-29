@interface SolitaireDataLoader : NSObject
+ (id)hashNameForString:(id)arg1;
+ (id)getSolitairePathWithChatName:(id)arg1;
+ (id)getSolitaireDBPath;
+ (id)GetSolitaireCacheDir;
+ (id)LoadSessionHandlerWithChatName:(id)arg1;
+ (BOOL)SyncSessionHandlerToLocalFile:(id)arg1;
@end

