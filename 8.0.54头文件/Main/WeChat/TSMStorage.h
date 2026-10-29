@interface TSMStorage : NSObject
+ (BOOL)initWithPath:(id)arg1 appid:(id)arg2 userid:(id)arg3 error:(id *)arg4;
+ (BOOL)generateSM4Key:(id)arg1 error:(id *)arg2;
+ (BOOL)importSM4Key:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)exportSM4Key:(id)arg1 error:(id *)arg2;
+ (BOOL)updateSM4Key:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteSM4Key:(id)arg1 error:(id *)arg2;
+ (BOOL)checkSM4Key:(id)arg1 error:(id *)arg2;
+ (BOOL)generateSM2KeyPair:(id)arg1 error:(id *)arg2;
+ (BOOL)importSM2PubKey:(id)arg1 pubkey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (id)exportSM2PubKey:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (BOOL)updateSM2PubKey:(id)arg1 pubkey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (BOOL)deleteSM2PubKey:(id)arg1 error:(id *)arg2;
+ (BOOL)checkSM2PubKey:(id)arg1 error:(id *)arg2;
+ (BOOL)importSM2PriKey:(id)arg1 prikey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (id)exportSM2PriKey:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (BOOL)updateSM2PriKey:(id)arg1 prikey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (BOOL)deleteSM2PriKey:(id)arg1 error:(id *)arg2;
+ (BOOL)checkSM2PriKey:(id)arg1 error:(id *)arg2;
@end

