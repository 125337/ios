@interface ContactsSearchKeywordResult : NSObject
{
    NSArray * _results; // +0x8
    NSDictionary * _matchTips; // +0x10
}
+ (id)emptyResult;
- (id)initWithResults:(id)arg1 matchTips:(id)arg2;
- (id)results;
- (id)matchTips;
- (void).cxx_destruct;
@end
