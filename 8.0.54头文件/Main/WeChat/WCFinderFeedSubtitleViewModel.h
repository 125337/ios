@interface WCFinderFeedSubtitleViewModel : NSObject <WCFinderFeedSubtitleSettingViewControllerDelegate>
{
    NSString * _tid; // +0x8
    NSArray * _languageArray; // +0x10
    NSSet * _displayLanguageSet; // +0x18
    unsigned long long _subtitleId; // +0x20
    NSData * _lastBuffer; // +0x28
    unsigned long long _prefetchTimeInterval; // +0x30
    NSMutableArray * _timeSectionArray; // +0x38
    NSMutableArray * _requestingSectionArray; // +0x40
    NSMutableArray * _sentenceArray; // +0x48
}
- (id)initWithTid:(id)arg1;
- (void)addSubtitle:(id)arg1;
- (id)getSentenceAtTime:(unsigned long long)arg1;
- (id)getNextSentenceAtTime:(unsigned long long)arg1;
- (void)requestSubtitleIfNeeded:(unsigned long long)arg1 commentScene:(int)arg2;
- (BOOL)updateRange:(id)arg1;
- (_NSRange)timeLocationAtTimeSectionArray:(unsigned long long)arg1 left:(long long)arg2 right:(long long)arg3;
- (void)requestSubtitle:(unsigned long long)arg1 commentScene:(int)arg2;
- (void)addSentence:(id)arg1;
- (_NSRange)indexOfTime:(unsigned long long)arg1 left:(long long)arg2 right:(long long)arg3;
- (BOOL)isRequestingSubtitleAtTime:(unsigned long long)arg1;
- (id)timeSectionArray;
- (id)requestingSectionArray;
- (id)sentenceArray;
- (void)onFinderFeedSubtitleDisplayLanguageChanged:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)languageArray;
- (void)setLanguageArray:(id)arg1;
- (id)displayLanguageSet;
- (void)setDisplayLanguageSet:(id)arg1;
- (unsigned long long)subtitleId;
- (void)setSubtitleId:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)prefetchTimeInterval;
- (void)setPrefetchTimeInterval:(unsigned long long)arg1;
- (void)setTimeSectionArray:(id)arg1;
- (void)setRequestingSectionArray:(id)arg1;
- (void)setSentenceArray:(id)arg1;
- (void).cxx_destruct;
@end

