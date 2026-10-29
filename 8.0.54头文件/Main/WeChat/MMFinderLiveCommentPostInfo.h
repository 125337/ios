@interface MMFinderLiveCommentPostInfo : NSObject
{
    unsigned int _floatMsgType; // +0x8
    NSString * _postContent; // +0x10
    FinderLiveBoxId * _boxIdObj; // +0x18
    unsigned long long _postType; // +0x20
    unsigned long long _forwardType; // +0x28
    NSString * _floatMsgProductId; // +0x30
    NSArray * _toUserList; // +0x38
    MMLiveCommentDataItem * _selectCommentItem; // +0x40
    FinderWindowProductInfo * _questionProductInfo; // +0x48
    FinderLiveContact * _fromUser; // +0x50
}
- (id)postContent;
- (void)setPostContent:(id)arg1;
- (id)boxIdObj;
- (void)setBoxIdObj:(id)arg1;
- (unsigned long long)postType;
- (void)setPostType:(unsigned long long)arg1;
- (unsigned long long)forwardType;
- (void)setForwardType:(unsigned long long)arg1;
- (unsigned int)floatMsgType;
- (void)setFloatMsgType:(unsigned int)arg1;
- (id)floatMsgProductId;
- (void)setFloatMsgProductId:(id)arg1;
- (id)toUserList;
- (void)setToUserList:(id)arg1;
- (id)selectCommentItem;
- (void)setSelectCommentItem:(id)arg1;
- (id)questionProductInfo;
- (void)setQuestionProductInfo:(id)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (void).cxx_destruct;
@end

