@interface ChatBackgroundSettings : NSObject
{
    NSMutableArray * items; // +0x8
    NSMutableDictionary * backgroundPreferences; // +0x10
    long long currentCID; // +0x18
    long long lastSyncListDate; // +0x20
    BOOL hadCleanUnusedImage; // +0x28
}
- (id)initWithDefault;
- (void)addItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)getChatBackgroundItemByCID:(long long)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (id)getDefaultBackgroundItem;
- (unsigned long long)countOfItems;
- (id)keyPaths;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)backgroundPreferences;
- (void)setBackgroundPreferences:(id)arg1;
- (long long)currentCID;
- (void)setCurrentCID:(long long)arg1;
- (long long)lastSyncListDate;
- (void)setLastSyncListDate:(long long)arg1;
- (BOOL)hadCleanUnusedImage;
- (void)setHadCleanUnusedImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
