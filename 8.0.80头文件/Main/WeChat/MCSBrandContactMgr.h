@interface MCSBrandContactMgr : NSObject <MMConfigMgrExt>
{
    NSMutableArray * _arrMCSItems; // +0x8
    unsigned int _lastUpdateTime; // +0x10
    BOOL _bNeedSave; // +0x14
}
- (id)init;
- (void)initData;
- (void)setDeclineFactor;
- (void)tryUpdateData;
- (void)cleanData;
- (id)getMCSArray;
- (void)removeItem:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)addScore:(id)arg1;
- (id)pathForMCSFile;
- (void)loadLocalData;
- (void)trySaveData;
- (void)onEnterBackGround;
- (void)onClearData;
- (void)onAppTerminate;
- (void)onMMDynamicConfigUpdated;
- (void).cxx_destruct;
@end
