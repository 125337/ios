@interface MMLiveCommentTableViewCellFrame : NSObject <MMLiveCommentTableViewCellFrameInitializeProtocol>
{
    BOOL _isLastLine; // +0x8
    BOOL _isFirstLine; // +0x9
    unsigned int _msgType; // +0xc
    double _cellHeight; // +0x10
    double _currCellHeight; // +0x18
    MMLiveCommentDataItem * _comment; // +0x20
    MMLiveTaskId * _taskId; // +0x28
}
+ (double)liveCommentCellToCellMargin:(unsigned long long)arg1;
+ (double)standardLiveCommentCellHeight:(unsigned long long)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(BOOL)arg2;
- (void)calculateWithCommentInfo:(id)arg1 isFirstLine:(BOOL)arg2;
- (void)resetCellFrame;
- (double)cellHeight;
- (double)currCellHeight;
- (BOOL)isLastLine;
- (void)setIsLastLine:(BOOL)arg1;
- (BOOL)isFirstLine;
- (void)setIsFirstLine:(BOOL)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end

