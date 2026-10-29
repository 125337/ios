@interface TextStateCacheEntry : NSObject
{
    NSString * _username; // +0x8
    NSMutableArray * _privateTextStateList; // +0x10
}
- (id)initWithUsername:(id)arg1;
- (void)addTextState:(id)arg1 checkExist:(BOOL)arg2;
- (void)addTextState:(id)arg1;
- (void)removeTextStateForId:(id)arg1;
- (long long)indexOfTextStateForId:(id)arg1;
- (id)textStateList;
- (id)mostRecentTextState;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)privateTextStateList;
- (void)setPrivateTextStateList:(id)arg1;
- (void).cxx_destruct;
@end

