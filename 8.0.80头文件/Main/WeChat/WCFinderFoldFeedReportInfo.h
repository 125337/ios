@interface WCFinderFoldFeedReportInfo : NSObject
{
    NSString * _tid; // +0x8
    NSString * _userName; // +0x10
    unsigned long long _foldFeedCount; // +0x18
    NSMutableArray * _foldDetailInfos; // +0x20
    unsigned long long _topButtonFirstClickTimeStamp; // +0x28
    unsigned long long _moreButtonFirstClickTimeStamp; // +0x30
}
+ (id)infoWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)foldFeedCount;
- (void)setFoldFeedCount:(unsigned long long)arg1;
- (id)foldDetailInfos;
- (void)setFoldDetailInfos:(id)arg1;
- (unsigned long long)topButtonFirstClickTimeStamp;
- (void)setTopButtonFirstClickTimeStamp:(unsigned long long)arg1;
- (unsigned long long)moreButtonFirstClickTimeStamp;
- (void)setMoreButtonFirstClickTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
