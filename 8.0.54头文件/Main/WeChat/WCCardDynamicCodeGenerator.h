@interface WCCardDynamicCodeGenerator : MMObject <IWCCardPkgExt>
{
    NSString * _nsCardId; // +0x8
    NSMutableArray * _arrCodes; // +0x10
    double _codeExpiredTime; // +0x18
    unsigned int _uiCountOfNeedRefresh; // +0x20
    NSTimer * _oCheckExpireTimer; // +0x28
    BOOL _bFetchingCode; // +0x30
    unsigned int _uiRefreshInteval; // +0x34
    unsigned int _refreshInteval; // +0x38
    id /* block */ _getCodeBlock; // +0x40
}
- (void)dealloc;
- (id)initWithCardId:(id)arg1;
- (BOOL)bHasAvailableCode;
- (id)getCode:(id /* block */)arg1;
- (void)fetchCodeFromSvr;
- (void)clearAllCode;
- (id)takeOneCode;
- (void)tryFetchCodeIfLackCode;
- (BOOL)bCodesExpired;
- (void)onGetSerialNumberData:(id)arg1 ErrCode:(int)arg2;
- (unsigned int)uiRefreshInteval;
- (id /* block */)getCodeBlock;
- (void)setGetCodeBlock:(id /* block */)arg1;
- (unsigned int)refreshInteval;
- (void)setRefreshInteval:(unsigned int)arg1;
- (void).cxx_destruct;
@end

