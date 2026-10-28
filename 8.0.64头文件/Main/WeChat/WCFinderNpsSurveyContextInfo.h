@interface WCFinderNpsSurveyContextInfo : NSObject
{
    int _pageScene; // +0x8
    unsigned long long _enterIndexInFeedStream; // +0x10
    unsigned long long _currentIndexInFeedStream; // +0x18
    NSString * _contentTid; // +0x20
    unsigned long long _contentMediaType; // +0x28
    unsigned long long _relativeIndex; // +0x30
}
- (int)pageScene;
- (void)setPageScene:(int)arg1;
- (unsigned long long)enterIndexInFeedStream;
- (void)setEnterIndexInFeedStream:(unsigned long long)arg1;
- (unsigned long long)currentIndexInFeedStream;
- (void)setCurrentIndexInFeedStream:(unsigned long long)arg1;
- (id)contentTid;
- (void)setContentTid:(id)arg1;
- (unsigned long long)contentMediaType;
- (void)setContentMediaType:(unsigned long long)arg1;
- (unsigned long long)relativeIndex;
- (void)setRelativeIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
