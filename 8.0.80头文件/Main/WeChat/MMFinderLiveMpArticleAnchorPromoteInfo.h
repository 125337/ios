@interface MMFinderLiveMpArticleAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo
{
    FinderLivePromoteInfoListMpArticleInfo * _articleInfo; // +0x30
}
+ (id)createArticleAnchorPromoteInfoFrom:(id)arg1;
- (id)promoteKey;
- (id)articleInfo;
- (void)setArticleInfo:(id)arg1;
- (void).cxx_destruct;
@end
