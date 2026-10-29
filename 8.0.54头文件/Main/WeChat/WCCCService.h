@interface WCCCService : MMRootService <MMServiceProtocol>
- (void)fetchAndUploadUsedsDataLoop;
- (void)fetchAndUploadUsedsData;
- (void)onServiceInit;
@end

