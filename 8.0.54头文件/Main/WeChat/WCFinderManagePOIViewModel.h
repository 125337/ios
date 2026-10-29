@interface WCFinderManagePOIViewModel : NSObject
{
    BOOL _auditingContinueFlag; // +0x8
    BOOL _bindingContinueFlag; // +0x9
    id <WCFinderManagePOIViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _auditingPOIInfoList; // +0x18
    NSMutableArray * _bindingPOIInfoList; // +0x20
    NSString * _finderUsername; // +0x28
    NSData * _auditingLastBuffer; // +0x30
    NSData * _bindingLastBuffer; // +0x38
}
- (id)initWithFinderUsername:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)poiInfoForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (void)fetchRelativePOIListWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)bindPOIWithIds:(id)arg1;
- (void)appendAuditingPOI:(id)arg1;
- (void)unbindPOIWithId:(id)arg1;
- (void)fetchFirstAuditingPageData;
- (void)fetchNextAuditingPageData;
- (void)fetchAuditingDataWithLastBuffer:(id)arg1;
- (void)fetchFirstBindingPageData;
- (void)fetchNextBindingPageData;
- (void)fetchBindingDataWithLastBuffer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)auditingPOIInfoList;
- (void)setAuditingPOIInfoList:(id)arg1;
- (id)bindingPOIInfoList;
- (void)setBindingPOIInfoList:(id)arg1;
- (BOOL)auditingContinueFlag;
- (void)setAuditingContinueFlag:(BOOL)arg1;
- (BOOL)bindingContinueFlag;
- (void)setBindingContinueFlag:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)auditingLastBuffer;
- (void)setAuditingLastBuffer:(id)arg1;
- (id)bindingLastBuffer;
- (void)setBindingLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

