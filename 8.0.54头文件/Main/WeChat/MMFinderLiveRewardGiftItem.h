@interface MMFinderLiveRewardGiftItem : MMObject <WCTTableCoding, NSCopying>
{
    BOOL needUnlock; // +0x8
    BOOL _disableCombo; // +0x9
    BOOL _isBlocked; // +0xa
    BOOL _useRfxPag; // +0xb
    unsigned int businessType; // +0xc
    unsigned int rewardGiftType; // +0x10
    unsigned int rewardGiftOrder; // +0x14
    unsigned int unlockIntimacyLevel; // +0x18
    unsigned int unlockGlobalRewardLevel; // +0x1c
    unsigned int flag; // +0x20
    unsigned int _freeGiftSeq; // +0x24
    NSString * rewardProductId; // +0x28
    NSString * thumbnailFileUrl; // +0x30
    NSString * previewPagFileUrl; // +0x38
    NSString * animationPagFileUrl; // +0x40
    NSString * thumbnailFileMd5; // +0x48
    NSString * previewPagFileMd5; // +0x50
    NSString * animationPagFileMd5; // +0x58
    NSString * rewardGiftName; // +0x60
    double rewardAmountInWecoin; // +0x68
    FinderJumpInfo * jumpInfo; // +0x70
    NSString * description; // +0x78
    NSString * _landscapeAnimationPagFileUrl; // +0x80
    NSString * _landscapeAnimationPagFileMd5; // +0x88
    NSString * _tagColor; // +0x90
    NSString * _tagText; // +0x98
    NSString * _interactiveGiftUrl; // +0xa0
    NSString * _interactiveGiftMd5; // +0xa8
    unsigned long long _durationTime; // +0xb0
    FinderLiveGift * _finderLiveGift; // +0xb8
    FinderLiveGiftCustomInfo * _customInfo; // +0xc0
    NSData * _customInfoBuffer; // +0xc8
    NSString * _giftDescription; // +0xd0
    FinderLiveGiftBatchGiveConfigList * _batchSendConfigList; // +0xd8
    NSString * _foregroundPAGUrl; // +0xe0
    NSString * _foregroundPAGMD5; // +0xe8
    NSString * _durationId; // +0xf0
    NSArray * _packetBatchInfo; // +0xf8
    NSMutableArray * _multiAnimationList; // +0x100
    MMFinderLiveGiftCustomizationModel * _customizationModel; // +0x108
    MMFinderLiveGiftNewCustomizationModel * _newedCustomizationModel; // +0x110
    MMFinderLiveAnchorCustomizeRewardStyleItem * _anchorCustomizeStyle; // +0x118
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)rewardProductId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_rewardProductId;
+ (const void *)businessType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_businessType;
+ (const void *)thumbnailFileUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_thumbnailFileUrl;
+ (const void *)previewPagFileUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_previewPagFileUrl;
+ (const void *)animationPagFileUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_animationPagFileUrl;
+ (const void *)thumbnailFileMd5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_thumbnailFileMd5;
+ (const void *)previewPagFileMd5;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_previewPagFileMd5;
+ (const void *)animationPagFileMd5;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_animationPagFileMd5;
+ (const void *)rewardGiftName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_rewardGiftName;
+ (const void *)rewardAmountInWecoin;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_rewardAmountInWecoin;
+ (const void *)rewardGiftType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_rewardGiftType;
+ (const void *)rewardGiftOrder;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_rewardGiftOrder;
+ (const void *)unlockIntimacyLevel;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_unlockIntimacyLevel;
+ (const void *)unlockGlobalRewardLevel;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_unlockGlobalRewardLevel;
+ (const void *)flag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_flag;
+ (const void *)landscapeAnimationPagFileUrl;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_landscapeAnimationPagFileUrl;
+ (const void *)landscapeAnimationPagFileMd5;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_landscapeAnimationPagFileMd5;
+ (const void *)interactiveGiftUrl;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_interactiveGiftUrl;
+ (const void *)interactiveGiftMd5;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_interactiveGiftMd5;
+ (const void *)durationTime;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_durationTime;
+ (const void *)needUnlock;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_needUnlock;
+ (const void *)giftDescription;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_giftDescription;
+ (const void *)disableCombo;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_disableCombo;
+ (const void *)useRfxPag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_useRfxPag;
+ (const void *)foregroundPAGUrl;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_foregroundPAGUrl;
+ (const void *)foregroundPAGMD5;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_foregroundPAGMD5;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (id)tranferToLiveGiftItems:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(BOOL)arg2;
+ (id)tranferPackageResourceInfoToLiveGiftItems:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(BOOL)arg2;
+ (id)filterNewCustomizableGiftItemsFromSrc:(id)arg1;
+ (id)filterAnchorCustomizeRewardItemsFromSrc:(id)arg1;
- (id)initWithPBGift:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(BOOL)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromPBGift:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(BOOL)arg2;
- (BOOL)isValid;
- (BOOL)isNoFullScreenEffectGift;
- (BOOL)isFullScreenEffectGift;
- (BOOL)isFinderLiveInteractiveGift;
- (BOOL)isFinderLiveActivityUnlockGift;
- (BOOL)isFinderLiveRandomAnimationGift;
- (BOOL)isFinderLivePopularGift;
- (BOOL)isFinderLivePKAttackGift;
- (BOOL)isFinderLiveNotDisplayGift;
- (BOOL)isFinderLivMultiAnimationGift;
- (BOOL)isAnchorSwitchSkinGift;
- (id)batchSendConfigNumbers;
- (BOOL)isForegroundGift;
- (BOOL)isPacketGift;
- (BOOL)isFreeGift;
- (unsigned int)countInGiftPacket;
- (unsigned long long)minExpireTime;
- (id)currentAvailableBatchInfo;
- (id)description;
- (id)resourceForAnimationId:(id)arg1;
- (BOOL)needUseFullPagToPlayAnimationSendByMe:(BOOL)arg1;
- (BOOL)needLoadAnchorCustomizeImageFile;
- (double)getSumRewardAmount;
- (double)getSumRewardAmountWithLog:(BOOL)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)thumbnailFileUrl;
- (void)setThumbnailFileUrl:(id)arg1;
- (id)previewPagFileUrl;
- (void)setPreviewPagFileUrl:(id)arg1;
- (id)animationPagFileUrl;
- (void)setAnimationPagFileUrl:(id)arg1;
- (id)thumbnailFileMd5;
- (void)setThumbnailFileMd5:(id)arg1;
- (id)previewPagFileMd5;
- (void)setPreviewPagFileMd5:(id)arg1;
- (id)animationPagFileMd5;
- (void)setAnimationPagFileMd5:(id)arg1;
- (id)rewardGiftName;
- (void)setRewardGiftName:(id)arg1;
- (double)rewardAmountInWecoin;
- (void)setRewardAmountInWecoin:(double)arg1;
- (unsigned int)rewardGiftType;
- (void)setRewardGiftType:(unsigned int)arg1;
- (unsigned int)rewardGiftOrder;
- (void)setRewardGiftOrder:(unsigned int)arg1;
- (unsigned int)unlockIntimacyLevel;
- (void)setUnlockIntimacyLevel:(unsigned int)arg1;
- (unsigned int)unlockGlobalRewardLevel;
- (void)setUnlockGlobalRewardLevel:(unsigned int)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (BOOL)needUnlock;
- (void)setNeedUnlock:(BOOL)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)landscapeAnimationPagFileUrl;
- (void)setLandscapeAnimationPagFileUrl:(id)arg1;
- (id)landscapeAnimationPagFileMd5;
- (void)setLandscapeAnimationPagFileMd5:(id)arg1;
- (id)tagColor;
- (void)setTagColor:(id)arg1;
- (id)tagText;
- (void)setTagText:(id)arg1;
- (id)interactiveGiftUrl;
- (void)setInteractiveGiftUrl:(id)arg1;
- (id)interactiveGiftMd5;
- (void)setInteractiveGiftMd5:(id)arg1;
- (unsigned long long)durationTime;
- (void)setDurationTime:(unsigned long long)arg1;
- (id)finderLiveGift;
- (void)setFinderLiveGift:(id)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (id)customInfoBuffer;
- (void)setCustomInfoBuffer:(id)arg1;
- (id)giftDescription;
- (void)setGiftDescription:(id)arg1;
- (id)batchSendConfigList;
- (void)setBatchSendConfigList:(id)arg1;
- (BOOL)disableCombo;
- (void)setDisableCombo:(BOOL)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (id)foregroundPAGUrl;
- (void)setForegroundPAGUrl:(id)arg1;
- (id)foregroundPAGMD5;
- (void)setForegroundPAGMD5:(id)arg1;
- (id)durationId;
- (void)setDurationId:(id)arg1;
- (id)packetBatchInfo;
- (void)setPacketBatchInfo:(id)arg1;
- (id)multiAnimationList;
- (void)setMultiAnimationList:(id)arg1;
- (id)customizationModel;
- (void)setCustomizationModel:(id)arg1;
- (id)newedCustomizationModel;
- (void)setNewedCustomizationModel:(id)arg1;
- (id)anchorCustomizeStyle;
- (void)setAnchorCustomizeStyle:(id)arg1;
- (unsigned int)freeGiftSeq;
- (void)setFreeGiftSeq:(unsigned int)arg1;
- (BOOL)useRfxPag;
- (void)setUseRfxPag:(BOOL)arg1;
- (void).cxx_destruct;
@end

