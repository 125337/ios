@interface StatusCommentDataItem : NSObject
{
    unsigned int _commentCount; // +0x8
    NSString * _fromUsername; // +0x10
    NSString * _textStateId; // +0x18
    NSString * _content; // +0x20
    NSString * _commentId; // +0x28
    NSString * _rootCommentId; // +0x30
    NSString * _feedOwnerUsername; // +0x38
    unsigned long long _timeStamp; // +0x40
    unsigned long long _operation; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (BOOL)isDeleted;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (id)rootCommentId;
- (void)setRootCommentId:(id)arg1;
- (id)feedOwnerUsername;
- (void)setFeedOwnerUsername:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)operation;
- (void)setOperation:(unsigned long long)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
