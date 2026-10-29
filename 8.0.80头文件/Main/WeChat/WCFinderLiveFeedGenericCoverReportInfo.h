@interface WCFinderLiveFeedGenericCoverReportInfo : NSObject
{
    unsigned long long _coverDownloadStartTimeMS; // +0x8
    unsigned long long _coverDownloadFinishTimeMS; // +0x10
    unsigned long long _feedId; // +0x18
}
- (unsigned long long)coverDownloadStartTimeMS;
- (void)setCoverDownloadStartTimeMS:(unsigned long long)arg1;
- (unsigned long long)coverDownloadFinishTimeMS;
- (void)setCoverDownloadFinishTimeMS:(unsigned long long)arg1;
- (unsigned long long)feedId;
- (void)setFeedId:(unsigned long long)arg1;
@end
