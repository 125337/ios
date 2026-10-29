@interface MPCommentSectionData : NSObject
{
    MPCommentMsg * _commentMsg; // +0x8
    NSMutableArray * _cellViewModelArray; // +0x10
}
- (id)initWithMPCommentMsg:(id)arg1 isMutiReplyEnable:(BOOL)arg2;
- (void)initCellViewModelArray:(BOOL)arg1;
- (id)commentMsg;
- (void)setCommentMsg:(id)arg1;
- (id)cellViewModelArray;
- (void)setCellViewModelArray:(id)arg1;
- (void).cxx_destruct;
@end

