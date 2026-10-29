@interface WCTimeLineCellShowItem : NSObject <NSObject>
{
    BOOL m_showWithInfo; // +0x8
    BOOL m_showLocationInfo; // +0x9
    BOOL m_showActionInfo; // +0xa
    BOOL m_isUploadFailed; // +0xb
    NSString * m_dataItemID; // +0x10
    unsigned int m_rewardCount; // +0x18
    BOOL m_isSightThumbImageDownloaded; // +0x1c
    BOOL _isNewLife; // +0x1d
    BOOL _isWeishange; // +0x1e
    BOOL _isNewMusicStyle; // +0x1f
    BOOL _isTigerStyle; // +0x20
    double _cacheTime; // +0x28
    WCActionAreaVM * _actionAreaVM; // +0x30
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x38
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x40
    WCFinderShareToMomentsItem * _finderShareToMomentsItem; // +0x48
    WCMicroMerchantFeedsGroup * _wsGroup; // +0x50
    NSString * _adInfoUpdateFlag; // +0x58
    NSString * _adDescription; // +0x60
    long long _adSocialLikeDisplayType; // +0x68
    TingShareListenItem * _tingListenItem; // +0x70
    TingShareCategoryItem * _tingCategoryItem; // +0x78
    TingShareLyricsItem * _tingLyricsItem; // +0x80
}
- (id)initWithDataItem:(id)arg1 actionAreaVM:(id)arg2;
- (BOOL)isDifferentWithDataItem:(id)arg1 actionAreaVM:(id)arg2;
- (id)fetchAdInfoUpdateFlagWithDataItem:(id)arg1;
- (id)fetchAdDescriptionWithDataItem:(id)arg1;
- (BOOL)isDifferentAdInfoWithDataItem:(id)arg1;
- (BOOL)isDifferentWsSateWithDataItem:(id)arg1;
- (BOOL)isDifferentMusicWithDataItem:(id)arg1;
- (BOOL)isDifferentTingAudioWithDataItem:(id)arg1;
- (BOOL)isDifferentTingCategoryWithDataItem:(id)arg1;
- (BOOL)m_showWithInfo;
- (void)setM_showWithInfo:(BOOL)arg1;
- (BOOL)m_showLocationInfo;
- (void)setM_showLocationInfo:(BOOL)arg1;
- (BOOL)m_showActionInfo;
- (void)setM_showActionInfo:(BOOL)arg1;
- (BOOL)m_isUploadFailed;
- (void)setM_isUploadFailed:(BOOL)arg1;
- (unsigned int)m_rewardCount;
- (void)setM_rewardCount:(unsigned int)arg1;
- (BOOL)m_isSightThumbImageDownloaded;
- (void)setM_isSightThumbImageDownloaded:(BOOL)arg1;
- (double)cacheTime;
- (void)setCacheTime:(double)arg1;
- (id)actionAreaVM;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (id)finderLongVideoShareItem;
- (void)setFinderLongVideoShareItem:(id)arg1;
- (id)finderShareToMomentsItem;
- (void)setFinderShareToMomentsItem:(id)arg1;
- (BOOL)isNewLife;
- (void)setIsNewLife:(BOOL)arg1;
- (BOOL)isWeishange;
- (void)setIsWeishange:(BOOL)arg1;
- (id)wsGroup;
- (void)setWsGroup:(id)arg1;
- (BOOL)isNewMusicStyle;
- (void)setIsNewMusicStyle:(BOOL)arg1;
- (id)adInfoUpdateFlag;
- (void)setAdInfoUpdateFlag:(id)arg1;
- (id)adDescription;
- (void)setAdDescription:(id)arg1;
- (long long)adSocialLikeDisplayType;
- (void)setAdSocialLikeDisplayType:(long long)arg1;
- (BOOL)isTigerStyle;
- (void)setIsTigerStyle:(BOOL)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)tingLyricsItem;
- (void)setTingLyricsItem:(id)arg1;
- (void).cxx_destruct;
@end

