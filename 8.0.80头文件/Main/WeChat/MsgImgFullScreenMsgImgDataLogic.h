@interface MsgImgFullScreenMsgImgDataLogic : MsgImgDataLogic
{
    NSSet * _searchResultMessageLocalIds; // +0x48
}
- (BOOL)isMsgMatch:(id)arg1;
- (id)asyncLoadSomeImg:(BOOL)arg1;
- (void)updateMsgArray;
- (id)searchResultMessageLocalIds;
- (void)setSearchResultMessageLocalIds:(id)arg1;
- (void).cxx_destruct;
@end
