@interface MMFinderCreateLiveSpamCheckReportSession : NSObject
{
    int _scene; // +0x8
    unsigned long long _enterTimestamp; // +0x10
    NSString * _pageId; // +0x18
    NSString * _finderUserName; // +0x20
}
- (id)initWithScene:(int)arg1 pageId:(id)arg2;
- (void)reportEntering;
- (void)reportLeaving;
- (void)reportExposeEid:(id)arg1;
- (void)reportClickEid:(id)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end

