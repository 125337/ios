@interface MMFinderLiveLikeNotifyDataItem : MMLiveCommentDataItem
{
    MMFinderLiveLikeMsgInfo * _likeMsgInfo; // +0x8
    NSString * _suffixContent; // +0x10
    NSString * _prefixContent; // +0x18
}
- (id)initWithLikeMsgInfo:(id)arg1;
- (void)updateLikeMsgInfo:(id)arg1;
- (unsigned long long)getHeadUrlCount;
- (id)getDisplayContentWithPrefix:(id)arg1;
- (void)updateData;
- (id)createPrefixContent;
- (id)createSuffixContent;
- (id)likeMsgInfo;
- (void)setLikeMsgInfo:(id)arg1;
- (id)suffixContent;
- (void)setSuffixContent:(id)arg1;
- (id)prefixContent;
- (void)setPrefixContent:(id)arg1;
- (void).cxx_destruct;
@end

