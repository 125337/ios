@interface WCFinderEventPosterViewModel : NSObject
{
    id <WCFinderEventPosterViewModelDelegate> _delegate; // +0x8
    FinderEventInfo * _eventInfo; // +0x10
    unsigned long long _eventTopicId; // +0x18
}
- (id)initWithEventTopicId:(unsigned long long)arg1;
- (id)initWithEventInfo:(id)arg1;
- (void)requestEventInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
