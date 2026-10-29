@interface MMFinderLivePromoteInfoAvailableItem : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _businessType; // +0xc
    unsigned int _isAvailable; // +0x10
    unsigned int _isAddable; // +0x14
    unsigned int _canShow; // +0x18
    unsigned int _status; // +0x1c
    NSString * _statusTips; // +0x20
    FinderLiveNoticeInfo * _noticeInfo; // +0x28
    FinderLivePromoteInfoListWecomContact * _wecomContact; // +0x30
    FinderJumpInfo * _componentJumpInfo; // +0x38
    FinderLivePromoteInfoAvailableItem_LiveNoticeExtBuffer * _liveNoticeExtBuffer; // +0x40
    FinderLivePromoteInfoAvailableItem_WeComContactExtBuffer * _weComContactExtBuffer; // +0x48
    FinderLivePromoteInfoAvailableItem_ProgrammeListExtBuffer * _programmeListExtBuffer; // +0x50
    FinderLivePromoteInfoAvailableItem_JumpInfoExtBuffer * _jumpInfoExtBuffer; // +0x58
    FinderLivePromoteInfoAvailableItem_MemberZoneExtBuffer * _memberZoneExtBuffer; // +0x60
    FinderLivePromoteInfoAvailableItem_AdvertisementExtBuffer * _advertisementExtBuffer; // +0x68
    FinderLivePromoteInfoAvailableItem_AppDownLoadExtBuffer * _appDownLoadExtBuffer; // +0x70
    FinderLivePromoteInfoAvailableItem_MiniProgramExtBuffer * _miniProgramExtBuffer; // +0x78
    FinderLivePromoteInfoAvailableItem_OtherExtBuffer * _otherExtBuffer; // +0x80
    FinderLivePromoteInfoAvailableItem_RedPacketCoverExtBuffer * _redPacketCoverExtBuffer; // +0x88
    FinderLivePromoteInfoAvailableItem_ListenExtBuffer * _listenExtBuffer; // +0x90
    FinderLivePromoteInfoAvailableItem_PaidCollectionExtBuffer * _paidCollectionExtBuffer; // +0x98
}
+ (id)createAnchorPromoteAvailableItemFrom:(id)arg1;
+ (BOOL)shouldReportAtPromoteManagerAvaiableListWithType:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)isAvailable;
- (void)setIsAvailable:(unsigned int)arg1;
- (unsigned int)isAddable;
- (void)setIsAddable:(unsigned int)arg1;
- (unsigned int)canShow;
- (void)setCanShow:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)wecomContact;
- (void)setWecomContact:(id)arg1;
- (id)componentJumpInfo;
- (void)setComponentJumpInfo:(id)arg1;
- (id)liveNoticeExtBuffer;
- (void)setLiveNoticeExtBuffer:(id)arg1;
- (id)weComContactExtBuffer;
- (void)setWeComContactExtBuffer:(id)arg1;
- (id)programmeListExtBuffer;
- (void)setProgrammeListExtBuffer:(id)arg1;
- (id)jumpInfoExtBuffer;
- (void)setJumpInfoExtBuffer:(id)arg1;
- (id)memberZoneExtBuffer;
- (void)setMemberZoneExtBuffer:(id)arg1;
- (id)advertisementExtBuffer;
- (void)setAdvertisementExtBuffer:(id)arg1;
- (id)appDownLoadExtBuffer;
- (void)setAppDownLoadExtBuffer:(id)arg1;
- (id)miniProgramExtBuffer;
- (void)setMiniProgramExtBuffer:(id)arg1;
- (id)otherExtBuffer;
- (void)setOtherExtBuffer:(id)arg1;
- (id)redPacketCoverExtBuffer;
- (void)setRedPacketCoverExtBuffer:(id)arg1;
- (id)listenExtBuffer;
- (void)setListenExtBuffer:(id)arg1;
- (id)paidCollectionExtBuffer;
- (void)setPaidCollectionExtBuffer:(id)arg1;
- (void).cxx_destruct;
@end
