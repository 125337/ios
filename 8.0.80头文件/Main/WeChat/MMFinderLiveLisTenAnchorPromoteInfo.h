@interface MMFinderLiveLisTenAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo
{
    FinderLiveListenPromoteInfo * _liveListenPromoteInfo; // +0x30
}
+ (id)createListenAnchorPromoteInfoFrom:(id)arg1;
- (id)promoteKey;
- (id)liveListenPromoteInfo;
- (void)setLiveListenPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end
