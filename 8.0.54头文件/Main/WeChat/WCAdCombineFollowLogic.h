@interface WCAdCombineFollowLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenCombineFollowViewDelegate, PBMessageObserverDelegate, IContactMgrExt>
{
    BOOL _isWorking; // +0x8
    int _source; // +0xc
    int _brandFollowResult; // +0x10
    int _finderFollowResult; // +0x14
    int _brandUIScene; // +0x18
    int _brandUISubScene; // +0x1c
    WCAdCombineFollowInfo * _combineFollowInfo; // +0x20
    WCDataItem * _dataItem; // +0x28
    WCAdvertiseInfo * _adData; // +0x30
    NSString * _snsId; // +0x38
    long long _exposureScene; // +0x40
    NSString * _canvasDynamicInfo; // +0x48
    WCAdHalfScreenCombineFollowView * _halfScreenView; // +0x50
    MMTimer * _brandContactSyncTimer; // +0x58
    long long _finderFromScene; // +0x60
}
- (id)initWithCombineFollowInfo:(id)arg1 dataItem:(id)arg2 adData:(id)arg3 snsId:(id)arg4 exposureScene:(long long)arg5 source:(int)arg6 canvasDynamicInfo:(id)arg7;
- (void)dealloc;
- (void)parseScene;
- (void)start;
- (void)checkFollowState;
- (BOOL)isBrandFollowed;
- (BOOL)isFinderFollowed;
- (void)jumpBrand;
- (void)jumpFinder;
- (void)jumpWhenAllFollowed;
- (void)jumpWhenAllFollowSuccess;
- (id)fetchProfilePageWrap;
- (void)onConfirmButtonClickWithBrandInfo:(id)arg1 finderInfo:(id)arg2;
- (void)doBrandFollow;
- (void)doFinderFollow;
- (void)onBrandFollowFinish:(BOOL)arg1;
- (void)onFinderFollowFinish:(BOOL)arg1;
- (void)checkAllFollowFinish;
- (void)checkFinderFollowStateFromServer:(id)arg1;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)invalidateBrandContactSyncTimer;
- (void)onTimeoutBrandContactSync;
- (void)onModifyContact:(id)arg1;
- (void)scheduleBrandContactSyncTimer;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)combineFollowInfo;
- (void)setCombineFollowInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (long long)exposureScene;
- (void)setExposureScene:(long long)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)halfScreenView;
- (void)setHalfScreenView:(id)arg1;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (int)brandFollowResult;
- (void)setBrandFollowResult:(int)arg1;
- (int)finderFollowResult;
- (void)setFinderFollowResult:(int)arg1;
- (id)brandContactSyncTimer;
- (void)setBrandContactSyncTimer:(id)arg1;
- (int)brandUIScene;
- (void)setBrandUIScene:(int)arg1;
- (int)brandUISubScene;
- (void)setBrandUISubScene:(int)arg1;
- (long long)finderFromScene;
- (void)setFinderFromScene:(long long)arg1;
- (void).cxx_destruct;
@end

