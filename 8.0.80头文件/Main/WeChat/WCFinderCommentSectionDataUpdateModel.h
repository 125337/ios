@interface WCFinderCommentSectionDataUpdateModel : NSObject
{
    BOOL _forceUpdate; // +0x8
    _NSRange _insertRange; // +0x10
    _NSRange _deleteRange; // +0x20
    _NSRange _updateRange; // +0x30
}
- (_NSRange)insertRange;
- (void)setInsertRange:(_NSRange)arg1;
- (_NSRange)deleteRange;
- (void)setDeleteRange:(_NSRange)arg1;
- (_NSRange)updateRange;
- (void)setUpdateRange:(_NSRange)arg1;
- (BOOL)forceUpdate;
- (void)setForceUpdate:(BOOL)arg1;
@end
