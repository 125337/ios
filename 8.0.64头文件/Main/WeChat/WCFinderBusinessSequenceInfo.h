@interface WCFinderBusinessSequenceInfo : NSObject
{
    int _pageId; // +0x8
    long long _timeStamp; // +0x10
}
- (id)genReportJson;
- (int)pageId;
- (void)setPageId:(int)arg1;
- (long long)timeStamp;
- (void)setTimeStamp:(long long)arg1;
@end
