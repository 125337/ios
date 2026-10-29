@interface MttWkProzyInfo : NSObject
{
    BOOL _is64os; // +0x8
    NSString * _phoneID; // +0x10
    NSString * _segName; // +0x18
    NSString * _segtionName; // +0x20
    long long _offset; // +0x28
    NSString * _rootMemory; // +0x30
    long long _checkOffset; // +0x38
    NSString * _checkClass; // +0x40
    NSString * _checkMethod; // +0x48
}
+ (id)infoWithDictionary:(id)arg1;
+ (id)filePath;
+ (id)preloadFilePathWithName:(id)arg1;
+ (id)prozyInfoWithFilePath:(id)arg1;
+ (id)prozyInfoFromFile;
+ (id)preloadProzyInfosFromFile;
+ (void)savePreloadItems:(id)arg1;
+ (void)removePreloadItems;
- (id)toDictionary;
- (void)saveToFile:(id)arg1 completion:(id /* block */)arg2;
- (void)saveToFileWithCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)phoneID;
- (void)setPhoneID:(id)arg1;
- (BOOL)is64os;
- (void)setIs64os:(BOOL)arg1;
- (id)segName;
- (void)setSegName:(id)arg1;
- (id)segtionName;
- (void)setSegtionName:(id)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (id)rootMemory;
- (void)setRootMemory:(id)arg1;
- (long long)checkOffset;
- (void)setCheckOffset:(long long)arg1;
- (id)checkClass;
- (void)setCheckClass:(id)arg1;
- (id)checkMethod;
- (void)setCheckMethod:(id)arg1;
@end
