@interface WebViewSanboxPreverifyContext : MMObject
{
    BOOL _bConfigRequestResult; // +0x8
    BOOL _bNotCheckIfUrlMatchToSessionUrl; // +0x9
    unsigned long long _startConfigTimeStamp; // +0x10
    NSString * _mainFrameSessionId; // +0x18
    NSArray * _arrConfigTagNameList; // +0x20
}
- (unsigned long long)startConfigTimeStamp;
- (void)setStartConfigTimeStamp:(unsigned long long)arg1;
- (BOOL)bConfigRequestResult;
- (void)setBConfigRequestResult:(BOOL)arg1;
- (id)mainFrameSessionId;
- (void)setMainFrameSessionId:(id)arg1;
- (id)arrConfigTagNameList;
- (void)setArrConfigTagNameList:(id)arg1;
- (BOOL)bNotCheckIfUrlMatchToSessionUrl;
- (void)setBNotCheckIfUrlMatchToSessionUrl:(BOOL)arg1;
- (void).cxx_destruct;
@end
