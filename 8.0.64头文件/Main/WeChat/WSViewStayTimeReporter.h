@interface WSViewStayTimeReporter : WSReportBaseItem
{
    unsigned int _searchScene; // +0x8
    unsigned long long _scene; // +0x10
    unsigned long long _enterType; // +0x18
    NSString * _content; // +0x20
    NSString * _connectid; // +0x28
    double _beginTime; // +0x30
    double _stayDuration; // +0x38
}
- (id)initWithImageSearchEntity:(id)arg1;
- (id)initWithFingertipReportModel:(id)arg1;
- (id)initWithTagInfo:(id)arg1 query:(id)arg2;
- (id)initWithSearchScene:(unsigned int)arg1;
- (id)init;
- (void)commonInit;
- (void)beginTiming;
- (void)endTiming;
- (id)reportContent;
- (unsigned int)reportKvId;
- (void)doReport;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)connectid;
- (void)setConnectid:(id)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)stayDuration;
- (void)setStayDuration:(double)arg1;
- (void).cxx_destruct;
@end
