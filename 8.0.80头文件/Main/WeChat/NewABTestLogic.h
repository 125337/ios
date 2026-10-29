@interface NewABTestLogic : MMUserService <PBMessageObserverDelegate, IMsgExt, MMKernelExt, MMServiceProtocol>
{
    BOOL _isUpdatingABTestFromSvr; // +0x8
    unsigned int _uiNextUpdateTime; // +0xc
    unsigned int _uiClientLastUpdateTime; // +0x10
    NewABTestXMLParser * _xmlParser; // +0x18
}
- (void)onServiceInit;
- (void)dealloc;
- (void)tryUpdateABTestFromSvr;
- (void)getABTestFromSvr;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOK;
- (void)willEnterForeground;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateNextUpdateTime:(unsigned int)arg1;
- (unsigned int)getNextUpdateTimeFromCache;
- (BOOL)saveNewUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getLastUpdateTimeFromCache;
- (BOOL)saveLastUpdateTimeForCache:(unsigned int)arg1;
- (void)updateClientLastUpdateTime:(unsigned int)arg1;
- (unsigned int)getClientLastUpdateTimeFromCache;
- (BOOL)saveNewClientLastUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getUpdateTimeFromFile:(id)arg1;
- (BOOL)saveUpdateTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (id)xmlParser;
- (unsigned int)uiNextUpdateTime;
- (void)setUiNextUpdateTime:(unsigned int)arg1;
- (unsigned int)uiClientLastUpdateTime;
- (void)setUiClientLastUpdateTime:(unsigned int)arg1;
- (void)setXmlParser:(id)arg1;
- (BOOL)isUpdatingABTestFromSvr;
- (void)setIsUpdatingABTestFromSvr:(BOOL)arg1;
- (void).cxx_destruct;
@end
