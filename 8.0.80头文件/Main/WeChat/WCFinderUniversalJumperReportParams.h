@interface WCFinderUniversalJumperReportParams : NSObject
{
    int _entranceType; // +0x8
    int _clickArea; // +0xc
    UIView<WCFinderJumpInfoViewProtocol> * _jumpInfoView; // +0x10
    unsigned long long _actionType; // +0x18
    NSDictionary * _clientUdfKV; // +0x20
    FinderJumpActionInfo * _actionInfo; // +0x28
}
- (id)jumpInfoView;
- (void)setJumpInfoView:(id)arg1;
- (int)entranceType;
- (void)setEntranceType:(int)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (int)clickArea;
- (void)setClickArea:(int)arg1;
- (id)clientUdfKV;
- (void)setClientUdfKV:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
