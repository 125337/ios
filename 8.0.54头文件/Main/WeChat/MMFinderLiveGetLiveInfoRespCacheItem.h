@interface MMFinderLiveGetLiveInfoRespCacheItem : NSObject
{
    unsigned int _noticeType; // +0x8
    WCFinderLiveInfo * _liveInfo; // +0x10
    WCFinderGetLiveInfoModel * _getLiveInfoModel; // +0x18
    NSString * _reportExtInfo; // +0x20
    NSString * _tipsId; // +0x28
}
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)getLiveInfoModel;
- (void)setGetLiveInfoModel:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (id)tipsId;
- (void)setTipsId:(id)arg1;
- (void).cxx_destruct;
@end

