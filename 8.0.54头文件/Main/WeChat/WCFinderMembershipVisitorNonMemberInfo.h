@interface WCFinderMembershipVisitorNonMemberInfo : NSObject <PBCoding>
{
    FinderLiveNoticeListInfo * _liveNoticeListInfo; // +0x8
    NSMutableArray * _previewVideoArray; // +0x10
    unsigned long long _otherVideoNum; // +0x18
    NSMutableArray * _previewLiveArray; // +0x20
    unsigned long long _otherLiveNum; // +0x28
    NSMutableArray * _previewActivityArray; // +0x30
    unsigned long long _totalActivityNum; // +0x38
    NSMutableArray * _moreVideoPreviewInfoArray; // +0x40
    NSMutableArray * _moreLivePreviewInfoArray; // +0x48
    NSData * _videoShortLastBuffer; // +0x50
    NSData * _liveShortLastBuffer; // +0x58
    unsigned long long _videoShortNum; // +0x60
    unsigned long long _liveShortNum; // +0x68
    unsigned long long _previewVideoLastUpdateTime; // +0x70
    unsigned long long _previewLiveLastUpdateTime; // +0x78
}
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_previewVideoArray;
+ (void)PBArrayAdd_otherVideoNum;
+ (void)PBArrayAdd_previewLiveArray;
+ (void)PBArrayAdd_otherLiveNum;
+ (void)PBArrayAdd_moreVideoPreviewInfoArray;
+ (void)PBArrayAdd_moreLivePreviewInfoArray;
+ (void)PBArrayAdd_previewActivityArray;
+ (void)PBArrayAdd_totalActivityNum;
+ (void)PBArrayAdd_videoShortLastBuffer;
+ (void)PBArrayAdd_liveShortLastBuffer;
+ (void)PBArrayAdd_videoShortNum;
+ (void)PBArrayAdd_liveShortNum;
+ (void)PBArrayAdd_previewVideoLastUpdateTime;
+ (void)PBArrayAdd_previewLiveLastUpdateTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithVisitorNonMemberInfo:(id)arg1;
- (void)memberFeedIsPreview:(id)arg1 isPreview:(BOOL)arg2;
- (id)liveNoticeListInfo;
- (void)setLiveNoticeListInfo:(id)arg1;
- (id)previewVideoArray;
- (void)setPreviewVideoArray:(id)arg1;
- (unsigned long long)otherVideoNum;
- (void)setOtherVideoNum:(unsigned long long)arg1;
- (id)previewLiveArray;
- (void)setPreviewLiveArray:(id)arg1;
- (unsigned long long)otherLiveNum;
- (void)setOtherLiveNum:(unsigned long long)arg1;
- (id)previewActivityArray;
- (void)setPreviewActivityArray:(id)arg1;
- (unsigned long long)totalActivityNum;
- (void)setTotalActivityNum:(unsigned long long)arg1;
- (id)moreVideoPreviewInfoArray;
- (void)setMoreVideoPreviewInfoArray:(id)arg1;
- (id)moreLivePreviewInfoArray;
- (void)setMoreLivePreviewInfoArray:(id)arg1;
- (id)videoShortLastBuffer;
- (void)setVideoShortLastBuffer:(id)arg1;
- (id)liveShortLastBuffer;
- (void)setLiveShortLastBuffer:(id)arg1;
- (unsigned long long)videoShortNum;
- (void)setVideoShortNum:(unsigned long long)arg1;
- (unsigned long long)liveShortNum;
- (void)setLiveShortNum:(unsigned long long)arg1;
- (unsigned long long)previewVideoLastUpdateTime;
- (void)setPreviewVideoLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)previewLiveLastUpdateTime;
- (void)setPreviewLiveLastUpdateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

