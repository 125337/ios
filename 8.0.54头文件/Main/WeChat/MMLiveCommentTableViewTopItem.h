@interface MMLiveCommentTableViewTopItem : NSObject
{
    BOOL _deleteOriginCell; // +0x8
    MMFinderLiveCommentTableViewCellFrame * _cellFrame; // +0x10
    double _displayDuration; // +0x18
    MMFinderLiveCommentTableViewCellFrame * _originalCellFrame; // +0x20
    long long _originalCommentIndex; // +0x28
}
- (id)cellFrame;
- (void)setCellFrame:(id)arg1;
- (double)displayDuration;
- (void)setDisplayDuration:(double)arg1;
- (BOOL)deleteOriginCell;
- (void)setDeleteOriginCell:(BOOL)arg1;
- (id)originalCellFrame;
- (void)setOriginalCellFrame:(id)arg1;
- (long long)originalCommentIndex;
- (void)setOriginalCommentIndex:(long long)arg1;
- (void).cxx_destruct;
@end

