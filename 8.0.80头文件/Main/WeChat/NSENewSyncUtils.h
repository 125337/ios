@interface NSENewSyncUtils : NSObject
+ (BOOL)verifySvrPubSignature:(id)arg1 svrPubKey:(id)arg2;
+ (id)getECDHDecrypyKey:(id)arg1;
+ (id)getNSENewSyncClientPubKeyBuff;
+ (id)generateNewEcdhPubKeyBuff;
+ (void)updateNewSyncPubKey:(id)arg1 pubKeySignature:(id)arg2;
+ (id)parseNewSyncResponseWithResult:(id)arg1;
+ (void)updateSyncKeyBuffer;
+ (id)checkSyncKeyBuffer:(id)arg1 newKeyBuf:(id)arg2;
+ (id)getAddMsgCmdItemsWithNSENewSyncResult:(id)arg1;
+ (BOOL)shouldSampleReport36769;
@end
