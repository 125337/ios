@interface FTSTalkerEntryInfo : NSObject
{
    BOOL _isInSession; // +0x8
    NSString * _talker; // +0x10
    NSString * _query; // +0x18
}
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (BOOL)isInSession;
- (void)setIsInSession:(BOOL)arg1;
- (void).cxx_destruct;
@end

