@interface MMImageActionSnsShareItem : MMImageActionSheetItem <WCCommitViewResultDelegate>
{
    BOOL _isFromFav; // +0x8
    unsigned int _favLocalId; // +0xc
    NSString * _noteId; // +0x10
}
- (id)init;
- (void)handleWithImage;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)noteId;
- (void)setNoteId:(id)arg1;
- (unsigned int)favLocalId;
- (void)setFavLocalId:(unsigned int)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (void).cxx_destruct;
@end
