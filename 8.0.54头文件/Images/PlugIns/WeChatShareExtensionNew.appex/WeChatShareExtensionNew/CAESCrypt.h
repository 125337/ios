@interface CAESCrypt : NSObject
+ (id)AESEncryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)AESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)AESGCMDecryptWithKey:(id)arg1 Data:(id)arg2;
- (id)init;
@end

