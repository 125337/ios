@interface WCFinderSetAnchorStatusCGI : WCFinderLiveBaseCgi
{
    BOOL _onStartLive; // +0x8
    unsigned int _liveStatus; // +0xc
    id _extraInfo; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    MMFinderLiveAnchorStatusItem * _anchorStatus; // +0x20
    unsigned long long _anchorStatusOpFlag; // +0x28
    unsigned long long _anchorSettingOpFlag; // +0x30
    NSString * _makeupsModelType; // +0x38
    NSString * _detailSetList; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failBlock; // +0x50
}
- (id)initWithDataItem:(id)arg1 anchorStatus:(id)arg2 liveStatus:(unsigned int)arg3 anchorStatusOpFlag:(unsigned long long)arg4 anchorSettingOpFlag:(unsigned long long)arg5 onStartLive:(BOOL)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)anchorStatus;
- (void)setAnchorStatus:(id)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (unsigned long long)anchorStatusOpFlag;
- (void)setAnchorStatusOpFlag:(unsigned long long)arg1;
- (unsigned long long)anchorSettingOpFlag;
- (void)setAnchorSettingOpFlag:(unsigned long long)arg1;
- (BOOL)onStartLive;
- (void)setOnStartLive:(BOOL)arg1;
- (id)makeupsModelType;
- (void)setMakeupsModelType:(id)arg1;
- (id)detailSetList;
- (void)setDetailSetList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

