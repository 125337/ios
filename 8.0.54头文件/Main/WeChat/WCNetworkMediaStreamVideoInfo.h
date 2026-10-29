@interface WCNetworkMediaStreamVideoInfo : NSObject
{
    unsigned int _m_uiStreamVideoTime; // +0x8
    NSString * _m_nsStreamVideoUrl; // +0x10
    NSString * _m_nsStreamVideoThumbUrl; // +0x18
    NSString * _m_nsStreamVideoTitle; // +0x20
    NSString * _m_nsStreamVideoWording; // +0x28
    NSString * _m_nsStreamVideoWebUrl; // +0x30
    NSString * _m_nsStreamVideoPublishId; // +0x38
    NSString * _m_nsStreamVideoAdUxInfo; // +0x40
    NSString * _m_nsStatExtStr; // +0x48
    NSString * _m_nsJsReportArgs; // +0x50
}
- (id)m_nsStreamVideoUrl;
- (void)setM_nsStreamVideoUrl:(id)arg1;
- (id)m_nsStreamVideoThumbUrl;
- (void)setM_nsStreamVideoThumbUrl:(id)arg1;
- (unsigned int)m_uiStreamVideoTime;
- (void)setM_uiStreamVideoTime:(unsigned int)arg1;
- (id)m_nsStreamVideoTitle;
- (void)setM_nsStreamVideoTitle:(id)arg1;
- (id)m_nsStreamVideoWording;
- (void)setM_nsStreamVideoWording:(id)arg1;
- (id)m_nsStreamVideoWebUrl;
- (void)setM_nsStreamVideoWebUrl:(id)arg1;
- (id)m_nsStreamVideoPublishId;
- (void)setM_nsStreamVideoPublishId:(id)arg1;
- (id)m_nsStreamVideoAdUxInfo;
- (void)setM_nsStreamVideoAdUxInfo:(id)arg1;
- (id)m_nsStatExtStr;
- (void)setM_nsStatExtStr:(id)arg1;
- (id)m_nsJsReportArgs;
- (void)setM_nsJsReportArgs:(id)arg1;
- (void).cxx_destruct;
@end

