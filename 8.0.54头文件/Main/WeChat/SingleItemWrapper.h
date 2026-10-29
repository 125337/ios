@interface SingleItemWrapper : NSObject
{
    NSMutableDictionary * keychainItemData; // +0x8
    NSMutableDictionary * genericPasswordQuery; // +0x10
}
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (void)dealloc;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)writeToKeychain;
- (id)keychainItemData;
- (void)setKeychainItemData:(id)arg1;
- (id)genericPasswordQuery;
- (void)setGenericPasswordQuery:(id)arg1;
@end

