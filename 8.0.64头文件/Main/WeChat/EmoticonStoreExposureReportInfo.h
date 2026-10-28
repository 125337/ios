@interface EmoticonStoreExposureReportInfo : NSObject
{
    NSMutableArray * _pidList; // +0x8
    NSMutableArray * _linkIDList; // +0x10
    NSMutableArray * _linkStatusList; // +0x18
    NSMutableArray * _linkReportInfoList; // +0x20
    NSMutableArray * _infoList; // +0x28
    NSMutableArray * _indexList; // +0x30
    NSMutableArray * _storeItemList; // +0x38
    NSMutableArray * _reqIDList; // +0x40
}
- (id)pidList;
- (void)setPidList:(id)arg1;
- (id)linkIDList;
- (void)setLinkIDList:(id)arg1;
- (id)linkStatusList;
- (void)setLinkStatusList:(id)arg1;
- (id)linkReportInfoList;
- (void)setLinkReportInfoList:(id)arg1;
- (id)infoList;
- (void)setInfoList:(id)arg1;
- (id)indexList;
- (void)setIndexList:(id)arg1;
- (id)storeItemList;
- (void)setStoreItemList:(id)arg1;
- (id)reqIDList;
- (void)setReqIDList:(id)arg1;
- (void).cxx_destruct;
@end
