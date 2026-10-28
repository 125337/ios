@interface WCSessionFlowStatItem : MMObject <NSCopying>
{
    BOOL _isReport; // +0x8
    unsigned int _pId; // +0xc
    unsigned int _seq; // +0x10
    unsigned int _flowSeq; // +0x14
    NSString * _pName; // +0x18
    unsigned long long _enterTimestampMs; // +0x20
    unsigned long long _quitTimestampMs; // +0x28
    unsigned long long _interval; // +0x30
    NSMutableArray * _sessionFlows; // +0x38
    NSMutableArray * _mergeInfos; // +0x40
    NSMutableArray * _matchPagePaths; // +0x48
    NSMutableArray * _mergePagePathInfos; // +0x50
    NSMutableArray * _businessDatas; // +0x58
    NSMutableArray * _viewOperations; // +0x60
    NSMutableArray * _businessDataFilterCache; // +0x68
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (unsigned int)pId;
- (void)setPId:(unsigned int)arg1;
- (id)pName;
- (void)setPName:(id)arg1;
- (unsigned long long)enterTimestampMs;
- (void)setEnterTimestampMs:(unsigned long long)arg1;
- (unsigned long long)quitTimestampMs;
- (void)setQuitTimestampMs:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)sessionFlows;
- (void)setSessionFlows:(id)arg1;
- (id)mergeInfos;
- (void)setMergeInfos:(id)arg1;
- (id)matchPagePaths;
- (void)setMatchPagePaths:(id)arg1;
- (id)mergePagePathInfos;
- (void)setMergePagePathInfos:(id)arg1;
- (id)businessDatas;
- (void)setBusinessDatas:(id)arg1;
- (id)viewOperations;
- (void)setViewOperations:(id)arg1;
- (id)businessDataFilterCache;
- (void)setBusinessDataFilterCache:(id)arg1;
- (unsigned int)flowSeq;
- (void)setFlowSeq:(unsigned int)arg1;
- (BOOL)isReport;
- (void)setIsReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
