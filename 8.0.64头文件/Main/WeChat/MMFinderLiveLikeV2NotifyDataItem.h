@interface MMFinderLiveLikeV2NotifyDataItem : MMLiveCommentDataItem
{
    MMFinderLiveLikeV2MsgInfo * _likeV2MsgInfo; // +0x8
    NSString * _suffixContent; // +0x10
    NSString * _prefixContent; // +0x18
}
- (id)initWithLikeV2MsgInfo:(id)arg1;
- (id)getDisplayContentWithPrefix:(id)arg1;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (id)likeV2MsgInfo;
- (void)setLikeV2MsgInfo:(id)arg1;
- (id)suffixContent;
- (void)setSuffixContent:(id)arg1;
- (id)prefixContent;
- (void)setPrefixContent:(id)arg1;
- (void).cxx_destruct;
@end
