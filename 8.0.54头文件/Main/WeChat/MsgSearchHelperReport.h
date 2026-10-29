@interface MsgSearchHelperReport : MMObject
{
    unsigned int _action; // +0x8
    unsigned int _tab; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _searchCost; // +0x14
    unsigned int _subTab; // +0x18
    unsigned int _ifImageDone; // +0x1c
    unsigned int _ifAllImageDone; // +0x20
    unsigned int _resultCnt; // +0x24
    unsigned int _imageLoadingCost; // +0x28
    unsigned int _imageCnt; // +0x2c
    unsigned int _imageIdentify; // +0x30
    unsigned int _clickPosition; // +0x34
    unsigned int _clickPositionSameType; // +0x38
    unsigned int _finderCnt; // +0x3c
    unsigned int _verticalSearchEntrance; // +0x40
    unsigned int _stayTime; // +0x44
    NSString * _searchSessionId; // +0x48
    NSString * _query; // +0x50
}
- (void)copyFromOtherObject:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)tab;
- (void)setTab:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)searchCost;
- (void)setSearchCost:(unsigned int)arg1;
- (unsigned int)subTab;
- (void)setSubTab:(unsigned int)arg1;
- (unsigned int)ifImageDone;
- (void)setIfImageDone:(unsigned int)arg1;
- (unsigned int)ifAllImageDone;
- (void)setIfAllImageDone:(unsigned int)arg1;
- (unsigned int)resultCnt;
- (void)setResultCnt:(unsigned int)arg1;
- (unsigned int)imageLoadingCost;
- (void)setImageLoadingCost:(unsigned int)arg1;
- (unsigned int)imageCnt;
- (void)setImageCnt:(unsigned int)arg1;
- (unsigned int)imageIdentify;
- (void)setImageIdentify:(unsigned int)arg1;
- (unsigned int)clickPosition;
- (void)setClickPosition:(unsigned int)arg1;
- (unsigned int)clickPositionSameType;
- (void)setClickPositionSameType:(unsigned int)arg1;
- (unsigned int)finderCnt;
- (void)setFinderCnt:(unsigned int)arg1;
- (unsigned int)verticalSearchEntrance;
- (void)setVerticalSearchEntrance:(unsigned int)arg1;
- (unsigned int)stayTime;
- (void)setStayTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

