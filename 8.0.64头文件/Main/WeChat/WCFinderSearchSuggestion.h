@interface WCFinderSearchSuggestion : NSObject
{
    NSString * _tips; // +0x8
    NSString * _highLightTips; // +0x10
    unsigned long long _dataType; // +0x18
    NSMutableArray * _tipsHighLightkeywords; // +0x20
}
- (id)initWithTips:(id)arg1 highLightTips:(id)arg2 dataType:(unsigned long long)arg3;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithHistoryTips:(id)arg1;
- (id)initClearTypeSuggestion;
- (id)tipsHighLightkeywords;
- (void)processHighLightkeywords;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)highLightTips;
- (void)setHighLightTips:(id)arg1;
- (unsigned long long)dataType;
- (void)setDataType:(unsigned long long)arg1;
- (void)setTipsHighLightkeywords:(id)arg1;
- (void).cxx_destruct;
@end
