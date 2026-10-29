@interface WCFinderCGIProfile : NSObject
{
    unsigned long long _cgiId; // +0x8
    unsigned long long _totalCostMS; // +0x10
    unsigned long long _connCostMS; // +0x18
    unsigned long long _startPacketCostMS; // +0x20
    unsigned long long _tlsCostMS; // +0x28
    unsigned long long _readPacketCostMS; // +0x30
    unsigned long long _reqSize; // +0x38
    unsigned long long _respSize; // +0x40
    unsigned long long _encodeCostMS; // +0x48
    unsigned long long _decodeCostMS; // +0x50
    NSMutableDictionary * _extInfo; // +0x58
    unsigned long long _cbkBeginMS; // +0x60
    unsigned long long _cbkEndMS; // +0x68
}
+ (id)profileWithCGIId:(unsigned long long)arg1;
+ (id)fromResponse:(id)arg1;
- (id)toJson:(id /* block */)arg1;
- (id)extInfo;
- (void)attachToResponse:(id)arg1;
- (unsigned long long)cgiId;
- (void)setCgiId:(unsigned long long)arg1;
- (unsigned long long)totalCostMS;
- (void)setTotalCostMS:(unsigned long long)arg1;
- (unsigned long long)connCostMS;
- (void)setConnCostMS:(unsigned long long)arg1;
- (unsigned long long)startPacketCostMS;
- (void)setStartPacketCostMS:(unsigned long long)arg1;
- (unsigned long long)tlsCostMS;
- (void)setTlsCostMS:(unsigned long long)arg1;
- (unsigned long long)readPacketCostMS;
- (void)setReadPacketCostMS:(unsigned long long)arg1;
- (unsigned long long)reqSize;
- (void)setReqSize:(unsigned long long)arg1;
- (unsigned long long)respSize;
- (void)setRespSize:(unsigned long long)arg1;
- (unsigned long long)encodeCostMS;
- (void)setEncodeCostMS:(unsigned long long)arg1;
- (unsigned long long)decodeCostMS;
- (void)setDecodeCostMS:(unsigned long long)arg1;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)cbkBeginMS;
- (void)setCbkBeginMS:(unsigned long long)arg1;
- (unsigned long long)cbkEndMS;
- (void)setCbkEndMS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

