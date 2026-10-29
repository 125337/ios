@interface WCAccessSecurityVerificationSessionMgr : NSObject
{
    BOOL _isInSession; // +0x8
    BOOL _isVerified; // +0x9
    WCDataItem * _securityVerificationDataItem; // +0x10
}
- (void)startSessionWithDataItem:(id)arg1;
- (void)endSessionWithDataItem:(id)arg1;
- (BOOL)isDataItemInSession:(id)arg1;
- (void)updateFailDataItemForSpamAsPassSecurityVerification;
- (BOOL)isSecurityVerifiedInSessionForDataItem:(id)arg1;
- (BOOL)isInSession;
- (id)securityVerificationDataItem;
- (BOOL)isVerified;
- (void).cxx_destruct;
@end

