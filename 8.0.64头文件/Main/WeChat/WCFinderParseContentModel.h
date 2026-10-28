@interface WCFinderParseContentModel : NSObject <PBCoding, WCTColumnCoding>
{
    NSMutableString * _content; // +0x8
    NSMutableString * _contentHighlight; // +0x10
    NSMutableArray * _topicsArray; // +0x18
    NSMutableArray * _mentionArray; // +0x20
    NSMutableArray * _mentionRangeArray; // +0x28
    unsigned long long _lastParseTimeStamp; // +0x30
    NSString * _lastParseTitleMd5; // +0x38
}
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_contentHighlight;
+ (void)PBArrayAdd_topicsArray;
+ (void)PBArrayAdd_mentionArray;
+ (void)PBArrayAdd_lastParseTimeStamp;
+ (void)PBArrayAdd_lastParseTitleMd5;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (id)content;
- (void)setContent:(id)arg1;
- (id)contentHighlight;
- (void)setContentHighlight:(id)arg1;
- (id)topicsArray;
- (void)setTopicsArray:(id)arg1;
- (id)mentionArray;
- (void)setMentionArray:(id)arg1;
- (id)mentionRangeArray;
- (void)setMentionRangeArray:(id)arg1;
- (unsigned long long)lastParseTimeStamp;
- (void)setLastParseTimeStamp:(unsigned long long)arg1;
- (id)lastParseTitleMd5;
- (void)setLastParseTitleMd5:(id)arg1;
- (void).cxx_destruct;
@end
