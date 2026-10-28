@interface MMFinderLiveGiftNewCustomizationModel : NSObject <NSCopying>
{
    BOOL _hasCustomized; // +0x8
    BOOL _isOnceModified; // +0x9
    BOOL _isEngineDisabled; // +0xa
    NSString * _parentProductId; // +0x10
    NSArray * _giftComponentList; // +0x18
    MMFinderLiveNewCustomGiftText * _customGiftText; // +0x20
    NSArray * _resourceList; // +0x28
    MMFinderLiveNewCustomGiftItemResourceURL * _backupThumbnail; // +0x30
    MMFinderLiveNewCustomGiftItemResourceURL * _backupPreview; // +0x38
    MMFinderLiveNewCustomGiftItemResourceURL * _backupAnimation; // +0x40
    MMFinderLiveNewCustomGiftItemResourceURL * _backupLandscapeAnimation; // +0x48
    NSString * _key; // +0x50
    MMFinderLiveNewCustomGiftItemResourceURL * _engine; // +0x58
    NSString * _minCodeVersion; // +0x60
    NSString * _currCombinationIdentifier; // +0x68
    GiftNewCustomizationMagicRewardResource * _magicRewardResource; // +0x70
    id /* block */ _currComponentKeyUpdateCallback; // +0x78
    id /* block */ _displayTextUpdateCallback; // +0x80
    double _baseRewardAmount; // +0x88
}
+ (id)newCustomizationModelForFinderLiveGift:(id)arg1;
+ (BOOL)isNewCustomizationGift:(id)arg1;
+ (BOOL)isCustomGiftInfoValid:(id)arg1;
- (void)innerInit;
- (id)getSelectStyleGeneralResource;
- (double)getAllSumBeanCnt;
- (double)getSumBeanCntForCurrentSelect;
- (double)getSumBeanCntForCurrentDisplayText;
- (BOOL)hasAntispamCustomTextToDisplay;
- (BOOL)astrictBySystem;
- (void)configListenerCallbacks;
- (void)updateSelectComponentCombinationIdentifier;
- (id)getSeqSortedComponentList;
- (void)updateDisplayText:(id)arg1 customGiftText:(id)arg2;
- (BOOL)enableUseCustomText;
- (id)getFirstConflictSelectedComponentWithCustomText;
- (BOOL)enableUseMagicEngineToPlayEffect;
- (BOOL)enableUseMagicEngineToPlayEffectSendByMe:(BOOL)arg1;
- (BOOL)isCurrentSelectStyleNeedUsePag;
- (BOOL)isSelectModifyCustomizationConfigOnce;
- (BOOL)isCurrentSelectUnEqualToCustomizationConfig;
- (void)synchronizeCurrentSelectToCustomizationConfig;
- (void)recoverCurrentSelectFromCustomizationConfig;
- (void)updateHasCustomized:(BOOL)arg1;
- (void)updateAntispamCustomText:(id)arg1;
- (void)updateEngineDisabled:(BOOL)arg1;
- (BOOL)useBackupAnimationPagResource;
- (BOOL)isEngineDisabledForReward;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)parentProductId;
- (void)setParentProductId:(id)arg1;
- (id)giftComponentList;
- (void)setGiftComponentList:(id)arg1;
- (id)customGiftText;
- (void)setCustomGiftText:(id)arg1;
- (id)resourceList;
- (void)setResourceList:(id)arg1;
- (id)backupThumbnail;
- (void)setBackupThumbnail:(id)arg1;
- (id)backupPreview;
- (void)setBackupPreview:(id)arg1;
- (id)backupAnimation;
- (void)setBackupAnimation:(id)arg1;
- (id)backupLandscapeAnimation;
- (void)setBackupLandscapeAnimation:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)minCodeVersion;
- (void)setMinCodeVersion:(id)arg1;
- (id)currCombinationIdentifier;
- (void)setCurrCombinationIdentifier:(id)arg1;
- (id)magicRewardResource;
- (void)setMagicRewardResource:(id)arg1;
- (id /* block */)currComponentKeyUpdateCallback;
- (void)setCurrComponentKeyUpdateCallback:(id /* block */)arg1;
- (id /* block */)displayTextUpdateCallback;
- (void)setDisplayTextUpdateCallback:(id /* block */)arg1;
- (BOOL)hasCustomized;
- (void)setHasCustomized:(BOOL)arg1;
- (BOOL)isOnceModified;
- (void)setIsOnceModified:(BOOL)arg1;
- (BOOL)isEngineDisabled;
- (void)setIsEngineDisabled:(BOOL)arg1;
- (double)baseRewardAmount;
- (void)setBaseRewardAmount:(double)arg1;
- (void).cxx_destruct;
@end
