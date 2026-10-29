@interface MMFinderLiveSubTitleViewModel : NSObject
{
    BOOL _hasStartSubTitleDisplay; // +0x8
    BOOL _isSubTitleClosed; // +0x9
    BOOL _isSubTitleDisabled; // +0xa
    BOOL _isSubTitleStartDelaySupplyCheck; // +0xb
    BOOL _isChnSubTitleScrolling; // +0xc
    BOOL _isEngSubTitleScrolling; // +0xd
    MMLiveTaskId * _taskId; // +0x10
    id /* block */ _refreshBlock; // +0x18
    MMFinderLiveSubTitleUIConfigModel * _subTitleUIConfigModel; // +0x20
    NSMutableArray * _currentSubTitleList; // +0x28
    NSMutableArray * _lastSubTitleList; // +0x30
    NSMutableDictionary * _subTitleDisplayDict; // +0x38
    NSArray * _currentInitSubTitleList; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)updateSubTitleList:(id)arg1;
- (void)setSubTitleUIConfigModel:(id)arg1;
- (void)updateSubTitleClosed:(BOOL)arg1;
- (void)updateSubTitleDisabled:(BOOL)arg1;
- (void)notifyScrollForRefreshStart:(long long)arg1;
- (void)notifyScrollForRefreshEnd:(long long)arg1;
- (void)notifySubTitleBegin;
- (void)clearData;
- (void)handleSubTitleList:(id)arg1;
- (id)filterUnvalidSubTitleList:(id)arg1;
- (BOOL)isSubTitleOnlyUpdateForCurrSupplying:(id)arg1;
- (BOOL)checkSubTitleListIndexUpdated:(id)arg1;
- (BOOL)checkSubTitleListContentUpdated:(id)arg1;
- (void)updateDisplayModels;
- (void)tryUpdateDisplayModel:(long long)arg1;
- (BOOL)updateDisplayModel:(long long)arg1;
- (void)delayTimeoutToDisplay;
- (void)timeoutToDisplay;
- (void)delayTimeoutToAutoRefreshSupplyModeSubTitleIfNeeded;
- (void)stopTimeoutToAutoRefreshSupplyModeSubTitle;
- (BOOL)checkNeedToAutoRefreshSupplyModeSubTitle;
- (void)timeoutToAutoRefreshSupplyModeSubTitle;
- (BOOL)tryToForceRefreshUI:(long long)arg1;
- (double)getSupplyModeSubTitleAutoRefreshDelayTime;
- (id)getNormalCategoryUpdatedSubTitleList:(id)arg1;
- (id)getSupplyCategoryUpdatedSubTitleList:(id)arg1;
- (id)getCurrentSubTitle:(long long)arg1;
- (id)getLastSubTitle:(long long)arg1;
- (id)getLastSubTitleWithSubTitleType:(long long)arg1 subTitleIndex:(long long)arg2;
- (void)clearCurrentSubTitle:(long long)arg1;
- (void)clearLastSubTitle:(long long)arg1;
- (void)updateLastSubTitle:(id)arg1;
- (id)getCurrentTempDisplayList;
- (id)getSubTitleDisplayModel:(long long)arg1 autoCreate:(BOOL)arg2;
- (BOOL)isSubTitleTypeSupportDisplayLastContent:(long long)arg1;
- (id)createLastSubTitleData:(id)arg1 previousSubTitle:(id)arg2;
- (id)tryGetSupplySubTitleFromOriginSubTitle:(id)arg1;
- (BOOL)isOriginSubTitle:(id)arg1 needCombineWithPreviousSubTitle:(id)arg2;
- (void)configSubTitleDisplayModel:(id)arg1;
- (unsigned long long)getMaxLineNum:(long long)arg1;
- (unsigned long long)getMaxDisplayLineNum:(long long)arg1;
- (id)getSubTitleFont:(long long)arg1;
- (id)getTextAttributeObj:(long long)arg1;
- (unsigned long long)getDisplayMode:(long long)arg1;
- (id)getCurrentSubTitleListInDisplayMode:(unsigned long long)arg1;
- (void)initSubTitleSwitch;
- (void)checkSubTitleCacheOverTime;
- (void)synchornizeSubTitleSwitch;
- (BOOL)isSubTitleRealClosed;
- (id)currentSubTitleList;
- (id)lastSubTitleList;
- (id)subTitleDisplayDict;
- (double)maxContentWidth;
- (unsigned long long)chnTextLine;
- (unsigned long long)engTextLine;
- (id)chnSubTitleFont;
- (id)engSubTitleFont;
- (id)chnTextAttributeObj;
- (id)engTextAttributeObj;
- (void)logNormalCategoryUpdateSubTitleList:(id)arg1;
- (void)logSupplyCategoryUpdateSubTitleList:(id)arg1;
- (id)getLogStrForArrStyles:(id)arg1 logSize:(BOOL)arg2;
- (id)getLogStrForStyle:(id)arg1 logSize:(BOOL)arg2;
- (id)getLogStrForSubTitleComponentArr:(id)arg1;
- (void)startRegualPrint;
- (void)stopRegualPrint;
- (void)regualPrintLog;
- (id)getCurrentLogStr;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)hasStartSubTitleDisplay;
- (void)setHasStartSubTitleDisplay:(BOOL)arg1;
- (BOOL)isSubTitleClosed;
- (void)setIsSubTitleClosed:(BOOL)arg1;
- (BOOL)isSubTitleDisabled;
- (void)setIsSubTitleDisabled:(BOOL)arg1;
- (id /* block */)refreshBlock;
- (void)setRefreshBlock:(id /* block */)arg1;
- (id)subTitleUIConfigModel;
- (void)setCurrentSubTitleList:(id)arg1;
- (void)setLastSubTitleList:(id)arg1;
- (void)setSubTitleDisplayDict:(id)arg1;
- (BOOL)isSubTitleStartDelaySupplyCheck;
- (void)setIsSubTitleStartDelaySupplyCheck:(BOOL)arg1;
- (BOOL)isChnSubTitleScrolling;
- (void)setIsChnSubTitleScrolling:(BOOL)arg1;
- (BOOL)isEngSubTitleScrolling;
- (void)setIsEngSubTitleScrolling:(BOOL)arg1;
- (id)currentInitSubTitleList;
- (void)setCurrentInitSubTitleList:(id)arg1;
- (void).cxx_destruct;
@end
