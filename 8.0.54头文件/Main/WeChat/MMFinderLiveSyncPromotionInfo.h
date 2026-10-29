@interface MMFinderLiveSyncPromotionInfo : NSObject
{
    BOOL _isAudience; // +0x8
    unsigned int _promoteStatus; // +0xc
    unsigned int _panelShowTime; // +0x10
    unsigned long long _joinAudienceNumber; // +0x18
    WCFinderJumpInfo * _promotePanelInfo; // +0x20
    FinderJumpInfo * _oriPromotePanelInfo; // +0x28
}
- (id)initWithAudiencePromotionInfoResp:(id)arg1;
- (id)initWithAuthorPromotionInfoResp:(id)arg1;
- (void)copyFromAudiencePromotionInfoResp:(id)arg1;
- (void)copyFromAuthorPromotionInfoResp:(id)arg1;
- (id)description;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (unsigned long long)joinAudienceNumber;
- (void)setJoinAudienceNumber:(unsigned long long)arg1;
- (unsigned int)promoteStatus;
- (void)setPromoteStatus:(unsigned int)arg1;
- (id)promotePanelInfo;
- (void)setPromotePanelInfo:(id)arg1;
- (id)oriPromotePanelInfo;
- (void)setOriPromotePanelInfo:(id)arg1;
- (unsigned int)panelShowTime;
- (void)setPanelShowTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

