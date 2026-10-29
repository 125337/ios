@interface SafeSingleItemWrapper : NSObject
{
    SingleItemWrapper * wapper; // +0x8
    NSMutableDictionary * wapperDict; // +0x10
    NSString * filePath; // +0x18
}
- (id)dataSafeFilePathWithName:(id)arg1;
- (id)initSafeWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (BOOL)setFileStoreObject:(id)arg1 forKey:(id)arg2;
- (id)fileStoreForKey:(id)arg1;
- (id)keyChainStoreForKey:(id)arg1;
- (void)resetSafeKeychainItem;
- (void)dealloc;
@end

