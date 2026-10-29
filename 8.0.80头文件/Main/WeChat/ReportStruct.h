@interface ReportStruct : NSObject
{
    BOOL _hasSendEmoji; // +0x8
    BOOL _fromSelfRefresh; // +0x9
    int _maxLineShowIndex; // +0xc
    int _recommendCount; // +0x10
    unsigned long long _pageShowTime; // +0x18
    unsigned long long _showTime; // +0x20
    unsigned long long _requestId; // +0x28
    NSMutableDictionary * _emoticonInfo; // +0x30
    NSString * _inputQuery; // +0x38
    NSMutableArray * _queryList; // +0x40
    unsigned long long _startRequestTime; // +0x48
    NSMutableArray * _emoticonLoadingRecord; // +0x50
    unsigned long long _startLoadingTime; // +0x58
    unsigned long long _emoticonCountFromServer; // +0x60
    NSMutableSet * _hasShowEmoticons; // +0x68
}
- (id)init;
- (BOOL)hasSendEmoji;
- (void)setHasSendEmoji:(BOOL)arg1;
- (unsigned long long)pageShowTime;
- (void)setPageShowTime:(unsigned long long)arg1;
- (unsigned long long)showTime;
- (void)setShowTime:(unsigned long long)arg1;
- (int)maxLineShowIndex;
- (void)setMaxLineShowIndex:(int)arg1;
- (int)recommendCount;
- (void)setRecommendCount:(int)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)emoticonInfo;
- (void)setEmoticonInfo:(id)arg1;
- (id)inputQuery;
- (void)setInputQuery:(id)arg1;
- (id)queryList;
- (void)setQueryList:(id)arg1;
- (unsigned long long)startRequestTime;
- (void)setStartRequestTime:(unsigned long long)arg1;
- (id)emoticonLoadingRecord;
- (void)setEmoticonLoadingRecord:(id)arg1;
- (BOOL)fromSelfRefresh;
- (void)setFromSelfRefresh:(BOOL)arg1;
- (unsigned long long)startLoadingTime;
- (void)setStartLoadingTime:(unsigned long long)arg1;
- (unsigned long long)emoticonCountFromServer;
- (void)setEmoticonCountFromServer:(unsigned long long)arg1;
- (id)hasShowEmoticons;
- (void)setHasShowEmoticons:(id)arg1;
- (void).cxx_destruct;
@end
