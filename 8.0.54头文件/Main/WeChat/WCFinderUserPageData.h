@interface WCFinderUserPageData : NSObject
{
    BOOL _isFirstPageRequest; // +0x8
    BOOL _pullFromTop; // +0x9
    BOOL _continueFlag; // +0xa
    unsigned long long _topicId; // +0x10
    NSArray * _dataArray; // +0x18
    WCFinderContact * _contact; // +0x20
    NSData * _lastBuffer; // +0x28
    FinderUserPageResponse * _response; // +0x30
}
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (BOOL)isFirstPageRequest;
- (void)setIsFirstPageRequest:(BOOL)arg1;
- (BOOL)pullFromTop;
- (void)setPullFromTop:(BOOL)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void).cxx_destruct;
@end

