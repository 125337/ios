@interface WNContentSaver : MMObject
+ (id)saveWithContext:(id)arg1;
+ (void)saveHTML:(id)arg1 toFavItem:(id)arg2;
+ (id)tryRemoveChatVoiceInFavItem:(id)arg1;
+ (id)getContextOfItem:(id)arg1;
+ (void)clearCacheContent;
+ (void)saveTempWeNoteItemInContext:(id)arg1;
+ (void)tryOpenCacheItem:(id)arg1 handler:(id /* block */)arg2;
+ (id)exportStringToTextData:(id)arg1;
+ (id)exportHTMLStringToData:(id)arg1;
@end

