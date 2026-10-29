@interface ContactsImportLogic : NSObject <PBMessageObserverDelegate>
{
    BOOL _hasBindedOldWechatAccount; // +0x8
    BOOL _hasFetchedContactList; // +0x9
    unsigned int _clientSequence; // +0xc
    id <ContactsImportLogicDelegate> _delegate; // +0x10
    NSString * _qrCode; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _oldUsername; // +0x28
    NSString * _oldAlias; // +0x30
    OrderedDictionary * _encryptedUsernameToOldAccountContactMap; // +0x38
}
+ (void)fixContactStatus:(id)arg1;
+ (id)decodeOrCreateEncryptedUsernameToOldAccountContactMapFromFilePath:(id)arg1 maxClientSequence:(unsigned int *)arg2;
+ (void)encodeEncryptedUsernameToOldAccountContactMap:(id)arg1 toFilePath:(id)arg2;
+ (id)pathForOldAccountContactsCacheForUsername:(id)arg1;
- (id)initWithQRCode:(id)arg1;
- (void)bindOldWechatAccount;
- (void)onGetBindOldWechatAccountCgiResponse:(id)arg1;
- (void)callBindOldAccountSucceedDelegate;
- (void)callBindOldAccountFailDelegateWithErrorMessage:(id)arg1 canRecover:(BOOL)arg2;
- (id)oldAccountContacts;
- (void)fetchContactList;
- (void)internalFetchContactList;
- (void)onGetFetchContactListCgiResponse:(id)arg1;
- (void)callFetchContactListFailDelegate;
- (void)callFetchContactListSucceedDelegateWithAppendContactList:(id)arg1 isFinished:(BOOL)arg2;
- (id)getOldAccountContactForEncryptedUsername:(id)arg1;
- (void)saveContactList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)qrCode;
- (void)setQrCode:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)hasBindedOldWechatAccount;
- (void)setHasBindedOldWechatAccount:(BOOL)arg1;
- (BOOL)hasFetchedContactList;
- (void)setHasFetchedContactList:(BOOL)arg1;
- (id)oldUsername;
- (void)setOldUsername:(id)arg1;
- (id)oldAlias;
- (void)setOldAlias:(id)arg1;
- (unsigned int)clientSequence;
- (void)setClientSequence:(unsigned int)arg1;
- (id)encryptedUsernameToOldAccountContactMap;
- (void)setEncryptedUsernameToOldAccountContactMap:(id)arg1;
- (void).cxx_destruct;
@end

