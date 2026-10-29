@interface KvReportItem28897 : KvReportBaseItem
{
    unsigned int _scene_21; // +0x8
    unsigned int _produceAction_23; // +0xc
    unsigned int _consumeAction_24; // +0x10
    unsigned int _preloadPicAction_28; // +0x14
    NSString * _netType_22; // +0x18
    long long _firstScreenTime_25; // +0x20
    long long _receivePageDataTime_26; // +0x28
    long long _pageFinishTime_27; // +0x30
    long long _preloadPicDownloadTime_29; // +0x38
    long long _preloadPicSize_30; // +0x40
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)scene_21;
- (void)setScene_21:(unsigned int)arg1;
- (id)netType_22;
- (void)setNetType_22:(id)arg1;
- (unsigned int)produceAction_23;
- (void)setProduceAction_23:(unsigned int)arg1;
- (unsigned int)consumeAction_24;
- (void)setConsumeAction_24:(unsigned int)arg1;
- (long long)firstScreenTime_25;
- (void)setFirstScreenTime_25:(long long)arg1;
- (long long)receivePageDataTime_26;
- (void)setReceivePageDataTime_26:(long long)arg1;
- (long long)pageFinishTime_27;
- (void)setPageFinishTime_27:(long long)arg1;
- (unsigned int)preloadPicAction_28;
- (void)setPreloadPicAction_28:(unsigned int)arg1;
- (long long)preloadPicDownloadTime_29;
- (void)setPreloadPicDownloadTime_29:(long long)arg1;
- (long long)preloadPicSize_30;
- (void)setPreloadPicSize_30:(long long)arg1;
- (void).cxx_destruct;
@end

