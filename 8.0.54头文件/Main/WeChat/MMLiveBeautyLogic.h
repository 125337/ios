@interface MMLiveBeautyLogic : NSObject <MMLiveBeautyLogicProvider, MMLiveTaskMgrExt, MMLiveStorageCleanupExt>
{
    BOOL _usingDefaultNoopBeautyPackage; // +0x8
    BOOL _isAudience; // +0x9
    MMLiveTask * _task; // +0x10
    MMWeEffectManager * _effectManager; // +0x18
    MMLiveBeautyPackage * _beautyPackage; // +0x20
    MMLiveFilterPackage * _filterPackage; // +0x28
    MMLiveMakeupPackage * _makeupPackage; // +0x30
    MMLiveFilterDataItem * _currentUsedFilter; // +0x38
    MMLiveMakeupDataItem * _currentUsedMakeup; // +0x40
    MMLiveEffectsUsingContext * _effectUsingCtx; // +0x48
    MMLiveEnergyController * _energyController; // +0x50
    MemoryMappedKV * _mappedKV; // +0x58
    NSMutableDictionary * _beautyDrivers; // +0x60
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x68
    WCFinderLiveStarterReporter * _starterReporter; // +0x70
    MMLiveFilterDataItem * _noopFilter; // +0x78
    MMLiveMakeupDataItem * _noopMakeup; // +0x80
    MMLiveBeautyResourcesDescriptor * _resourcesDescriptor; // +0x88
    NSDictionary * _makeupDetailIdDic; // +0x90
    NSString * _makeupResourcesInstancePath; // +0x98
    NSString * _filterResourcesInstancePath; // +0xa0
}
+ (BOOL)isDeviceLowSpec;
- (id)beautyLogic;
- (id)getDecorDataItemList;
- (void)setLiveDecorEffect:(id)arg1;
- (id)getVisionEffectDataItemList;
- (void)setLiveVisionEffect:(id)arg1;
- (BOOL)isMaterialResourcePrepared:(id)arg1;
- (BOOL)isMaterialResourceDownloading:(id)arg1;
- (BOOL)loadMaterialResource:(id)arg1;
- (void)reportDecorAction:(unsigned long long)arg1 item:(id)arg2;
- (void)reportVisionEffectAction:(unsigned long long)arg1 item:(id)arg2;
- (id)initWithWeEffectManager:(id)arg1 beautyPackage:(id)arg2 isAudience:(BOOL)arg3 task:(id)arg4;
- (void)initSkinSeg;
- (void)updateSkinSegStatus:(BOOL)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)_internalUpdateSkinSegStatus:(BOOL)arg1 success:(id /* block */)arg2 saveCurStatus:(BOOL)arg3;
- (void)saveCurrentFilterStatusOnSkinSegOpen;
- (void)resetFilterStatusToSkinSegOpen;
- (BOOL)skinSegEnable;
- (void)setSkinSegEnable:(BOOL)arg1;
- (void)initMakeup;
- (void)updateMakeup:(id)arg1;
- (void)updateMakupDetail:(id)arg1;
- (void)updateMakupDetail:(id)arg1 resetFilterIfNeeded:(BOOL)arg2;
- (void)initFilter;
- (void)setFilter:(id)arg1;
- (void)setFilter:(id)arg1 showToast:(BOOL)arg2;
- (void)setLiveFilterValue:(float)arg1;
- (void)initBeauty;
- (void)activateBeautySuite:(id)arg1;
- (BOOL)isCurrentBeautySuitDefaultValue;
- (BOOL)isCurrentMakeupDetailDefaultValue;
- (void)reloadDataItemsValue;
- (void)resetDataItemsValueToDefault;
- (void)resetMakeupDetailValueToDefault;
- (void)saveAllEffectBeautyValues;
- (void)applyBeautyItem:(id)arg1;
- (id)effectUsingCtx;
- (id)getMeizhuangResultString;
- (void)reportMakeupActionOnStarter;
- (void)reportMakeupAction;
- (void)saveAllMakeupDataItemValues;
- (void)saveAllMakeupDataDetailItemValues;
- (void)saveAllEffectFilterValues;
- (id)getMakeupDataItemList;
- (id)getFilterDataItemsList;
- (id)finderLiveTask;
- (float)getValidParamValue:(float)arg1;
- (id)mappedKV;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (id)task;
- (void)setTask:(id)arg1;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (id)beautyPackage;
- (void)setBeautyPackage:(id)arg1;
- (id)filterPackage;
- (void)setFilterPackage:(id)arg1;
- (id)makeupPackage;
- (void)setMakeupPackage:(id)arg1;
- (id)currentUsedFilter;
- (void)setCurrentUsedFilter:(id)arg1;
- (id)currentUsedMakeup;
- (void)setCurrentUsedMakeup:(id)arg1;
- (void)setEffectUsingCtx:(id)arg1;
- (id)energyController;
- (void)setEnergyController:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (BOOL)usingDefaultNoopBeautyPackage;
- (void)setUsingDefaultNoopBeautyPackage:(BOOL)arg1;
- (id)beautyDrivers;
- (void)setBeautyDrivers:(id)arg1;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)noopFilter;
- (void)setNoopFilter:(id)arg1;
- (id)noopMakeup;
- (void)setNoopMakeup:(id)arg1;
- (id)resourcesDescriptor;
- (void)setResourcesDescriptor:(id)arg1;
- (id)makeupDetailIdDic;
- (void)setMakeupDetailIdDic:(id)arg1;
- (id)makeupResourcesInstancePath;
- (void)setMakeupResourcesInstancePath:(id)arg1;
- (id)filterResourcesInstancePath;
- (void)setFilterResourcesInstancePath:(id)arg1;
- (void).cxx_destruct;
@end

