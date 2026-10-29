@interface WCFinderShareExposeReportModel : NSObject
{
    unsigned long long _entersession; // +0x8
    double _event_time; // +0x10
    unsigned long long _cardType; // +0x18
    unsigned long long _sourceCommentScene; // +0x20
    NSString * _sourceusr; // +0x28
    NSString * _feedid; // +0x30
    NSString * _eventId; // +0x38
    NSString * _shareUsername; // +0x40
}
+ (void)msgContentVCExpose;
- (void)log;
- (unsigned long long)entersession;
- (void)setEntersession:(unsigned long long)arg1;
- (double)event_time;
- (void)setEvent_time:(double)arg1;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (unsigned long long)sourceCommentScene;
- (void)setSourceCommentScene:(unsigned long long)arg1;
- (id)sourceusr;
- (void)setSourceusr:(id)arg1;
- (id)feedid;
- (void)setFeedid:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)shareUsername;
- (void)setShareUsername:(id)arg1;
- (void).cxx_destruct;
@end

