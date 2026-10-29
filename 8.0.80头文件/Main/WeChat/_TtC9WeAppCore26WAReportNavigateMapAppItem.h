@interface _TtC9WeAppCore26WAReportNavigateMapAppItem : WAReportBaseItem
{
    long long opType; // +0x8
    void * clickItem; // +0x10
    void * exposeWeAppList; // +0x20
    void * poiid; // +0x30
    void * exposeMapList; // +0x40
    long long enterScene; // +0x50
    long long tencentMapInstallStatus; // +0x58
}
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (id)clickItem;
- (void)setClickItem:(id)arg1;
- (id)exposeWeAppList;
- (void)setExposeWeAppList:(id)arg1;
- (id)poiid;
- (void)setPoiid:(id)arg1;
- (id)exposeMapList;
- (void)setExposeMapList:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (long long)tencentMapInstallStatus;
- (void)setTencentMapInstallStatus:(long long)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;
@end
