@interface MMMetricsRecordDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableMetricsInfo; // +0x10
    WCTTable * m_tableStackInfo; // +0x18
    WCTTable * m_tableImageInfo; // +0x20
    WCTTable * m_tableThreadInfo; // +0x28
    WCTTable * m_tableCpuThreadSample; // +0x30
    WCTTable * m_tableGpuRenderSample; // +0x38
    WCTTable * m_tableLocationTask; // +0x40
    WCTTable * m_tableAudioTask; // +0x48
    WCTTable * m_tableBusinessData; // +0x50
}
- (id)initWithDBPath:(id)arg1;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)vacuumCleaner;
- (BOOL)runTransaction:(id /* block */)arg1;
- (BOOL)insertMetricsInfos:(id)arg1;
- (id)getMetricsInfosFrom:(double)arg1 to:(double)arg2;
- (id)getLastMetricsInfos:(int)arg1;
- (BOOL)insertThreadInfos:(id)arg1;
- (id)getThreadInfosFrom:(double)arg1 to:(double)arg2;
- (BOOL)insertCpuThreadSamples:(id)arg1;
- (id)getCpuThreadSamplesFrom:(double)arg1 to:(double)arg2 minUsage:(float)arg3;
- (BOOL)insertGpuRenderSamples:(id)arg1;
- (id)getGpuRenderSamplesFrom:(double)arg1 to:(double)arg2;
- (BOOL)insertOrUpdateLocationTask:(id)arg1;
- (BOOL)insertLocationTasks:(id)arg1;
- (id)getLocationTasksFrom:(double)arg1 to:(double)arg2;
- (BOOL)insertOrUpdateAudioTask:(id)arg1;
- (BOOL)insertAudioTasks:(id)arg1;
- (id)getAudioTasksFrom:(double)arg1 to:(double)arg2;
- (BOOL)insertImageInfos:(id)arg1;
- (id)getAllImageInfos;
- (BOOL)insertBusinessDatas:(id)arg1;
- (id)getBusinessDatasFrom:(double)arg1 to:(double)arg2;
- (void).cxx_destruct;
@end

